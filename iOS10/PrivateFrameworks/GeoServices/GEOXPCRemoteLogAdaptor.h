//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOBaseLogAdaptor.h>

#import <GeoServices/GEOPBSessionRequesterDelegate-Protocol.h>

@class GEOLogMessageCacheManager, GEORequester, NSLock, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <GEOPBSessionRequesterDelegate>
{
    NSURL *_remoteURL;
    NSString *_debugRequestName;
    NSLock *_xpcActivityInfoLock;
    NSString *_logMessageCacheFilePath;
    GEOLogMessageCacheManager *_logMessageCacheManager;
    GEORequester *_logMessageCollectionRequester;
    _Bool _logMessageCollectionRequestPending;
    NSLock *_logMessageCollectionRequesterLock;
    NSObject<OS_dispatch_queue> *_logMessageSendQueue;
    NSString *_adaptorIdentifier;
    NSString *_xpcActivityName;
    CDUnknownBlockType _shouldDeferXPCActivityBlock;
    NSLock *_shouldDeferXPCActivityBlockLock;
}

@property(retain, nonatomic) NSString *debugRequestName; // @synthesize debugRequestName=_debugRequestName;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
- (void)_deviceUnlocked;
- (void)_deviceLocking;
- (void)_purgeExpiredLogMessagesFromCache;
- (void)_purgeAndSendLogMessages;
- (void)_unregisterXPCActivityTimer;
- (void)_registerXPCActivityTimer;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (long long)_sizeOfLogMessageRequest:(id)arg1;
- (void)_requesterDidCompleteHandler:(id)arg1;
- (void)_requesterStartSendRequest:(id)arg1;
- (void)_sendLogMessageRequest:(id)arg1;
- (void)_sendNextLogMessageChunk;
- (_Bool)_isLogMessageCollectionRequesterPending;
- (void)_queueNextLogMessagesChunkForSending;
- (void)_beginSendingLogMessageChunks;
- (void)_cleanupLogMessageCollectionRequester;
- (_Bool)isLogFrameworkAdaptor;
- (void)forceFlushLogs;
- (void)flushLogs;
- (void)queueLogMessage:(id)arg1;
- (void)dealloc;
- (void)_setupXPCActivity;
- (void)_setupLogMessageCache;
- (_Bool)_useInMemoryLogMessageCache;
@property(readonly) NSString *adaptorIdentifier;
- (void)_setupQueueAndNotifications;
- (void)_initializeAdaptor;
- (id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4;
- (void)incrementXpcActivityTriggerCount;
@property(nonatomic) long long xpcActivityTriggerCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
