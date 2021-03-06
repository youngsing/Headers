//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFCompanionXPCManagerObserver-Protocol.h>
#import <Sharing/SFRemoteHotspotClient-Protocol.h>

@class NSString;
@protocol SFRemoteHotspotProtocol, SFRemoteHotspotSessionDelegate;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>
{
    BOOL _browsing;
    id <SFRemoteHotspotSessionDelegate> _delegate;
    id <SFRemoteHotspotProtocol> _connectionProxy;
}

@property(retain) id <SFRemoteHotspotProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property BOOL browsing; // @synthesize browsing=_browsing;
@property id <SFRemoteHotspotSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)xpcManagerConnectionInterrupted;
- (void)updatedFoundDeviceList:(id)arg1;
- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopBrowsing;
- (void)startBrowsing;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

