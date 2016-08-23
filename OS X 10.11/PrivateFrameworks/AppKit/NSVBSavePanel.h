//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import <AppKit/NSOpenAndSavePanelRemoteViewExportedToServiceProtocol-Protocol.h>

@class NSArray, NSCFRunLoopSemaphore, NSURL, NSView;
@protocol NSOpenSavePanelDelegate;

@interface NSVBSavePanel : NSPanel <NSOpenAndSavePanelRemoteViewExportedToServiceProtocol>
{
    id <NSOpenSavePanelDelegate> _openSaveDelegate;
    CDUnknownBlockType _completionHandler;
    NSCFRunLoopSemaphore *_advanceToRunPhaseIfNeededSemaphore;
    NSURL *_finalURL;
    NSArray *_finalURLs;
    NSView *_remoteAccessoryView;
    unsigned int _iCloudOpenPanel:1;
    unsigned int _observingBridge:1;
    unsigned int _expectingInvalidation:1;
    unsigned int _attachSandboxExtensionsToFinalURLDone:1;
    unsigned int _attachSandboxExtensionsToFinalURLsDone:1;
    unsigned int _runningAsASheet:1;
    unsigned int _hostWindow_runningAsASheet:1;
    unsigned int _animatingSetFrame:1;
    unsigned int _panelCompleted:1;
    unsigned int _retained:1;
    unsigned int _panelIsNowUseless:1;
}

