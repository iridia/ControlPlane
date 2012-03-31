/*
 * System Events.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class SystemEventsApplication, SystemEventsDocument, SystemEventsWindow, SystemEventsDiskItem, SystemEventsUser, SystemEventsAppearancePreferencesObject, SystemEventsCDAndDVDPreferencesObject, SystemEventsInsertionPreference, SystemEventsDesktop, SystemEventsDockPreferencesObject, SystemEventsExposePreferencesObject, SystemEventsScreenCorner, SystemEventsShortcut, SystemEventsSpacesPreferencesObject, SystemEventsSpacesShortcut, SystemEventsLoginItem, SystemEventsConfiguration, SystemEventsInterface, SystemEventsLocation, SystemEventsNetworkPreferencesObject, SystemEventsService, SystemEventsScreenSaver, SystemEventsScreenSaverPreferencesObject, SystemEventsSecurityPreferencesObject, SystemEventsAlias, SystemEventsDisk, SystemEventsDomain, SystemEventsClassicDomainObject, SystemEventsFile, SystemEventsFilePackage, SystemEventsFolder, SystemEventsLocalDomainObject, SystemEventsNetworkDomainObject, SystemEventsSystemDomainObject, SystemEventsUserDomainObject, SystemEventsFolderAction, SystemEventsScript, SystemEventsAction, SystemEventsAttribute, SystemEventsUIElement, SystemEventsBrowser, SystemEventsBusyIndicator, SystemEventsButton, SystemEventsCheckbox, SystemEventsColorWell, SystemEventsColumn, SystemEventsComboBox, SystemEventsDrawer, SystemEventsGroup, SystemEventsGrowArea, SystemEventsImage, SystemEventsIncrementor, SystemEventsList, SystemEventsMenu, SystemEventsMenuBar, SystemEventsMenuBarItem, SystemEventsMenuButton, SystemEventsMenuItem, SystemEventsOutline, SystemEventsPopOver, SystemEventsPopUpButton, SystemEventsProcess, SystemEventsApplicationProcess, SystemEventsDeskAccessoryProcess, SystemEventsProgressIndicator, SystemEventsRadioButton, SystemEventsRadioGroup, SystemEventsRelevanceIndicator, SystemEventsRow, SystemEventsScrollArea, SystemEventsScrollBar, SystemEventsSheet, SystemEventsSlider, SystemEventsSplitter, SystemEventsSplitterGroup, SystemEventsStaticText, SystemEventsTabGroup, SystemEventsTable, SystemEventsTextArea, SystemEventsTextField, SystemEventsToolbar, SystemEventsValueIndicator, SystemEventsPropertyListFile, SystemEventsPropertyListItem, SystemEventsAnnotation, SystemEventsQuickTimeData, SystemEventsAudioData, SystemEventsMovieData, SystemEventsQuickTimeFile, SystemEventsAudioFile, SystemEventsMovieFile, SystemEventsTrack, SystemEventsXMLAttribute, SystemEventsXMLData, SystemEventsXMLElement, SystemEventsXMLFile, SystemEventsPrintSettings;

enum SystemEventsSaveOptions {
	SystemEventsSaveOptionsYes = 'yes ' /* Save the file. */,
	SystemEventsSaveOptionsNo = 'no  ' /* Do not save the file. */,
	SystemEventsSaveOptionsAsk = 'ask ' /* Ask the user whether or not to save the file. */
};
typedef enum SystemEventsSaveOptions SystemEventsSaveOptions;

