//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMAVTelephonyManager : NSObject
{
    _Bool _isDesignatedAudioServiceProvider;
    _Bool _isDesignatedVideoServiceProvider;
    struct __CFMachPort *_ctServerMachPort;
    struct __CFUUID *_ctAudioToken;
    struct __CFUUID *_ctVideoToken;
}

+ (id)numberToDialForNumber:(id)arg1 dialAssist:(_Bool *)arg2;
+ (id)sharedInstance;
- (void)stopWatchingForCTRequests;
- (void)startWatchingForCTRequests;
- (void)_chatStateChanged:(id)arg1;
- (void)notifyCallEndedForChat:(id)arg1;
- (void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(_Bool)arg2;
- (void)notifyMissedCallForChat:(id)arg1;
- (void)notifyCallStartedForChat:(id)arg1;
- (void)notifyCallConnectingForChat:(id)arg1;
- (void)notifyCallConnectedForChat:(id)arg1;
- (_Bool)_isOnCallToID:(id)arg1;
- (void)_disconnectCSCallWithID:(id)arg1;
@property(readonly, nonatomic) unsigned int callState;
- (_Bool)_disconnectCTServerConnection;
- (_Bool)_reconnectCTServerConnectionIfNecessary;
- (_Bool)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (_Bool)_unregisterCTRequestService;
- (_Bool)_registerCTRequestService;
- (void)dealloc;
- (id)init;

@end