+ (id)savePanel;
+ (void)_warmUp;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (BOOL)_startServiceFailedAlert;
- (void)setCanDownloadUbiquitousContents:(BOOL)arg1;
- (BOOL)canDownloadUbiquitousContents;
- (void)setCanResolveUbiquitousConflicts:(BOOL)arg1;
- (BOOL)canResolveUbiquitousConflicts;
- (void)setCanChooseFiles:(BOOL)arg1;
- (BOOL)canChooseFiles;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setCanChooseDirectories:(BOOL)arg1;
- (BOOL)canChooseDirectories;
- (void)setResolvesAliases:(BOOL)arg1;
- (BOOL)resolvesAliases;
- (id)filenames;
- (id)_securityScopedURLs;
- (id)URLs;
- (id)_URLsWithSecurityScoped:(BOOL)arg1;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modalForWindow:(id)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void *)arg7;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2;
- (long long)runModalForTypes:(id)arg1;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3;
- (void)setRequiredFileType:(id)arg1;
- (id)requiredFileType;
- (void)setDirectory:(id)arg1;
- (id)directory;
- (id)filename;
- (long long)runModal;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)commonPrep:(CDUnknownBlockType)arg1 runningAsASheet:(BOOL)arg2 hostWindow_runningAsASheet:(BOOL)arg3;
- (void)_setAccessoryViewDisclosedVBKVO:(BOOL)arg1;
- (void)_setAccessoryViewDisclosed:(BOOL)arg1;
- (void)_resetPrivateState;
- (void)advanceToRunPhaseIfNeededLayerCentric;
- (void)viewDidAdvanceToRunPhase:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeAsynchronousIBActionKeyPath:(id)arg1 paramDict:(id)arg2;
- (void)observeAsynchronousDelegateMethodCallKeyPath:(id)arg1 paramDict:(id)arg2;
- (void)observeAsynchronousRemoteMethodCallKeyPath:(id)arg1 paramDict:(id)arg2;
- (void)observeMostRecentCompletion:(id)arg1;
- (void)completeWithReturnCode:(long long)arg1 url:(id)arg2 urls:(id)arg3;
- (void)completeSheet:(long long)arg1;
- (void)completeModal:(long long)arg1;
- (void)completeModeless:(long long)arg1;
- (void)_removeExtraRetainIfNeeded;
- (void)didEndPanelWithReturnCode:(long long)arg1;
- (void)induceEventLoopIterationSoon;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)setTagNames:(id)arg1;
- (id)tagNames;
- (void)setShowsTagField:(BOOL)arg1;
- (BOOL)showsTagField;
- (void)setShowsHiddenFiles:(BOOL)arg1;
- (BOOL)showsHiddenFiles;
- (void)validateVisibleColumns;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setNameFieldStringValue:(id)arg1;
- (id)nameFieldStringValue;
- (void)setNameFieldLabel:(id)arg1;
- (id)nameFieldLabel;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)setTreatsFilePackagesAsDirectories:(BOOL)arg1;
- (BOOL)treatsFilePackagesAsDirectories;
- (void)setExtensionHidden:(BOOL)arg1;
- (BOOL)isExtensionHidden;
- (void)setCanSelectHiddenExtension:(BOOL)arg1;
- (BOOL)canSelectHiddenExtension;
- (void)setCanCreateDirectories:(BOOL)arg1;
- (BOOL)canCreateDirectories;
- (BOOL)isExpanded;
- (void)refreshDelegateOptions;
- (void)_setSupportedDelegateMethods:(id)arg1;
- (id)_supportedDelegateMethods;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAccessoryView:(id)arg1;
- (id)accessoryView;
- (BOOL)_accessoryViewDisclosureIsSupported;
- (void)setAllowsOtherFileTypes:(BOOL)arg1;
- (BOOL)allowsOtherFileTypes;
- (void)setAllowedFileTypes:(id)arg1;
- (id)allowedFileTypes;
- (void)setDirectoryURL:(id)arg1;
- (id)directoryURL;
- (id)_securityScopedURL;
- (id)URL;
- (id)_URLWithSecurityScoped:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (void)_attachSandboxExtensionsAndStartAccessing;
- (BOOL)_attachSandboxExtensions:(id)arg1 toURL:(id)arg2 orURLs:(id)arg3;
- (void)_attachSandboxExtension:(id)arg1 toURL:(id)arg2;
- (id)bridge;
- (void)viewDidInvalidate:(id)arg1;
- (void)viewWillInvalidate:(id)arg1;
- (void)_setDefaultBridgeValues;
- (void)_addObservers:(BOOL)arg1 onBridge:(id)arg2;
- (void)dealloc;
- (void)_invalidateRemoteView;
- (id)remoteView;
- (void *)_sheetEffect;
- (void)_resizeKeepingPanelOnScreen:(struct CGRect)arg1 expand:(BOOL)arg2 animate:(BOOL)arg3;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)valueforUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)kvoKeys;
- (void)configureContentView:(id)arg1;
- (BOOL)isLayerCentric;
- (id)panel;
- (id)init;
- (void)_documentWindowFrameForPanelRunningAsASheetInService:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerInterface;
- (id)exportedInterface;
- (BOOL)shouldRetainExportedObject;
- (BOOL)iCloudOpenPanel;
@property(readonly) BOOL appCentric;
- (BOOL)isMovable;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (double)_startRectForSheetHeightOffset;
- (void)_hideWindowForTimeMachineMode:(BOOL)arg1;
- (void)_orderRemoteWindow:(long long)arg1 sender:(id)arg2;
- (void)_setOverwritingAlertSuppressionURL:(id)arg1;
- (id)_overwritingAlertSuppressionURL;
- (void)_setIsExpanded:(BOOL)arg1 andStoreState:(BOOL)arg2;
- (void)_setIsExpanded:(BOOL)arg1;
- (void)_sendAccessoryView:(id)arg1;
- (void)_setRemoteAccessoryViewAvailable:(BOOL)arg1;
- (BOOL)_remoteAccessoryViewAvailable;
- (void)_setRemoteAccessoryView:(id)arg1;
- (id)_remoteAccessoryView;
@property(getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;
- (BOOL)_accessoryViewDisclosedVBKVO;
- (BOOL)_accessoryViewDisclosed;
- (BOOL)_accessoryViewDisclosureIsSupported;
- (BOOL)_shouldShowOptionsButton;
- (void)_setShouldShowOptionsButton:(BOOL)arg1;
- (void)_configureForFilename:(id)arg1;
- (BOOL)_shouldSetTagsForClient;
- (BOOL)_showsTagField;
- (void)_setShowsTagField:(BOOL)arg1;
- (id)_tags;
- (void)_setTags:(id)arg1;
- (BOOL)_shouldRevertOriginalDocument;
- (void)_setShouldRevertOriginalDocument:(BOOL)arg1;
- (BOOL)_showsRevertOriginalDocumentButton;
- (void)_setShowsRevertOriginalDocumentButton:(BOOL)arg1;
- (void)_setAlertInformativeMessage:(id)arg1;
- (id)_alertInformativeMessage;
- (void)_setAlertMessage:(id)arg1;
- (id)_alertMessage;
- (void)_setUseAlertStyle:(BOOL)arg1;
- (BOOL)_useAlertStyle;
- (void)_setDontSaveButtonTitle:(id)arg1;
- (id)_dontSaveButtonTitle;
- (void)_setEnabledFileTypes:(id)arg1;
- (BOOL)_okButtonDisabled;
- (void)_setOkButtonDisabled:(BOOL)arg1;
- (BOOL)_showNewDocumentButton;
- (void)_setShowNewDocumentButton:(BOOL)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)urlForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_setForKey:(id)arg1;
- (void)_setSet:(id)arg1 forKey:(id)arg2;
- (id)_dictForKey:(id)arg1;
- (void)_setDict:(id)arg1 forKey:(id)arg2;
- (id)_arrayForKey:(id)arg1;
- (void)_setArray:(id)arg1 forKey:(id)arg2;
- (double)_floatForKey:(id)arg1;
- (BOOL)_boolForKey:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;

@end

