//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCTask.h>

#import <Mail/MFEWSRetrievePersistedFolderDataDelegate-Protocol.h>

@class MFEWSRetrievePersistedFolderDataOperation, NSMutableSet, NSString;
@protocol MFEWSMailboxDataCache;

@interface MFEWSRetrievePersistedFolderDataTask : MCTask <MFEWSRetrievePersistedFolderDataDelegate>
{
    MFEWSRetrievePersistedFolderDataOperation *_retrievePersistedFolderDataOperation;
    NSMutableSet *_urlsNeedingData;
    id <MFEWSMailboxDataCache> _cache;
}

@property(readonly, nonatomic) id <MFEWSMailboxDataCache> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)retrievePersistedFolderDataOperation:(id)arg1 didRetrieveFolderIDsByURL:(id)arg2 syncStatesByURL:(id)arg3 missedMailboxURLs:(id)arg4;
- (void)operationFinished:(id)arg1;
@property(retain, nonatomic) MFEWSRetrievePersistedFolderDataOperation *retrievePersistedFolderDataOperation;
- (void)retrieveDataForMailboxURLs:(id)arg1;
- (id)init;
- (id)initWithMailboxDataCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