enum SystemEventsPrintingErrorHandling {
	SystemEventsPrintingErrorHandlingStandard = 'lwst' /* Standard PostScript error handling */,
	SystemEventsPrintingErrorHandlingDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum SystemEventsPrintingErrorHandling SystemEventsPrintingErrorHandling;

enum SystemEventsSaveableFileFormat {
	SystemEventsSaveableFileFormatText = 'ctxt' /* Text File Format */
};
typedef enum SystemEventsSaveableFileFormat SystemEventsSaveableFileFormat;

enum SystemEventsScrollArrowPlacements {
	SystemEventsScrollArrowPlacementsTogether = 'tgth' /* together */,
	SystemEventsScrollArrowPlacementsTogetherAtTopAndBottom = 'tgtb' /* together at top and bottom */,
	SystemEventsScrollArrowPlacementsTopAndBottom = 'tpbt' /* top and bottom */
};
typedef enum SystemEventsScrollArrowPlacements SystemEventsScrollArrowPlacements;

enum SystemEventsScrollPageBehaviors {
	SystemEventsScrollPageBehaviorsJumpToHere = 'tohr' /* jump to here */,
	SystemEventsScrollPageBehaviorsJumpToNextPage = 'nxpg' /* jump to next page */
};
typedef enum SystemEventsScrollPageBehaviors SystemEventsScrollPageBehaviors;

enum SystemEventsFontSmoothingStyles {
	SystemEventsFontSmoothingStylesAutomatic = 'autm' /* automatic */,
	SystemEventsFontSmoothingStylesLight = 'lite' /* light */,
	SystemEventsFontSmoothingStylesMedium = 'medi' /* medium */,
	SystemEventsFontSmoothingStylesStandard = 'stnd' /* standard */,
	SystemEventsFontSmoothingStylesStrong = 'strg' /* strong */
};
typedef enum SystemEventsFontSmoothingStyles SystemEventsFontSmoothingStyles;

enum SystemEventsAppearances {
	SystemEventsAppearancesBlue = 'blue' /* blue */,
	SystemEventsAppearancesGraphite = 'grft' /* graphite */
};
typedef enum SystemEventsAppearances SystemEventsAppearances;

enum SystemEventsHighlightColors {
	SystemEventsHighlightColorsBlue = 'blue' /* blue */,
	SystemEventsHighlightColorsGold = 'gold' /* gold */,
	SystemEventsHighlightColorsGraphite = 'grft' /* graphite */,
	SystemEventsHighlightColorsGreen = 'gren' /* green */,
	SystemEventsHighlightColorsOrange = 'orng' /* orange */,
	SystemEventsHighlightColorsPurple = 'prpl' /* purple */,
	SystemEventsHighlightColorsRed = 'red ' /* red */,
	SystemEventsHighlightColorsSilver = 'slvr' /* silver */
};
typedef enum SystemEventsHighlightColors SystemEventsHighlightColors;

enum SystemEventsDhac {
	SystemEventsDhacAskWhatToDo = 'dhas' /* ask what to do */,
	SystemEventsDhacIgnore = 'dhig' /* ignore */,
	SystemEventsDhacOpenApplication = 'dhap' /* open application */,
	SystemEventsDhacRunAScript = 'dhrs' /* run a script */
};
typedef enum SystemEventsDhac SystemEventsDhac;

enum SystemEventsDpls {
	SystemEventsDplsBottom = 'bott' /* bottom */,
	SystemEventsDplsLeft = 'left' /* left */,
	SystemEventsDplsRight = 'righ' /* right */
};
typedef enum SystemEventsDpls SystemEventsDpls;

enum SystemEventsDpef {
	SystemEventsDpefGenie = 'geni' /* genie */,
	SystemEventsDpefScale = 'scal' /* scale */
};
typedef enum SystemEventsDpef SystemEventsDpef;

enum SystemEventsActivities {
	SystemEventsActivitiesAllWindows = 'allw' /* all windows */,
	SystemEventsActivitiesApplicationWindows = 'appw' /* application windows */,
	SystemEventsActivitiesDashboard = 'dash' /* dashboard */,
	SystemEventsActivitiesDisableScreenSaver = 'disc' /* disable screen saver */,
	SystemEventsActivitiesNone = 'none' /* none */,
	SystemEventsActivitiesShowDesktop = 'desk' /* show desktop */,
	SystemEventsActivitiesShowSpaces = 'spcs' /* show spaces */,
	SystemEventsActivitiesSleepDisplay = 'diss' /* sleep display */,
	SystemEventsActivitiesStartScreenSaver = 'star' /* start screen saver */
};
typedef enum SystemEventsActivities SystemEventsActivities;

enum SystemEventsModifiers {
	SystemEventsModifiersCommand = 'cmdm' /* command */,
	SystemEventsModifiersControl = 'ctlm' /* control */,
	SystemEventsModifiersNone = 'none' /* none */,
	SystemEventsModifiersOption = 'optm' /* option */,
	SystemEventsModifiersShift = 'shtm' /* shift */
};
typedef enum SystemEventsModifiers SystemEventsModifiers;

enum SystemEventsFunctionKeys {
	SystemEventsFunctionKeysF1 = 'F1ky' /* F1 */,
	SystemEventsFunctionKeysF10 = 'F10k' /* F10 */,
	SystemEventsFunctionKeysF11 = 'F11k' /* F11 */,
	SystemEventsFunctionKeysF12 = 'F12k' /* F12 */,
	SystemEventsFunctionKeysF13 = 'F13k' /* F13 */,
	SystemEventsFunctionKeysF14 = 'F14k' /* F14 */,
	SystemEventsFunctionKeysF15 = 'F15k' /* F15 */,
	SystemEventsFunctionKeysF16 = 'F16k' /* F16 */,
	SystemEventsFunctionKeysF17 = 'F17k' /* F17 */,
	SystemEventsFunctionKeysF18 = 'F18k' /* F18 */,
	SystemEventsFunctionKeysF19 = 'F19k' /* F19 */,
	SystemEventsFunctionKeysF2 = 'F2ky' /* F2 */,
	SystemEventsFunctionKeysF3 = 'F3ky' /* F3 */,
	SystemEventsFunctionKeysF4 = 'F4ky' /* F4 */,
	SystemEventsFunctionKeysF5 = 'F5ky' /* F5 */,
	SystemEventsFunctionKeysF6 = 'F6ky' /* F6 */,
	SystemEventsFunctionKeysF7 = 'F7ky' /* F7 */,
	SystemEventsFunctionKeysF8 = 'F8ky' /* F8 */,
	SystemEventsFunctionKeysF9 = 'F9ky' /* F9 */,
	SystemEventsFunctionKeysLeftCommand = 'Lcmd' /* left command */,
	SystemEventsFunctionKeysLeftControl = 'Lctl' /* left control */,
	SystemEventsFunctionKeysLeftOption = 'Lopt' /* left option */,
	SystemEventsFunctionKeysLeftShift = 'Lsht' /* left shift */,
	SystemEventsFunctionKeysNone = 'none' /* none */,
	SystemEventsFunctionKeysRightCommand = 'Rcmd' /* right command */,
	SystemEventsFunctionKeysRightControl = 'Rctl' /* right control */,
	SystemEventsFunctionKeysRightOption = 'Ropt' /* right option */,
	SystemEventsFunctionKeysRightShift = 'Rsht' /* right shift */,
	SystemEventsFunctionKeysSecondaryFunctionKey = 'SFky' /* secondary function key */
};
typedef enum SystemEventsFunctionKeys SystemEventsFunctionKeys;

enum SystemEventsEdfm {
	SystemEventsEdfmApplePhotoFormat = 'dfph' /* Apple Photo format */,
	SystemEventsEdfmAppleShareFormat = 'dfas' /* AppleShare format */,
	SystemEventsEdfmAudioFormat = 'dfau' /* audio format */,
	SystemEventsEdfmHighSierraFormat = 'dfhs' /* High Sierra format */,
	SystemEventsEdfmISO9660Format = 'df96' /* ISO 9660 format */,
	SystemEventsEdfmMacOSExtendedFormat = 'dfh+' /* Mac OS Extended format */,
	SystemEventsEdfmMacOSFormat = 'dfhf' /* Mac OS format */,
	SystemEventsEdfmMSDOSFormat = 'dfms' /* MSDOS format */,
	SystemEventsEdfmNFSFormat = 'dfnf' /* NFS format */,
	SystemEventsEdfmProDOSFormat = 'dfpr' /* ProDOS format */,
	SystemEventsEdfmQuickTakeFormat = 'dfqt' /* QuickTake format */,
	SystemEventsEdfmUDFFormat = 'dfud' /* UDF format */,
	SystemEventsEdfmUFSFormat = 'dfuf' /* UFS format */,
	SystemEventsEdfmUnknownFormat = 'df$$' /* unknown format */,
	SystemEventsEdfmWebDAVFormat = 'dfwd' /* WebDAV format */
};
typedef enum SystemEventsEdfm SystemEventsEdfm;

enum SystemEventsEMds {
	SystemEventsEMdsCommandDown = 'Kcmd' /* command down */,
	SystemEventsEMdsControlDown = 'Kctl' /* control down */,
	SystemEventsEMdsOptionDown = 'Kopt' /* option down */,
	SystemEventsEMdsShiftDown = 'Ksft' /* shift down */
};
typedef enum SystemEventsEMds SystemEventsEMds;

enum SystemEventsEMky {
	SystemEventsEMkyCommand = 'eCmd' /* command */,
	SystemEventsEMkyControl = 'eCnt' /* control */,
	SystemEventsEMkyOption = 'eOpt' /* option */,
	SystemEventsEMkyShift = 'eSft' /* shift */
};
typedef enum SystemEventsEMky SystemEventsEMky;

enum SystemEventsPrmd {
	SystemEventsPrmdNormal = 'norm' /* normal */,
	SystemEventsPrmdSlideShow = 'pmss' /* slide show */
};
typedef enum SystemEventsPrmd SystemEventsPrmd;

enum SystemEventsMvsz {
	SystemEventsMvszCurrent = 'cust' /* current */,
	SystemEventsMvszDouble = 'doub' /* double */,
	SystemEventsMvszHalf = 'half' /* half */,
	SystemEventsMvszNormal = 'norm' /* normal */,
	SystemEventsMvszScreen = 'fits' /* screen */
};
typedef enum SystemEventsMvsz SystemEventsMvsz;

enum SystemEventsEnum {
	SystemEventsEnumStandard = 'lwst' /* Standard PostScript error handling */,
	SystemEventsEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum SystemEventsEnum SystemEventsEnum;



/*
 * Standard Suite
 */

// The application's top-level scripting object.
@interface SystemEventsApplication : SBApplication
+ (SystemEventsApplication *) application;

- (SBElementArray *) documents;
- (SBElementArray *) windows;

@property (copy, readonly) NSString *name;  // The name of the application.
@property (readonly) BOOL frontmost;  // Is this the active application?
@property (copy, readonly) NSString *version;  // The version number of the application.

- (void) print:(id)x withProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) quitSaving:(SystemEventsSaveOptions)saving;  // Quit the application.
- (BOOL) exists:(id)x;  // Verify that an object exists.
- (void) abortTransaction;  // Discard the results of a bounded update session with one or more files.
- (NSInteger) beginTransaction;  // Begin a bounded update session with one or more files.
- (void) endTransaction;  // Apply the results of a bounded update session with one or more files.
- (SystemEventsConfiguration *) connect:(id)x;  // connect a configuration or service
- (SystemEventsConfiguration *) disconnect:(id)x;  // disconnect a configuration or service
- (SystemEventsFile *) open:(id)x;  // Open disk item(s) with the appropriate application.
- (void) logOut;  // Log out the current user
- (void) restart;  // Restart the computer
- (void) shutDown;  // Shut Down the computer
- (void) sleep;  // Put the computer to sleep
- (SystemEventsUIElement *) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (void) keyCode:(id)x using:(id)using_;  // cause the target process to behave as if key codes were entered
- (void) keystroke:(NSString *)x using:(id)using_;  // cause the target process to behave as if keystrokes were entered

@end

// A document.
@interface SystemEventsDocument : SBObject

@property (copy, readonly) NSString *name;  // Its name.
@property (readonly) BOOL modified;  // Has it been modified since the last save?
@property (copy, readonly) SystemEventsFile *file;  // Its location on disk, if it has one.

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end

// A window.
@interface SystemEventsWindow : SBObject

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
@property (copy, readonly) SystemEventsDocument *document;  // The document whose contents are displayed in the window.

- (void) closeSaving:(SystemEventsSaveOptions)saving savingIn:(SystemEventsFile *)savingIn;  // Close a document.
- (void) saveIn:(SystemEventsFile *)in_ as:(SystemEventsSaveableFileFormat)as;  // Save a document.
- (void) printWithProperties:(SystemEventsPrintSettings *)withProperties printDialog:(BOOL)printDialog;  // Print a document.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy an object.
- (void) moveTo:(SBObject *)to;  // Move an object to a new location.
- (void) start;  // start the screen saver
- (void) stop;  // stop the screen saver

@end



/*
 * System Events Suite
 */

// The System Events application
@interface SystemEventsApplication (SystemEventsSuite)

@property NSInteger quitDelay;  // the time in seconds the application will idle before quitting; if set to zero, idle time will not cause the application to quit
@property (readonly) BOOL scriptMenuEnabled;  // Is the Script menu installed in the menu bar?

@end



/*
 * Accounts Suite
 */

// The System Events application
@interface SystemEventsApplication (AccountsSuite)

- (SBElementArray *) users;

@property (copy, readonly) SystemEventsUser *currentUser;  // the currently logged in user

@end



/*
 * Appearance Suite
 */

// The System Events application
@interface SystemEventsApplication (AppearanceSuite)

@property (copy) SystemEventsAppearancePreferencesObject *appearancePreferences;  // a collection of appearance preferences

@end



/*
 * CD and DVD Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (CDAndDVDPreferencesSuite)

@property (copy) SystemEventsCDAndDVDPreferencesObject *CDAndDVDPreferences;  // the preferences for the current user when a CD or DVD is inserted

@end



/*
 * Desktop Suite
 */

// The System Events application
@interface SystemEventsApplication (DesktopSuite)

- (SBElementArray *) desktops;

@property (copy, readonly) SystemEventsDesktop *currentDesktop;  // the primary desktop

@end



/*
 * Dock Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (DockPreferencesSuite)

@property (copy) SystemEventsDockPreferencesObject *dockPreferences;  // the preferences for the current user's dock

@end



/*
 * Expose Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (ExposePreferencesSuite)

@property (copy) SystemEventsExposePreferencesObject *exposePreferences;  // the preferences for the current user's expose and dashboard key, mouse and corner bindings

@end



/*
 * Login Items Suite
 */

// The System Events application
@interface SystemEventsApplication (LoginItemsSuite)

- (SBElementArray *) loginItems;

@end



/*
 * Network Preferences Suite
 */

// The System Events application
@interface SystemEventsApplication (NetworkPreferencesSuite)

@property (copy) SystemEventsNetworkPreferencesObject *networkPreferences;  // the preferences for the current user's network

@end



/*
 * Screen Saver Suite
 */

// The System Events application
@interface SystemEventsApplication (ScreenSaverSuite)

- (SBElementArray *) screenSavers;

@property (copy) SystemEventsScreenSaver *currentScreenSaver;  // the currently selected screen saver
@property (copy) SystemEventsScreenSaverPreferencesObject *screenSaverPreferences;  // the preferences common to all screen savers

@end



/*
 * Audio File Suite
 */

// The System Events application
@interface SystemEventsApplication (AudioFileSuite)

- (SBElementArray *) audioDatas;
- (SBElementArray *) audioFiles;

@end



/*
 * Security Suite
 */

// The System Events application
@interface SystemEventsApplication (SecuritySuite)

@property (copy) SystemEventsSecurityPreferencesObject *securityPreferences;  // a collection of security preferences

@end



/*
 * Disk-Folder-File Suite
 */

// The Disk-Folder-File specific extensions to the application
@interface SystemEventsApplication (DiskFolderFileSuite)

- (SBElementArray *) aliases;
- (SBElementArray *) disks;
- (SBElementArray *) diskItems;
- (SBElementArray *) domains;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) SystemEventsFolder *applicationsFolder;  // The user's Applications folder
@property (copy, readonly) SystemEventsClassicDomainObject *ClassicDomain;  // the collection of folders belonging to the Classic System
@property (copy, readonly) SystemEventsFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) SystemEventsFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy, readonly) SystemEventsFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) SystemEventsFolder *downloadsFolder;  // The user's Downloads folder
@property (copy, readonly) SystemEventsFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) SystemEventsFolder *FolderActionScriptsFolder;  // The user's Folder Action Scripts folder
@property (copy, readonly) SystemEventsFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) SystemEventsFolder *homeFolder;  // The Home folder of the currently logged in user
@property (copy, readonly) SystemEventsFolder *libraryFolder;  // The Library folder
@property (copy, readonly) SystemEventsLocalDomainObject *localDomain;  // the collection of folders residing on the Local machine
@property (copy, readonly) SystemEventsFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) SystemEventsFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) SystemEventsNetworkDomainObject *networkDomain;  // the collection of folders residing on the Network
@property (copy, readonly) SystemEventsFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) SystemEventsFolder *preferencesFolder;  // The user's Preferences folder
@property (copy, readonly) SystemEventsFolder *publicFolder;  // The user's Public folder
@property (copy, readonly) SystemEventsFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) SystemEventsFolder *scriptsFolder;  // The user's Scripts folder
@property (copy, readonly) SystemEventsFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) SystemEventsFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) SystemEventsFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) SystemEventsDisk *startupDisk;  // the disk from which Mac OS X was loaded
@property (copy, readonly) SystemEventsSystemDomainObject *systemDomain;  // the collection of folders belonging to the System
@property (copy, readonly) SystemEventsFolder *temporaryItemsFolder;  // The Temporary Items folder
@property (copy, readonly) SystemEventsFolder *trash;  // The user's Trash folder
@property (copy, readonly) SystemEventsUserDomainObject *userDomain;  // the collection of folders belonging to the User
@property (copy, readonly) SystemEventsFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) SystemEventsFolder *workflowsFolder;  // The Automator Workflows folder

