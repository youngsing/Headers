//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemMigration/SMViewController.h>

#import <SystemMigration/SMCustomize_Client_Delegate-Protocol.h>

@class NSAlert, NSAttributedString, NSImageView, NSLayoutConstraint, NSMutableArray, NSNumber, NSOutlineView, NSString, NSTableView, SMConflictResolutionViewController, SMCustomizeTree_Client, SMCustomize_Client, SMFDEManagementViewController, SMMigrationCustomizeEditViewController, SMSystem_Client;

@interface SMMigrationCustomizeViewController : SMViewController <SMCustomize_Client_Delegate>
{
    BOOL _acceptActionAvailable;
    BOOL _customizationIsReady;
    BOOL _simpleMode;
    BOOL _targetCanBecomeFDE;
    BOOL _simpleModeResolveSeen;
    BOOL _requestAlreadySubmitted;
    BOOL _usersNeedLoginToTransfer;
    SMSystem_Client *_sourceSystem;
    NSNumber *_netSpace;
    NSNumber *_totalSize;
    NSMutableArray *_quickItems;
    SMCustomize_Client *_customizeClient;
    SMCustomizeTree_Client *_customizeTree;
    NSImageView *_toArrowIconView;
    NSTableView *_quickItemsTable;
    NSLayoutConstraint *_quickItemsTableWidthContstraint;
    NSOutlineView *_outlineView;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _updateiTunesHandler;
    CDUnknownBlockType _fdeConvertHandler;
    SMMigrationCustomizeEditViewController *_editViewController;
    SMConflictResolutionViewController *_conflictResolutionViewController;
    SMFDEManagementViewController *_fdeManagementViewController;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _connectionErrorHandler;
    NSAlert *_reconnectAlert;
}

+ (id)keyPathsForValuesAffectingViewModeTabIndex;
+ (id)keyPathsForValuesAffectingSpaceSummaryTextAdvanced;
+ (id)keyPathsForValuesAffectingSpaceSummaryText;
+ (id)keyPathsForValuesAffectingDescriptiveTotalSize;
+ (id)keyPathsForValuesAffectingDescriptiveNetSpace;
+ (void)initialize;
@property BOOL usersNeedLoginToTransfer; // @synthesize usersNeedLoginToTransfer=_usersNeedLoginToTransfer;
@property(retain) NSAlert *reconnectAlert; // @synthesize reconnectAlert=_reconnectAlert;
@property BOOL requestAlreadySubmitted; // @synthesize requestAlreadySubmitted=_requestAlreadySubmitted;
@property(copy) CDUnknownBlockType connectionErrorHandler; // @synthesize connectionErrorHandler=_connectionErrorHandler;
@property BOOL simpleModeResolveSeen; // @synthesize simpleModeResolveSeen=_simpleModeResolveSeen;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) SMFDEManagementViewController *fdeManagementViewController; // @synthesize fdeManagementViewController=_fdeManagementViewController;
@property(retain) SMConflictResolutionViewController *conflictResolutionViewController; // @synthesize conflictResolutionViewController=_conflictResolutionViewController;
@property(retain) SMMigrationCustomizeEditViewController *editViewController; // @synthesize editViewController=_editViewController;
@property(copy) CDUnknownBlockType fdeConvertHandler; // @synthesize fdeConvertHandler=_fdeConvertHandler;
@property BOOL targetCanBecomeFDE; // @synthesize targetCanBecomeFDE=_targetCanBecomeFDE;
@property(copy) CDUnknownBlockType updateiTunesHandler; // @synthesize updateiTunesHandler=_updateiTunesHandler;
@property(copy) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property NSLayoutConstraint *quickItemsTableWidthContstraint; // @synthesize quickItemsTableWidthContstraint=_quickItemsTableWidthContstraint;
@property NSTableView *quickItemsTable; // @synthesize quickItemsTable=_quickItemsTable;
@property NSImageView *toArrowIconView; // @synthesize toArrowIconView=_toArrowIconView;
@property(retain) SMCustomizeTree_Client *customizeTree; // @synthesize customizeTree=_customizeTree;
@property(retain) SMCustomize_Client *customizeClient; // @synthesize customizeClient=_customizeClient;
@property(retain) NSMutableArray *quickItems; // @synthesize quickItems=_quickItems;
@property BOOL simpleMode; // @synthesize simpleMode=_simpleMode;
@property(retain) NSNumber *totalSize; // @synthesize totalSize=_totalSize;
@property(retain) NSNumber *netSpace; // @synthesize netSpace=_netSpace;
@property BOOL customizationIsReady; // @synthesize customizationIsReady=_customizationIsReady;
@property BOOL acceptActionAvailable; // @synthesize acceptActionAvailable=_acceptActionAvailable;
@property(retain) SMSystem_Client *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
- (void).cxx_destruct;
- (id)destinationSystem;
- (id)customizeClientForSystem:(id)arg1;
- (BOOL)shouldUpdateiTunesForSelectedUserCount:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showWindowsUserRelogSheet;
- (BOOL)sufficientSpaceToMigrate;
- (void)determineSimpleModeForMac;
- (void)reconnecting:(BOOL)arg1;
- (void)daemonConnectionLost;
- (void)recalculateQuickItemTableWidth;
@property(readonly) unsigned long long viewModeTabIndex;
@property(readonly) NSAttributedString *spaceSummaryTextAdvanced;
- (void)applySummaryTextStyling:(id)arg1;
- (id)filesProcessedString;
- (id)summarySpaceStringWithLocID:(id)arg1;
@property(readonly) NSAttributedString *spaceSummaryText;
@property(readonly) NSAttributedString *descriptiveTotalSize;
@property(readonly) NSAttributedString *descriptiveNetSpace;
- (void)resetState;
- (void)updateAcceptActionAvailable;
- (void)setupWindowsSystem;
- (void)setupMacSystem;
- (void)teardownTree;
- (void)setup;
- (id)treeKeysToObserve;
- (void)setupForSystem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)submitRequest;
- (void)submitRequestWithFDEConversionFor:(id)arg1 withPassword:(id)arg2 andBag:(id)arg3;
- (void)dumpNodeSpaceCalculationsForDebugging:(id)arg1 depth:(unsigned long long)arg2;
- (void)showFileVaultManagementIfNeeded;
- (void)pressedEdit:(id)arg1;
- (BOOL)pressedBackButton:(id)arg1;
- (void)_proceedPastUserConflictHandling:(unsigned long long)arg1;
- (BOOL)pressedSelectButton:(id)arg1;
- (void)installCustomizeViewInSuperview:(id)arg1;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)initWithConnectionErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

