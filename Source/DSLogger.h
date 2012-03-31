//
//  DSLogger.h
//  ControlPlane
//
//  Created by David Symonds on 22/07/07.
//

#import <Foundation/Foundation.h>

@interface DSLogger : NSObject {
	NSLock *lock;
	NSDateFormatter *timestampFormatter;

	// Clustering
	NSTimeInterval clusterThreshold;
	NSDate *clusterStartDate;
	NSMutableString *lastFunction;

	// Ring buffer
	NSMutableArray *buffer;
	int startIndex, count;
}

+ (DSLogger *)sharedLogger;

- (id)init;
- (void)dealloc;

- (void)logFromFunction:(NSString *)function withFormat:(NSString *)format, ...;

- (NSString *)buffer;

@end

#define DSLog(format, ...)	\
	[[DSLogger sharedLogger] logFromFunction:[NSString stringWithUTF8String:__PRETTY_FUNCTION__] withFormat:(format),##__VA_ARGS__]