@end

// An item stored in the file system
@interface SystemEventsDiskItem : SBObject

@property (readonly) BOOL busyStatus;  // Is the disk item busy?
@property (copy, readonly) SystemEventsDiskItem *container;  // the folder or disk which has this disk item as an element
@property (copy, readonly) NSDate *creationDate;  // the date on which the disk item was created
@property (copy, readonly) NSString *displayedName;  // the name of the disk item as displayed in the User Interface
- (NSString *) id;  // the unique ID of the disk item
@property (copy) NSDate *modificationDate;  // the date on which the disk item was last modified
@property (copy) NSString *name;  // the name of the disk item
@property (copy, readonly) NSString *nameExtension;  // the extension portion of the name
@property (readonly) BOOL packageFolder;  // Is the disk item a package?
@property (copy, readonly) NSString *path;  // the file system path of the disk item
@property (readonly) NSInteger physicalSize;  // the actual space used by the disk item on disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk item
@property (readonly) NSInteger size;  // the logical size of the disk item
@property (copy, readonly) NSString *URL;  // the URL of the disk item
@property BOOL visible;  // Is the disk item visible?
@property (copy, readonly) NSString *volume;  // the volume on which the disk item resides

- (void) delete;  // Delete disk item(s).
- (SystemEventsDiskItem *) moveTo:(SBObject *)to;  // Move disk item(s) to a new location.

