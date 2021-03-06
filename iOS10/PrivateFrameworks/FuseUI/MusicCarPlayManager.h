//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MCDCarDisplayServiceProvider-Protocol.h>

@class MCDRootController, MPCMediaPlayerLegacyPlayer, NSString, RadioRecentStationsController;

@interface MusicCarPlayManager : NSObject <MCDCarDisplayServiceProvider>
{
    MCDRootController *_carDisplayController;
    RadioRecentStationsController *_recentStationsController;
    MPCMediaPlayerLegacyPlayer *_legacyPlayer;
}

+ (id)sharedManager;
@property(retain, nonatomic) MPCMediaPlayerLegacyPlayer *legacyPlayer; // @synthesize legacyPlayer=_legacyPlayer;
@property(nonatomic) __weak RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
- (void).cxx_destruct;
- (void)_screenDidDisconnectNotification:(id)arg1;
- (void)_attachToStarkScreen:(id)arg1;
- (void)_screenDidConnectNotification:(id)arg1;
- (void)showNowPlaying:(_Bool)arg1;
- (void)changeShuffleType:(long long)arg1;
- (void)changeRepeatType:(long long)arg1;
- (void)_setupPlaybackForPlayer:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadPlayer:(id)arg1 radioMetadata:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3;
- (void)detachFromScreen;
- (void)attachToAvailableScreen;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

