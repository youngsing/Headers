//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKAuthenticateHostProtocol-Protocol.h>

@class GKGame, GKHostedAuthenticateViewController, NSString;

@interface GKAuthenticateHostViewController : GKUIRemoteViewController <GKAuthenticateHostProtocol>
{
    GKHostedAuthenticateViewController *_delegateWeak;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)authenticateExtension;
- (void)unlockRotation;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
@property(nonatomic) GKHostedAuthenticateViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