@end



/*
 * Accounts Suite
 */

// user account
@interface SystemEventsUser : SystemEventsDiskItem

@property (copy, readonly) NSString *fullName;  // user's full name
@property (copy, readonly) id homeDirectory;  // path to user's home directory
@property (copy, readonly) NSString *name;  // user's short name
@property (copy) id picturePath;  // path to user's picture. Can be set for current user only!


@end



/*
 * Appearance Suite
 */

// A collection of appearance preferences
@interface SystemEventsAppearancePreferencesObject : SystemEventsDiskItem

@property SystemEventsAppearances appearance;  // the overall look of buttons, menus and windows
@property BOOL doubleClickMinimizes;  // Does double clicking the title bar minimize a window?
@property BOOL fontSmoothing;  // Is font smoothing on?
@property NSInteger fontSmoothingLimit;  // the font size at or below which font smoothing is turned off
@property (copy) id fontSmoothingStyle;  // the method used for smoothing fonts
@property (copy) NSColor *highlightColor;  // color used for hightlighting selected text and lists
@property NSInteger recentApplicationsLimit;  // the number of recent applications to track
@property NSInteger recentDocumentsLimit;  // the number of recent documents to track
@property NSInteger recentServersLimit;  // the number of recent servers to track
@property SystemEventsScrollArrowPlacements scrollArrowPlacement;  // the placement of the scroll arrows
@property SystemEventsScrollPageBehaviors scrollBarAction;  // the action performed by clicking the scroll bar
@property BOOL smoothScrolling;  // Is smooth scrolling used?


@end



/*
 * CD and DVD Preferences Suite
 */

// user's CD and DVD insertion preferences
@interface SystemEventsCDAndDVDPreferencesObject : SystemEventsDiskItem

@property (copy, readonly) SystemEventsInsertionPreference *blankCD;  // the blank CD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *blankDVD;  // the blank DVD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *blankBD;  // the blank BD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *musicCD;  // the music CD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *pictureCD;  // the picture CD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *videoDVD;  // the video DVD insertion preference
@property (copy, readonly) SystemEventsInsertionPreference *videoBD;  // the video BD insertion preference


@end

// a specific insertion preference
@interface SystemEventsInsertionPreference : SystemEventsDiskItem

@property (copy) id customApplication;  // application to launch or activate on the insertion of media
@property (copy) id customScript;  // AppleScript to launch or activate on the insertion of media
@property SystemEventsDhac insertionAction;  // action to perform on media insertion


@end



/*
 * Desktop Suite
 */

// desktop picture settings
@interface SystemEventsDesktop : SystemEventsDiskItem

@property (copy, readonly) NSString *name;  // name of the desktop
- (NSInteger) id;  // unique identifier of the desktop
@property double changeInterval;  // number of seconds to wait between changing the desktop picture
@property (copy, readonly) NSString *displayName;  // name of display on which this desktop appears
@property (copy) id picture;  // path to file used as desktop picture
@property NSInteger pictureRotation;  // never, using interval, using login, after sleep
@property (copy) id picturesFolder;  // path to folder containing pictures for changing desktop background
@property BOOL randomOrder;  // turn on for random ordering of changing desktop pictures
@property BOOL translucentMenuBar;  // indicates whether the menu bar is translucent


@end



/*
 * Dock Preferences Suite
 */

// user's dock preferences
@interface SystemEventsDockPreferencesObject : SystemEventsDiskItem

@property BOOL animate;  // is the animation of opening applications on or off?
@property BOOL autohide;  // is autohiding the dock on or off?
@property double dockSize;  // size/height of the items (between 0.0 (minimum) and 1.0 (maximum))
@property BOOL magnification;  // is magnification on or off?
@property double magnificationSize;  // maximum magnification size when magnification is on (between 0.0 (minimum) and 1.0 (maximum))
@property SystemEventsDpef minimizeEffect;  // minimization effect
@property SystemEventsDpls screenEdge;  // location on screen


@end



