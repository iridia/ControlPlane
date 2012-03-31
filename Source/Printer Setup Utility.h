/*
 * Printer Setup Utility.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class PrinterSetupUtilityApplication, PrinterSetupUtilityDocument, PrinterSetupUtilityWindow, PrinterSetupUtilityPrinter, PrinterSetupUtilityJob;

enum PrinterSetupUtilitySaveOptions {
	PrinterSetupUtilitySaveOptionsYes = 'yes ' /* Save the file. */,
	PrinterSetupUtilitySaveOptionsNo = 'no  ' /* Do not save the file. */,
	PrinterSetupUtilitySaveOptionsAsk = 'ask ' /* Ask the user whether or not to save the file. */
};
typedef enum PrinterSetupUtilitySaveOptions PrinterSetupUtilitySaveOptions;

enum PrinterSetupUtilityPrintingErrorHandling {
	PrinterSetupUtilityPrintingErrorHandlingStandard = 'lwst' /* Standard PostScript error handling */,
	PrinterSetupUtilityPrintingErrorHandlingDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum PrinterSetupUtilityPrintingErrorHandling PrinterSetupUtilityPrintingErrorHandling;

enum PrinterSetupUtilityPrinterStatus {
	PrinterSetupUtilityPrinterStatusError = 'erro' /* error */,
	PrinterSetupUtilityPrinterStatusPrinting = 'prng' /* printing */,
	PrinterSetupUtilityPrinterStatusIdle = 'idle' /* idle */,
	PrinterSetupUtilityPrinterStatusStopped = 'stop' /* stopped */
};
typedef enum PrinterSetupUtilityPrinterStatus PrinterSetupUtilityPrinterStatus;

enum PrinterSetupUtilityPriority {
	PrinterSetupUtilityPriorityUrgent = 'urge' /* urgent */,
	PrinterSetupUtilityPriorityLow = 'low ' /* low */,
	PrinterSetupUtilityPriorityNormal = 'norm' /* normal */
};
typedef enum PrinterSetupUtilityPriority PrinterSetupUtilityPriority;

enum PrinterSetupUtilityJobStatus {
	PrinterSetupUtilityJobStatusHoldUntil = 'unti' /* hold until */,
	PrinterSetupUtilityJobStatusWaiting = 'wait' /* waiting */,
	PrinterSetupUtilityJobStatusError = 'erro' /* error */,
	PrinterSetupUtilityJobStatusHold = 'hold' /* hold */,
	PrinterSetupUtilityJobStatusFinished = 'fini' /* finished */,
	PrinterSetupUtilityJobStatusAborted = 'abor' /* aborted */,
	PrinterSetupUtilityJobStatusPrinting = 'prng' /* printing */
};
typedef enum PrinterSetupUtilityJobStatus PrinterSetupUtilityJobStatus;



/*
 * Standard Suite
 */

// The application's top-level scripting object.
@interface PrinterSetupUtilityApplication : SBApplication
+ (PrinterSetupUtilityApplication *) application;

- (SBElementArray *) documents;
- (SBElementArray *) windows;

@property (copy, readonly) NSString *name;  // The name of the application.
@property (readonly) BOOL frontmost;  // Is this the active application?
@property (copy, readonly) NSString *version;  // The version number of the application.

- (id) open:(id)x;  // Open a document.
- (void) print:(id)x withProperties:(NSDictionary *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) quitSaving:(PrinterSetupUtilitySaveOptions)saving;  // Quit the application.
- (BOOL) exists:(id)x;  // Verify that an object exists.
- (void) getURL;  // Open a printer URL

@end

// A document.
@interface PrinterSetupUtilityDocument : SBObject

@property (copy, readonly) NSString *name;  // Its name.
@property (readonly) BOOL modified;  // Has it been modified since the last save?
@property (copy, readonly) NSURL *file;  // Its location on disk, if it has one.

- (void) closeSaving:(PrinterSetupUtilitySaveOptions)saving savingIn:(NSURL *)savingIn;  // Close a document.
- (void) saveIn:(NSURL *)in_ as:(id)as;  // Save a document.
- (void) printWithProperties:(NSDictionary *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A window.
@interface PrinterSetupUtilityWindow : SBObject

@property (copy, readonly) NSString *name;  // The title of the window.
- (NSInteger) id;  // The unique identifier of the window.
@property NSInteger index;  // The index of the window, ordered front to back.
@property NSRect bounds;  // The bounding rectangle of the window.
@property (readonly) BOOL closeable;  // Does the window have a close button?
@property (readonly) BOOL miniaturizable;  // Does the window have a minimize button?
@property BOOL miniaturized;  // Is the window minimized right now?
@property (readonly) BOOL resizable;  // Can the window be resized?
@property BOOL visible;  // Is the window visible right now?
@property (readonly) BOOL zoomable;  // Does the window have a zoom button?
@property BOOL zoomed;  // Is the window zoomed right now?
@property (copy, readonly) PrinterSetupUtilityDocument *document;  // The document whose contents are displayed in the window.

- (void) closeSaving:(PrinterSetupUtilitySaveOptions)saving savingIn:(NSURL *)savingIn;  // Close a document.
- (void) saveIn:(NSURL *)in_ as:(id)as;  // Save a document.
- (void) printWithProperties:(NSDictionary *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end



/*
 * Print Center Suite
 */

// A printer
@interface PrinterSetupUtilityPrinter : SBObject

- (SBElementArray *) jobs;

@property (copy, readonly) NSString *kind;  // the manufacturer's description of this printer model
@property (copy, readonly) NSString *name;  // the name that identifies this printer on the network
@property (copy, readonly) NSString *statusDescription;  // a description of the activity, if any, currently being performed by this printer
@property (readonly) PrinterSetupUtilityPrinterStatus status;  // a description of the activity, if any, currently being performed by this printer

- (void) closeSaving:(PrinterSetupUtilitySaveOptions)saving savingIn:(NSURL *)savingIn;  // Close a document.
- (void) saveIn:(NSURL *)in_ as:(id)as;  // Save a document.
- (void) printWithProperties:(NSDictionary *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

// A print job
@interface PrinterSetupUtilityJob : SBObject

@property (readonly) PrinterSetupUtilityPriority priority;  // the order of precedence of this job in the print queue
@property (copy, readonly) NSString *name;  // the name that identifies this job in the print queue
@property (readonly) PrinterSetupUtilityJobStatus status;  // a description of the activity, if any, currently being performed on this job

- (void) closeSaving:(PrinterSetupUtilitySaveOptions)saving savingIn:(NSURL *)savingIn;  // Close a document.
- (void) saveIn:(NSURL *)in_ as:(id)as;  // Save a document.
- (void) printWithProperties:(NSDictionary *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.

@end

@interface PrinterSetupUtilityApplication (PrintCenterSuite)

- (SBElementArray *) printers;

@property (copy) PrinterSetupUtilityPrinter *currentPrinter;  // the currently selected printer

@end

