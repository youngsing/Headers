//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityPeerRangeCache, PFUbiquityPeerReceipt, PFUbiquityTransactionHistoryCache, PFUbiquityTransactionLogCache;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardCacheWrapper : NSObject
{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    PFUbiquityPeerRangeCache *_peerRangeCache;
    PFUbiquityTransactionLogCache *_transactionLogCache;
    PFUbiquityTransactionHistoryCache *_transactionHistoryCache;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_baselineKV;
    PFUbiquityPeerReceipt *_peerReceipt;
    BOOL _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    BOOL _allowSchedulingOfReceiptFileWrites;
}

@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(retain) PFUbiquityKnowledgeVector *baselineKV; // @synthesize baselineKV=_baselineKV;
@property(retain) PFUbiquityKnowledgeVector *kv; // @synthesize kv=_kv;
@property(readonly, nonatomic) PFUbiquityPeerReceipt *peerReceipt; // @synthesize peerReceipt=_peerReceipt;
@property(readonly, nonatomic) PFUbiquityTransactionHistoryCache *transactionHistoryCache; // @synthesize transactionHistoryCache=_transactionHistoryCache;
@property(readonly, nonatomic) PFUbiquityTransactionLogCache *transactionLogCache; // @synthesize transactionLogCache=_transactionLogCache;
@property(readonly, nonatomic) PFUbiquityPeerRangeCache *peerRangeCache; // @synthesize peerRangeCache=_peerRangeCache;
@property(readonly, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache; // @synthesize globalIDCache=_globalIDCache;
- (void)_appWillResignActive:(id)arg1;
- (BOOL)writeReceiptFile:(BOOL)arg1 error:(id *)arg2;
- (void)scheduleReceiptFileWrite:(id)arg1;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (void)dealloc;
- (id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)init;

@end