/*
 * Expose Preferences Suite
 */

// user's expose and dashboard mouse and key preferences
@interface SystemEventsExposePreferencesObject : SystemEventsDiskItem

@property (copy, readonly) SystemEventsShortcut *allWindowsShortcut;  // the key and mouse binding shortcuts for showing the all application windows
@property (copy, readonly) SystemEventsShortcut *applicationWindowsShortcut;  // the key and mouse binding shortcuts for showing the current application windows
@property (copy, readonly) SystemEventsScreenCorner *bottomLeftScreenCorner;  // the bottom left screen corner
@property (copy, readonly) SystemEventsScreenCorner *bottomRightScreenCorner;  // the bottom right screen corner
@property (copy, readonly) SystemEventsShortcut *dashboardShortcut;  // the key and mouse binding shortcuts for showing the dashboard
@property (copy, readonly) SystemEventsShortcut *showDesktopShortcut;  // the key and mouse binding shortcuts for showing the desktop
@property (copy, readonly) SystemEventsShortcut *showSpacesShortcut;  // the key and mouse binding shortcuts for showing spaces
@property (copy, readonly) SystemEventsSpacesPreferencesObject *spacesPreferences;  // the spaces preferences
@property (copy, readonly) SystemEventsScreenCorner *topLeftScreenCorner;  // the top left screen corner
@property (copy, readonly) SystemEventsScreenCorner *topRightScreenCorner;  // the top right screen corner


@end

// a screen corner location for a specific expose or dashboard feature
@interface SystemEventsScreenCorner : SystemEventsDiskItem

@property SystemEventsActivities activity;  // activity for a specific screen corner
@property SystemEventsModifiers modifiers;  // keyboard modifiers used for a specific screen corner, passed as string or list


@end

// a keyboard or mouse shortcut for a specific expose or dashboard feature
@interface SystemEventsShortcut : SystemEventsDiskItem

@property SystemEventsFunctionKeys functionKey;  // keyboard key for a specific shortcut, not all keyboards support all possible function keys
@property (copy) NSArray *functionKeyModifiers;  // keyboard modifiers used for a specific function key, passed as string or list
@property NSInteger mouseButton;  // mouse button for a specific shortcut (between 2 and the users number of buttons, 0 or none to remove the property)
@property (copy) NSArray *mouseButtonModifiers;  // keyboard modifiers used for a specific mouse button, passed as string or list


@end

// user's spaces application bindings and navigation preferences
@interface SystemEventsSpacesPreferencesObject : SystemEventsDiskItem

@property (copy) NSDictionary *applicationBindings;  // binding of applications to specific spaces
@property (copy, readonly) SystemEventsSpacesShortcut *arrowKeyModifiers;  // keyboard modifiers used controlling the arrow key navigation through spaces
@property (copy, readonly) SystemEventsSpacesShortcut *numbersKeyModifiers;  // keyboard modifiers used controlling the number key navigation through spaces
@property NSInteger spacesColumns;  // number of columns of spaces
@property BOOL spacesEnabled;  // is spaces enabled?
@property NSInteger spacesRows;  // number of rows of spaces


@end

// The keyboard modifiers for a specific spaces navigation shortcut
@interface SystemEventsSpacesShortcut : SystemEventsDiskItem

@property (copy) NSArray *keyModifiers;  // modifiers used for a specific function key, passed as string or list


@end



/*
 * Login Items Suite
 */

// an item to be launched or opened at login
@interface SystemEventsLoginItem : SystemEventsDiskItem

@property BOOL hidden;  // Is the Login Item hidden when launched?
@property (copy, readonly) NSString *kind;  // the file type of the Login Item
@property (copy, readonly) NSString *name;  // the name of the Login Item
@property (copy, readonly) NSString *path;  // the file system path to the Login Item


@end



/*
 * Network Preferences Suite
 */

// A collection of settings for configuring a connection
@interface SystemEventsConfiguration : SystemEventsDiskItem

@property (copy) NSString *accountName;  // the name used to authenticate
@property (readonly) BOOL connected;  // Is the configuration connected?
- (NSString *) id;  // the unique identifier for the configuration
@property (copy) NSString *name;  // the name of the configuration


@end

// A collection of settings for a network interface
@interface SystemEventsInterface : SystemEventsDiskItem

@property BOOL automatic;  // configure the interface speed, duplex, and mtu automatically?
@property (copy) NSString *duplex;  // the duplex setting  half | full | full with flow control
- (NSString *) id;  // the unique identifier for the interface
@property (copy, readonly) NSString *kind;  // the type of interface
@property (copy, readonly) NSString *MACAddress;  // the MAC address for the interface
@property NSInteger mtu;  // the packet size
@property (copy, readonly) NSString *name;  // the name of the interface
@property NSInteger speed;  // ethernet speed 10 | 100 | 1000


@end

// A set of services
@interface SystemEventsLocation : SystemEventsDiskItem

- (SBElementArray *) services;

- (NSString *) id;  // the unique identifier for the location
@property (copy) NSString *name;  // the name of the location


@end

// the preferences for the current user's network
@interface SystemEventsNetworkPreferencesObject : SystemEventsDiskItem

- (SBElementArray *) interfaces;
- (SBElementArray *) locations;
- (SBElementArray *) services;

@property (copy) SystemEventsLocation *currentLocation;  // the current location


@end

// A collection of settings for a network service
@interface SystemEventsService : SystemEventsDiskItem

- (SBElementArray *) configurations;

@property (readonly) BOOL active;  // Is the service active?
@property (copy) SystemEventsConfiguration *currentConfiguration;  // the currently selected configuration
- (NSString *) id;  // the unique identifier for the service
@property (copy, readonly) SystemEventsInterface *interface;  // the interface the service is built on
@property (readonly) NSInteger kind;  // the type of service
@property (copy) NSString *name;  // the name of the service


@end



/*
 * Screen Saver Suite
 */

// an installed screen saver
@interface SystemEventsScreenSaver : SystemEventsDiskItem

@property (copy, readonly) NSString *displayedName;  // name of the screen saver module as displayed to the user
@property (copy, readonly) NSString *name;  // name of the screen saver module to be displayed
@property (copy, readonly) SystemEventsAlias *path;  // path to the screen saver module
@property (copy) NSString *pictureDisplayStyle;  // effect to use when displaying picture-based screen savers (slideshow, collage, or mosaic)


@end

// screen saver settings
@interface SystemEventsScreenSaverPreferencesObject : SystemEventsDiskItem

@property NSInteger delayInterval;  // number of seconds of idle time before the screen saver starts; zero for never
@property BOOL mainScreenOnly;  // should the screen saver be shown only on the main screen?
@property (readonly) BOOL running;  // is the screen saver running?
@property BOOL showClock;  // should a clock appear over the screen saver?


@end



/*
 * Security Suite
 */

