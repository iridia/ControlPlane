//
//	DisplayBrightnessAction.m
//	ControlPlane
//
//	Created by David Jennes on 02/09/11.
//  Modifiedy by Dustin Rue on 19/11/11.
//  inspired by http://dev.sabi.net/trac/dev/browser/trunk/LocationDo/brightness.m
//
//	Copyright 2011. All rights reserved.
//

#import <objc/runtime.h>
#import "DisplayBrightnessAction.h"
#import "DSLogger.h"
#import <IOKit/graphics/IOGraphicsLib.h>
#import <ApplicationServices/ApplicationServices.h>


#if DisplayBrightnessActionUsesO3Manager

#pragma mark Magic Bits!

@interface O3Manager : NSObject
+ (id)engineOfClass:(NSString *)cls forDisplayID:(CGDirectDisplayID)fp12;
@end
	
@protocol O3EngineWireProtocol
@end
	
@protocol BrightnessEngineWireProtocol <O3EngineWireProtocol>
- (float)brightness;
- (BOOL)setBrightness:(float)fp8;
- (void)bumpBrightnessUp;
- (void)bumpBrightnessDown;
@end

#endif


@interface DisplayBrightnessAction (Private)

+ (void) setBrightness: (float) brightness;

@end

@implementation DisplayBrightnessAction

- (id) init {
	self = [super init];
	if (!self)
		return nil;
	
	brightnessText = [[NSString alloc] init];
	brightness = 100;
	
	return self;
}

- (id) initWithDictionary: (NSDictionary *) dict {
	self = [super initWithDictionary: dict];
	if (!self)
		return nil;
	
	brightnessText = [[dict valueForKey: @"parameter"] copy];
	brightness = (unsigned int) [brightnessText intValue];
	
	// must be between 0 and 100
	brightness = (brightness > 100) ? 100 : brightness;
	brightnessText = [[NSString stringWithFormat: @"%d", brightness] copy];
	
	return self;
}

- (void) dealloc {
	[brightnessText release];
	
	[super dealloc];
}

- (NSMutableDictionary *) dictionary {
	NSMutableDictionary *dict = [super dictionary];
	
	[dict setObject: [[brightnessText copy] autorelease] forKey: @"parameter"];
	
	return dict;
}

- (NSString *) description {
	
	return [NSString stringWithFormat: NSLocalizedString(@"Set brightness to %@%%.", @""), brightnessText];
	
}

- (BOOL) execute: (NSString **) errorString {

	errorString = errorString ? errorString : &(NSString *){ nil };

#if DisplayBrightnessActionUsesO3Manager

	[O3Manager initialize];

#endif

	const int kMaxDisplays = 16;
	
	CGDirectDisplayID display[kMaxDisplays];
	CGDisplayCount numDisplays;
	CGDisplayErr err;
	
	err = CGGetActiveDisplayList(kMaxDisplays, display, &numDisplays);
	if (err != CGDisplayNoErr) {
		*errorString = [NSString stringWithFormat:@"Cannot get list of displays (error %d)", err];
		return NO;
	}

	for (CGDisplayCount i = 0; i < numDisplays; ++i) {
		
		CGDirectDisplayID displayID = display[i];

#if DisplayBrightnessActionUsesO3Manager
		
		id<BrightnessEngineWireProtocol> engine = [O3Manager engineOfClass:@"BrightnessEngine" forDisplayID:displayID];
		if (![engine setBrightness: brightness / 100.0]) {
			*errorString = [NSString stringWithFormat:@"Error setting brightness of display with ID " PRIu32, displayID];
			return NO;
		}

#else

		io_service_t const service = CGDisplayIOServicePort(displayID);
		CFStringRef const kDisplayBrightness = CFSTR(kIODisplayBrightnessKey);
		
		err = IODisplaySetFloatParameter(service, kNilOptions, kDisplayBrightness, brightness);
		if (err != kIOReturnSuccess) {
			*errorString = [NSString stringWithFormat:@"Failed to set brightness of display 0x%x (error %d)", (unsigned int)displayID, err];
			return NO;
		}
		
#endif

	}
	
	*errorString = [NSString stringWithFormat: NSLocalizedString(@"Failed setting brightness to %@%%.", @""), brightnessText];
	return NO;
	
}

+ (NSString *) helpText {
	return NSLocalizedString(@"The parameter for the Display Brightness action is the brightness value as a percent between 0 and 100.", @"");
}

+ (NSString *) creationHelpText {
	return NSLocalizedString(@"Set display brightness to (percent):", @"");
}

+ (NSString *) friendlyName {
    return NSLocalizedString(@"Display Brightness", @"");
}

+ (NSString *)menuCategory {
    return NSLocalizedString(@"System Preferences", @"");
}

@end
