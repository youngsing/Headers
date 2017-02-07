//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKGameCenterDashboardHostProtocol-Protocol.h>
#import <GameCenterUI/GKGameCenterDashboardServiceProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol, GKGameCenterDashboardServiceProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(CDUnknownBlockType)arg1;
- (void)playPressedForChallenge:(id)arg1;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestImagesForLeaderboardSetsWithHandler:(CDUnknownBlockType)arg1;
- (void)requestDashboardLogoImageWithHandler:(CDUnknownBlockType)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(id)arg1;
- (void)remoteControllerDidChangeViewState:(id)arg1;
- (void)hostDidParseDashboardImageNames:(id)arg1 leaderboardSetNames:(id)arg2 leaderboardNames:(id)arg3;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForChallenge:(_Bool)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(id)arg1;
- (void)hostDidChangeLeaderboardIdentifier:(id)arg1;
- (void)hostDidChangeViewState:(id)arg1;
- (id)extensionObjectProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