// a collection of security preferences
@interface SystemEventsSecurityPreferencesObject : SystemEventsDiskItem

@property BOOL automaticLogin;  // Is automatic login allowed?
@property BOOL logOutWhenInactive;  // Will the computer log out when inactive?
@property NSInteger logOutWhenInactiveInterval;  // The interval of inactivity after which the computer will log out
@property BOOL requirePasswordToUnlock;  // Is a password required to unlock secure preferences?
@property BOOL requirePasswordToWake;  // Is a password required to wake the computer from sleep or screen saver?
@property BOOL secureVirtualMemory;  // Is secure virtual memory being used?


@end



/*
 * Disk-Folder-File Suite
 */

// An alias in the file system
@interface SystemEventsAlias : SystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;

@property (copy) id creatorType;  // the OSType identifying the application that created the alias
@property (copy) id defaultApplication;  // the application that will launch if the alias is opened
@property (copy) id fileType;  // the OSType identifying the type of data contained in the alias
@property (copy, readonly) NSString *kind;  // The kind of alias, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the application bundle referenced by the alias
@property BOOL stationery;  // Is the alias a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the alias
@property (copy, readonly) NSString *version;  // the version of the application bundle referenced by the alias (visible at the bottom of the "Get Info" window)


@end

// A disk in the file system
@interface SystemEventsDisk : SystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;

@property (readonly) NSInteger capacity;  // the total number of bytes (free or used) on the disk
@property (readonly) BOOL ejectable;  // Can the media be ejected (floppies, CD's, and so on)?
@property (readonly) SystemEventsEdfm format;  // the file system format of this disk
@property (readonly) NSInteger freeSpace;  // the number of free bytes left on the disk
@property BOOL ignorePrivileges;  // Ignore permissions on this disk?
@property (readonly) BOOL localVolume;  // Is the media a local volume (as opposed to a file server)?
@property (copy, readonly) id server;  // the server on which the disk resides, AFP volumes only
@property (readonly) BOOL startup;  // Is this disk the boot disk?
@property (copy, readonly) id zone;  // the zone in which the disk's server resides, AFP volumes only


@end

// A domain in the file system
@interface SystemEventsDomain : SystemEventsDiskItem

- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *applicationSupportFolder;  // The Application Support folder
@property (copy, readonly) SystemEventsFolder *applicationsFolder;  // The Applications folder
@property (copy, readonly) SystemEventsFolder *desktopPicturesFolder;  // The Desktop Pictures folder
@property (copy, readonly) SystemEventsFolder *FolderActionScriptsFolder;  // The Folder Action Scripts folder
@property (copy, readonly) SystemEventsFolder *fontsFolder;  // The Fonts folder
- (NSString *) id;  // the unique identifier of the domain
@property (copy, readonly) SystemEventsFolder *libraryFolder;  // The Library folder
@property (copy, readonly) NSString *name;  // the name of the domain
@property (copy, readonly) SystemEventsFolder *preferencesFolder;  // The Preferences folder
@property (copy, readonly) SystemEventsFolder *scriptingAdditionsFolder;  // The Scripting Additions folder
@property (copy, readonly) SystemEventsFolder *scriptsFolder;  // The Scripts folder
@property (copy, readonly) SystemEventsFolder *sharedDocumentsFolder;  // The Shared Documents folder
@property (copy, readonly) SystemEventsFolder *speakableItemsFolder;  // The Speakable Items folder
@property (copy, readonly) SystemEventsFolder *utilitiesFolder;  // The Utilities folder
@property (copy, readonly) SystemEventsFolder *workflowsFolder;  // The Automator Workflows folder


@end

// The Classic domain in the file system
@interface SystemEventsClassicDomainObject : SystemEventsDomain

- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *appleMenuFolder;  // The Apple Menu Items folder
@property (copy, readonly) SystemEventsFolder *controlPanelsFolder;  // The Control Panels folder
@property (copy, readonly) SystemEventsFolder *controlStripModulesFolder;  // The Control Strip Modules folder
@property (copy, readonly) SystemEventsFolder *desktopFolder;  // The Classic Desktop folder
@property (copy, readonly) SystemEventsFolder *extensionsFolder;  // The Extensions folder
@property (copy, readonly) SystemEventsFolder *fontsFolder;  // The Fonts folder
@property (copy, readonly) SystemEventsFolder *launcherItemsFolder;  // The Launcher Items folder
@property (copy, readonly) SystemEventsFolder *preferencesFolder;  // The Classic Preferences folder
@property (copy, readonly) SystemEventsFolder *shutdownFolder;  // The Shutdown Items folder
@property (copy, readonly) SystemEventsFolder *startupItemsFolder;  // The StartupItems folder
@property (copy, readonly) SystemEventsFolder *systemFolder;  // The System folder


@end

// A file in the file system
@interface SystemEventsFile : SystemEventsDiskItem

@property (copy) id creatorType;  // the OSType identifying the application that created the file
@property (copy) id defaultApplication;  // the application that will launch if the file is opened
@property (copy) id fileType;  // the OSType identifying the type of data contained in the file
@property (copy, readonly) NSString *kind;  // The kind of file, as shown in Finder
@property (copy, readonly) NSString *productVersion;  // the version of the product (visible at the top of the "Get Info" window)
@property (copy, readonly) NSString *shortVersion;  // the short version of the file
@property BOOL stationery;  // Is the file a stationery pad?
@property (copy, readonly) NSString *typeIdentifier;  // The type identifier of the file
@property (copy, readonly) NSString *version;  // the version of the file (visible at the bottom of the "Get Info" window)

- (SystemEventsFile *) open;  // Open disk item(s) with the appropriate application.

@end

// A file package in the file system
@interface SystemEventsFilePackage : SystemEventsFile

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;


@end

// A folder in the file system
@interface SystemEventsFolder : SystemEventsDiskItem

- (SBElementArray *) aliases;
- (SBElementArray *) diskItems;
- (SBElementArray *) files;
- (SBElementArray *) filePackages;
- (SBElementArray *) folders;


@end

// The local domain in the file system
@interface SystemEventsLocalDomainObject : SystemEventsDomain

- (SBElementArray *) folders;


@end

// The network domain in the file system
@interface SystemEventsNetworkDomainObject : SystemEventsDomain

- (SBElementArray *) folders;


@end

// The system domain in the file system
@interface SystemEventsSystemDomainObject : SystemEventsDomain

- (SBElementArray *) folders;


@end

// The user domain in the file system
@interface SystemEventsUserDomainObject : SystemEventsDomain

- (SBElementArray *) folders;

