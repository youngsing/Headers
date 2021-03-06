//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/ABPredicateDelegate-Protocol.h>
#import <BulletinBoard/BBDataProviderManagerDelegate-Protocol.h>
#import <BulletinBoard/BBNotificationBehaviorUtilitiesServerProtocol-Protocol.h>
#import <BulletinBoard/BBServerConduitServerInterface-Protocol.h>
#import <BulletinBoard/BBSettingsGatewayServerInterface-Protocol.h>
#import <BulletinBoard/BBSyncServiceDelegate-Protocol.h>
#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class ABFavoritesListManager, BBDataProviderManager, BBDismissalSyncCache, BBMaskedSet, BBSyncService, NSArray, NSDate, NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_source;

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, BBNotificationBehaviorUtilitiesServerProtocol, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, BBSyncServiceDelegate>
{
    NSMutableDictionary *_bulletinRequestsByID;
    NSMutableDictionary *_sectionInfoByID;
    unsigned long long _currentSystemState;
    int _privilegedAddressBookGroupRecordID;
    NSMutableDictionary *_lastContactTimeForSender;
    unsigned long long _activeBehaviorOverrides;
    unsigned long long _privilegedSenderTypes;
    unsigned long long _globalCounter;
    _Bool _isRunning;
    BBDataProviderManager *_dataProviderManager;
    NSMutableSet *_observers;
    BBMaskedSet *_observerFeedSet;
    NSMutableArray *_observerGateways;
    NSMutableDictionary *_observerGatewaysByName;
    NSMutableDictionary *_observerGatewayEnumerators;
    NSMutableDictionary *_pendingUpdatesByBulletinID;
    NSMutableSet *_settingsGatewayConnections;
    NSMutableDictionary *_activeSectionIDsByCategory;
    NSMutableDictionary *_sortedSectionIDsByCategory;
    long long _sectionOrderRule;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_noticeBulletinIDsBySectionID;
    NSArray *_behaviorOverrides;
    NSDate *_behaviorOverrideStatusEffectiveTime;
    NSObject<OS_dispatch_source> *_behaviorOverridesTimer;
    NSDate *_behaviorOverridesWakeTime;
    NSMutableArray *_behaviorOverridesChangeClients;
    NSMutableArray *_behaviorOverridesEffectiveWhileUnlockedChangeClients;
    NSMutableArray *_behaviorOverrideStatusChangeClients;
    NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;
    NSMutableArray *_activeBehaviorOverrideTypesChangeAssertionCountSettingsGateways;
    NSMutableArray *_activeBehaviorOverrideTypesChangeClients;
    _Bool _behaviorOverridesEffectiveWhileUnlocked;
    unsigned long long _activeObserverBehaviorOverrideTypes;
    unsigned long long _activeSettingsGatewayBehaviorOverrideTypes;
    unsigned long long _behaviorOverrideState;
    NSString *_privilegedAddressBookGroupName;
    NSMutableArray *_privilegedSenderFilteringStateChangeClients;
    _Bool _privilegedSenderFilteringNecessary;
    NSMutableArray *_privilegedSenderChangeSettingsGateways;
    NSMutableArray *_privilegedSenderTypesChangeSettingsGateways;
    NSMutableArray *_expiringBulletinIDs;
    NSObject<OS_dispatch_source> *_expirationTimer;
    NSMutableArray *_eventBasedExpiringBulletinIDs;
    NSDate *_nextScheduledExpirationTimerFireDate;
    NSDateComponents *_defaultExpirationComponents;
    NSDateComponents *_expirationReferenceComponents;
    NSMutableDictionary *_clearedSections;
    int _serverIsRunningToken;
    int _demo_lockscreen_token;
    BBSyncService *_syncService;
    NSXPCListener *_observerListener;
    NSMutableSet *_utilitiesConnections;
    NSXPCListener *_utilitiesListener;
    NSXPCListener *_conduitListener;
    NSMutableSet *_systemStateConnections;
    NSXPCListener *_systemStateListener;
    NSXPCListener *_settingsListener;
    NSMutableSet *_suspendedConnections;
    BBDismissalSyncCache *_dismissalSyncCache;
    long long _behaviorManualOverrideStatus;
    long long _behaviorOverrideStatus;
    NSMutableArray *_quietModeOverrideAssertions;
    unsigned long long _activeQuietModeAssertionCount;
    unsigned long long _activeQuietModeAssertionGatewayCount;
    void *_addressBook;
    ABFavoritesListManager *_favoritesListManager;
    _Bool _entryFound;
}