@property (copy, readonly) SystemEventsFolder *desktopFolder;  // The user's Desktop folder
@property (copy, readonly) SystemEventsFolder *documentsFolder;  // The user's Documents folder
@property (copy, readonly) SystemEventsFolder *downloadsFolder;  // The user's Downloads folder
@property (copy, readonly) SystemEventsFolder *favoritesFolder;  // The user's Favorites folder
@property (copy, readonly) SystemEventsFolder *homeFolder;  // The user's Home folder
@property (copy, readonly) SystemEventsFolder *moviesFolder;  // The user's Movies folder
@property (copy, readonly) SystemEventsFolder *musicFolder;  // The user's Music folder
@property (copy, readonly) SystemEventsFolder *picturesFolder;  // The user's Pictures folder
@property (copy, readonly) SystemEventsFolder *publicFolder;  // The user's Public folder
@property (copy, readonly) SystemEventsFolder *sitesFolder;  // The user's Sites folder
@property (copy, readonly) SystemEventsFolder *temporaryItemsFolder;  // The Temporary Items folder


@end



/*
 * Folder Actions Suite
 */

// The System Events application
@interface SystemEventsApplication (FolderActionsSuite)

- (SBElementArray *) folderActions;

@property BOOL folderActionsEnabled;  // Are Folder Actions currently being processed?

@end

// An action attached to a folder in the file system
@interface SystemEventsFolderAction : SystemEventsDiskItem

- (SBElementArray *) scripts;

@property BOOL enabled;  // Is the folder action enabled?
@property (copy) NSString *name;  // the name of the folder action, which is also the name of the folder
@property (copy, readonly) NSString *path;  // the path to the folder to which the folder action applies
@property (copy, readonly) NSString *volume;  // the volume on which the folder action resides


@end

// A script invoked by a folder action
@interface SystemEventsScript : SystemEventsDiskItem

@property BOOL enabled;  // Is the script enabled?
@property (copy, readonly) NSString *name;  // the name of the script
@property (copy, readonly) NSString *path;  // the file system path of the disk
@property (copy, readonly) NSString *POSIXPath;  // the POSIX file system path of the disk


@end



/*
 * Movie File Suite
 */

// The System Events application
@interface SystemEventsApplication (MovieFileSuite)

- (SBElementArray *) movieDatas;
- (SBElementArray *) movieFiles;

@end



/*
 * Processes Suite
 */

// The System Events application
@interface SystemEventsApplication (ProcessesSuite)

- (SBElementArray *) applicationProcesses;
- (SBElementArray *) deskAccessoryProcesses;
- (SBElementArray *) processes;
- (SBElementArray *) UIElements;

@property BOOL UIElementsEnabled;  // Are UI element events currently being processed?

@end

// An action that can be performed on the UI element
@interface SystemEventsAction : SystemEventsDiskItem

@property (copy, readonly) NSString *objectDescription;  // what the action does
@property (copy, readonly) NSString *name;  // the name of the action

- (SystemEventsAction *) perform;  // cause the target process to behave as if the action were applied to its UI element

@end

// An named data value associated with the UI element
@interface SystemEventsAttribute : SystemEventsDiskItem

@property (copy, readonly) NSString *name;  // the name of the attribute
@property (readonly) BOOL settable;  // Can the attribute be set?
@property (copy) id value;  // the current value of the attribute


@end

// A piece of the user interface of a process
@interface SystemEventsUIElement : SystemEventsDiskItem

- (SBElementArray *) actions;
- (SBElementArray *) attributes;
- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) columns;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menus;
- (SBElementArray *) menuBars;
- (SBElementArray *) menuBarItems;
- (SBElementArray *) menuButtons;
- (SBElementArray *) menuItems;
- (SBElementArray *) outlines;
- (SBElementArray *) popOvers;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) rows;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolbars;
- (SBElementArray *) UIElements;
- (SBElementArray *) valueIndicators;
- (SBElementArray *) windows;

@property (copy, readonly) id accessibilityDescription;  // a more complete description of the UI element and its capabilities
@property (copy, readonly) id objectDescription;  // the accessibility description, if available; otherwise, the role description
@property (copy, readonly) id enabled;  // Is the UI element enabled? ( Does it accept clicks? )
@property (copy, readonly) NSArray *entireContents;  // a list of every UI element contained in this UI element and its child UI elements, to the limits of the tree
@property (copy) id focused;  // Is the focus on this UI element?
@property (copy, readonly) id help;  // an elaborate description of the UI element and its capabilities
@property (copy, readonly) id maximumValue;  // the maximum value that the UI element can take on
@property (copy, readonly) id minimumValue;  // the minimum value that the UI element can take on
@property (copy, readonly) NSString *name;  // the name of the UI Element, which identifies it within its container
@property (copy, readonly) id orientation;  // the orientation of the UI element
@property (copy) id position;  // the position of the UI element
@property (copy, readonly) NSString *role;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *roleDescription;  // a more complete description of the UI element's role
@property (copy) id selected;  // Is the UI element selected?
@property (copy) id size;  // the size of the UI element
@property (copy, readonly) id subrole;  // an encoded description of the UI element and its capabilities
@property (copy, readonly) NSString *title;  // the title of the UI element as it appears on the screen
@property (copy) id value;  // the current value of the UI element

- (SystemEventsUIElement *) clickAt:(NSArray *)at;  // cause the target process to behave as if the UI element were clicked
- (SystemEventsUIElement *) select;  // set the selected property of the UI element

@end

// A browser belonging to a window
@interface SystemEventsBrowser : SystemEventsUIElement


@end

// A busy indicator belonging to a window
@interface SystemEventsBusyIndicator : SystemEventsUIElement


@end

// A button belonging to a window or scroll bar
@interface SystemEventsButton : SystemEventsUIElement


@end

// A checkbox belonging to a window
@interface SystemEventsCheckbox : SystemEventsUIElement


@end

// A color well belonging to a window
@interface SystemEventsColorWell : SystemEventsUIElement


@end

// A column belonging to a table
@interface SystemEventsColumn : SystemEventsUIElement


@end

// A combo box belonging to a window
@interface SystemEventsComboBox : SystemEventsUIElement


@end

// A drawer that may be extended from a window
@interface SystemEventsDrawer : SystemEventsUIElement


@end

// A group belonging to a window
@interface SystemEventsGroup : SystemEventsUIElement

- (SBElementArray *) checkboxes;
- (SBElementArray *) staticTexts;


@end

// A grow area belonging to a window
@interface SystemEventsGrowArea : SystemEventsUIElement


@end

// An image belonging to a static text field
@interface SystemEventsImage : SystemEventsUIElement


@end

// A incrementor belonging to a window
@interface SystemEventsIncrementor : SystemEventsUIElement


@end

// A list belonging to a window
@interface SystemEventsList : SystemEventsUIElement


@end

// A menu belonging to a menu bar item
@interface SystemEventsMenu : SystemEventsUIElement

- (SBElementArray *) menuItems;


@end

// A menu bar belonging to a process
@interface SystemEventsMenuBar : SystemEventsUIElement