+ (_Bool)_removeSavedChronologicalSectionInfos:(id)arg1;
+ (id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)arg1;
+ (id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)arg1;
+ (void)removeSavedChronologicalSectionInfo:(id)arg1;
+ (void)_writeSectionInfo:(id)arg1;
+ (id)savedSectionInfo;
+ (id)savedChronologicalSectionOrder;
+ (id)_sectionInfoPath;
+ (id)_sectionOrderPath;
+ (id)_dataDirectoryPath;
+ (void)initialize;
+ (id)behaviorUtilitiesServerInterface;
- (void).cxx_destruct;
- (id)syncService:(id)arg1 sectionIdentifierForUniversalSectionIdentifier:(id)arg2;
- (id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
- (_Bool)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)_didEffectiveSettingsChange:(id)arg1;
- (void)_unobserveManagedProfileChanges;
- (void)_observeManagedProfileChanges;
- (unsigned long long)_activeQuietModeAssertionCount;
- (_Bool)_isQuietModeAssertActive;
- (void)_invalidateAllQuietModeAssertions;
- (id)_createQuietModeAssertion;
- (void)requestQuietModeOverrideAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_writeBehaviorOverrides;
- (void)_loadBehaviorOverrides;
- (unsigned long long)defaultPrivilegedSenderType;
- (_Bool)_deviceSupportsFavorites;
- (void)_writeSectionInfo;
- (void)_writeSectionOrder;
- (void)_loadSavedSectionInfo;
- (void)_removeVestigialSections;
- (void)_loadSavedSectionOrderAndRule;
- (id)_behaviorOverridesPath;
- (void)_writeClearedSections;
- (void)_loadClearedSections;
- (id)_clearedSectionsPath;
- (void)_ensureDataDirectoryExists;
- (void)_removeActiveSectionID:(id)arg1;
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2;
- (void)_addActiveSectionID:(id)arg1;
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
- (void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_clearedInfoForSectionID:(id)arg1;
- (unsigned long long)_filtersForSectionID:(id)arg1;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 alwaysToLockScreen:(_Bool)arg4;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3;
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)_reloadSectionParametersForSectionID:(id)arg1;
- (void)_updateAllBulletinsForDataProvider:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;
- (id)_sinceDate;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (_Bool)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (void)_publishBulletinsForAllDataProviders;
- (void)_loadDataProvidersAndSettings;
- (void)_migratePrivilegedSender;
- (void)_migrateSectionOrder;
- (void)_migrateLoadedData;
- (id)_sectionIDsToMigrate;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(CDUnknownBlockType)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(_Bool)arg1;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(_Bool)arg1;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)setActiveBehaviorOverrideTypesChangeAssertionCountUpdatesEnabled:(_Bool)arg1;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(_Bool)arg1;
- (void)_queue_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(id)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)_clearBehaviorOverridesTimer;
- (void)_updateBehaviorOverridesFromSource:(unsigned long long)arg1;
- (void)_checkPrivilegedSenderFilteringState;
- (void)_sendPrivilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_privilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_sendPrivilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_privilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_behaviorOverrideStatusChangedFromSource:(unsigned long long)arg1;
- (void)_behaviorOverrideTypesChangedFromSource:(unsigned long long)arg1;
- (void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3;
- (void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;
- (void)_sendUtilitiesActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;
- (void)_sendObseversActiveOverrideTypes:(unsigned long long)arg1 state:(unsigned long long)arg2;
- (unsigned long long)_behaviorOverrideState;
- (unsigned long long)_activeBehaviorOverrideTypesConsideringSystemState:(_Bool)arg1;
- (void)_noteSystemStateChanged;
- (unsigned long long)_adjustedBehaviorOverrideTypes:(unsigned long long)arg1 basedOnSystemState:(unsigned long long)arg2;
- (void)_setBehaviorOverridesTimer;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setSectionOrderRule:(long long)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getBulletinsPublishedAfterDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getBulletinsWithHandler:(CDUnknownBlockType)arg1;
- (id)bulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2;
- (id)bulletinsRequestsForBulletinIDs:(id)arg1;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(CDUnknownBlockType)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(CDUnknownBlockType)arg1;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)sectionIDForUniversalSectionID:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)privilegedSenderTypes;
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(CDUnknownBlockType)arg1;
- (void)getBehaviorOverridesWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getSectionInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(CDUnknownBlockType)arg2;
- (void)_sendObserver:(id)arg1 noticesBulletinsForSectionID:(id)arg2;
- (void)requestNoticesBulletinsForAllSections:(id)arg1;
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoForSectionIDs:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)observer:(id)arg1 getSectionInfoForActiveSectionsWithHandler:(CDUnknownBlockType)arg2;
- (void)observer:(id)arg1 getSectionInfoWithHandler:(CDUnknownBlockType)arg2;
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearBulletinsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)observer:(id)arg1 handleResponse:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_didReceiveResponseForBulletin:(id)arg1;
- (id)_openApplicationOptionsForResponse:(id)arg1;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3;
- (void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSectionOrderRuleWithHandler:(CDUnknownBlockType)arg1;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_validateExpirationDateForBulletinRequest:(id)arg1;
- (id)_bulletinDefaultExpirationDateFromDate:(id)arg1;
- (void)_setDefaultExpirationComponents:(id)arg1;
- (id)_newDateCompontentsByInvertingInterestingPartsOfComponents:(id)arg1;
- (id)_newValidatedDefaultExpirationComponentsFromComponents:(id)arg1;
- (void)_expireBulletins;
- (void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1;
- (unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (id)_nextExpireBulletinsDate;
- (void)_scheduleTimerForDate:(id)arg1;
- (void)_clearExpirationTimer;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemWake;
- (void)_handleSystemSleep;
- (void)_updateDataProviderForSectionInfo:(id)arg1 sectionID:(id)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setSectionInfoNoteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (_Bool)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(_Bool)arg2;
- (id)_sectionInfoArray:(_Bool)arg1;
- (id)_sectionInfoArrayForActiveSections:(_Bool)arg1;
- (id)_sectionInfoArrayForSectionIDs:(id)arg1 effective:(_Bool)arg2;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(_Bool)arg2;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;
- (id)_sortedSectionIDs;
- (id)_activeSectionIDs;
- (id)_defaultSectionOrderForTopLevelCollection:(id)arg1;
- (id)_defaultSectionOrders;
- (id)_allBulletinsForSectionID:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(_Bool)arg3;
- (id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2;
- (void)_removeSection:(id)arg1;
- (void)_clearSection:(id)arg1;
- (void)_clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 forSection:(id)arg3;
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(_Bool)arg3;
- (void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(_Bool)arg2;
- (void)_dataProviderDidClearInfo:(id)arg1 forSection:(id)arg2;
- (void)_removeBulletins:(id)arg1 forSectionID:(id)arg2 shouldSync:(_Bool)arg3;
- (void)_removeBulletin:(id)arg1 shouldSync:(_Bool)arg2;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(_Bool)arg2 shouldSync:(_Bool)arg3;
- (void)_modifyBulletin:(id)arg1;
- (void)_addBulletin:(id)arg1;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (void)_sendBulletinUpdate:(id)arg1;
- (void)_performPendingBulletinUpdatesForBulletinID:(id)arg1;
- (void)_enqueueBulletinUpdate:(id)arg1;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (id)_observerGatewaysForFeeds:(unsigned long long)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_sendUpdateSectionOrder;
- (void)_sendRemoveSection:(id)arg1;
- (id)_observersForNoticesFeed;
- (void)_sendUpdateSectionInfo:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_resumeAllSuspendedConnections;
- (void)_removeSuspendedConnection:(id)arg1;
- (void)_addSuspendedConnection:(id)arg1;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)carBulletinIDsForSectionID:(id)arg1;
- (id)noticesBulletinIDsForSectionID:(id)arg1;
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2;
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3;
- (id)_mapForFeed:(unsigned long long)arg1;
- (void)withdrawBulletinID:(id)arg1;
- (void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(_Bool)arg3;
- (void)_removeUtilityConnection:(id)arg1;
- (void)_addUtilityConnection:(id)arg1;
- (void)_removeSystemStateConnection:(id)arg1;
- (void)_addSystemStateConnection:(id)arg1;
- (void)_removeSettingsGatewayConnection:(id)arg1;
- (void)_addSettingsGatewayConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)isRunning;
- (void)dealloc;
- (id)init;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(_Bool)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2;
- (_Bool)_sectionFiltersAllowBulletin:(id)arg1;
- (id)_effectiveSectionFiltersForBulletin:(id)arg1;
- (void)_updateShowsMessagePreviewForBulletin:(id)arg1;
- (void)deliverResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (_Bool)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned long long)arg1 privilegedSenderTypes:(unsigned long long)arg2;
- (_Bool)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2;
- (_Bool)_doesAddressBookPersonContainCallIgnoreMuteForDestinationID:(id)arg1;
- (_Bool)_doesAddressBookContainDestinationID:(id)arg1;
- (_Bool)_doesFavoritesListContainDestinationID:(id)arg1;
- (_Bool)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2;
- (_Bool)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (_Bool)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (id)_favoritesListManager;
- (void *)_addressBook;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