- (SBElementArray *) menus;
- (SBElementArray *) menuBarItems;


@end

// A menu bar item belonging to a menu bar
@interface SystemEventsMenuBarItem : SystemEventsUIElement

- (SBElementArray *) menus;


@end

// A menu button belonging to a window
@interface SystemEventsMenuButton : SystemEventsUIElement


@end

// A menu item belonging to a menu
@interface SystemEventsMenuItem : SystemEventsUIElement

- (SBElementArray *) menus;


@end

// A outline belonging to a window
@interface SystemEventsOutline : SystemEventsUIElement


@end

// A pop over belonging to a window
@interface SystemEventsPopOver : SystemEventsUIElement


@end

// A pop up button belonging to a window
@interface SystemEventsPopUpButton : SystemEventsUIElement


@end

// A process running on this computer
@interface SystemEventsProcess : SystemEventsUIElement

- (SBElementArray *) menuBars;
- (SBElementArray *) windows;

@property (readonly) BOOL acceptsHighLevelEvents;  // Is the process high-level event aware (accepts open application, open document, print document, and quit)?
@property (readonly) BOOL acceptsRemoteEvents;  // Does the process accept remote events?
@property (copy, readonly) NSString *architecture;  // the architecture in which the process is running
@property (readonly) BOOL backgroundOnly;  // Does the process run exclusively in the background?
@property (copy, readonly) NSString *bundleIdentifier;  // the bundle identifier of the process' application file
@property (readonly) BOOL Classic;  // Is the process running in the Classic environment?
@property (copy, readonly) NSString *creatorType;  // the OSType of the creator of the process (the signature)
@property (copy, readonly) NSString *displayedName;  // the name of the file from which the process was launched, as displayed in the User Interface
@property (copy, readonly) id file;  // the file from which the process was launched
@property (copy, readonly) NSString *fileType;  // the OSType of the file type of the process
@property BOOL frontmost;  // Is the process the frontmost process
@property (readonly) BOOL hasScriptingTerminology;  // Does the process have a scripting terminology, i.e., can it be scripted?
- (NSInteger) id;  // The unique identifier of the process
@property (copy, readonly) NSString *name;  // the name of the process
@property (readonly) NSInteger partitionSpaceUsed;  // the number of bytes currently used in the process' partition
@property (copy, readonly) id shortName;  // the short name of the file from which the process was launched
@property (readonly) NSInteger totalPartitionSize;  // the size of the partition with which the process was launched
@property (readonly) NSInteger unixId;  // The Unix process identifier of a process running in the native environment, or -1 for a process running in the Classic environment
@property BOOL visible;  // Is the process' layer visible?


@end

// A process launched from an application file
@interface SystemEventsApplicationProcess : SystemEventsProcess

@property (copy, readonly) id applicationFile;  // a reference to the application file from which this process was launched


@end

// A process launched from an desk accessory file
@interface SystemEventsDeskAccessoryProcess : SystemEventsProcess

@property (copy, readonly) SystemEventsAlias *deskAccessoryFile;  // a reference to the desk accessory file from which this process was launched


@end

// A progress indicator belonging to a window
@interface SystemEventsProgressIndicator : SystemEventsUIElement


@end

// A radio button belonging to a window
@interface SystemEventsRadioButton : SystemEventsUIElement


@end

// A radio button group belonging to a window
@interface SystemEventsRadioGroup : SystemEventsUIElement

- (SBElementArray *) radioButtons;


@end

// A relevance indicator belonging to a window
@interface SystemEventsRelevanceIndicator : SystemEventsUIElement


@end

// A row belonging to a table
@interface SystemEventsRow : SystemEventsUIElement


@end

// A scroll area belonging to a window
@interface SystemEventsScrollArea : SystemEventsUIElement


@end

// A scroll bar belonging to a window
@interface SystemEventsScrollBar : SystemEventsUIElement

- (SBElementArray *) buttons;
- (SBElementArray *) valueIndicators;


@end

// A sheet displayed over a window
@interface SystemEventsSheet : SystemEventsUIElement


@end

// A slider belonging to a window
@interface SystemEventsSlider : SystemEventsUIElement


@end

// A splitter belonging to a window
@interface SystemEventsSplitter : SystemEventsUIElement


@end

// A splitter group belonging to a window
@interface SystemEventsSplitterGroup : SystemEventsUIElement


@end

// A static text field belonging to a window
@interface SystemEventsStaticText : SystemEventsUIElement

- (SBElementArray *) images;


@end

// A tab group belonging to a window
@interface SystemEventsTabGroup : SystemEventsUIElement


@end

// A table belonging to a window
@interface SystemEventsTable : SystemEventsUIElement


@end

// A text area belonging to a window
@interface SystemEventsTextArea : SystemEventsUIElement


@end

// A text field belonging to a window
@interface SystemEventsTextField : SystemEventsUIElement


@end

// A toolbar belonging to a window
@interface SystemEventsToolbar : SystemEventsUIElement


@end

// A value indicator ( thumb or slider ) belonging to a scroll bar
@interface SystemEventsValueIndicator : SystemEventsUIElement


@end

// A window belonging to a process
@interface SystemEventsWindow (ProcessesSuite)

- (SBElementArray *) browsers;
- (SBElementArray *) busyIndicators;
- (SBElementArray *) buttons;
- (SBElementArray *) checkboxes;
- (SBElementArray *) colorWells;
- (SBElementArray *) comboBoxes;
- (SBElementArray *) drawers;
- (SBElementArray *) groups;
- (SBElementArray *) growAreas;
- (SBElementArray *) images;
- (SBElementArray *) incrementors;
- (SBElementArray *) lists;
- (SBElementArray *) menuButtons;
- (SBElementArray *) outlines;
- (SBElementArray *) popOvers;
- (SBElementArray *) popUpButtons;
- (SBElementArray *) progressIndicators;
- (SBElementArray *) radioButtons;
- (SBElementArray *) radioGroups;
- (SBElementArray *) relevanceIndicators;
- (SBElementArray *) scrollAreas;
- (SBElementArray *) scrollBars;
- (SBElementArray *) sheets;
- (SBElementArray *) sliders;
- (SBElementArray *) splitters;
- (SBElementArray *) splitterGroups;
- (SBElementArray *) staticTexts;
- (SBElementArray *) tabGroups;
- (SBElementArray *) tables;
- (SBElementArray *) textAreas;
- (SBElementArray *) textFields;
- (SBElementArray *) toolbars;
- (SBElementArray *) UIElements;

@property (copy) id position;  // the position of the window

@end



/*
 * Property List Suite
 */

// The System Events application
@interface SystemEventsApplication (PropertyListSuite)

- (SBElementArray *) propertyListFiles;
- (SBElementArray *) propertyListItems;

@end

// A file containing data in Property List format
@interface SystemEventsPropertyListFile : SystemEventsFile

@end
