//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKGamesViewController.h>

@class GKMeHeaderView, LocalPlayerHeaderView, LocalPlayerSignInView;

@interface GKMePageViewController : GKGamesViewController
{
    GKMeHeaderView *_headerView;
    LocalPlayerSignInView *_signInView;
    LocalPlayerHeaderView *_playerHeaderView;
}

@property(retain, nonatomic) LocalPlayerHeaderView *playerHeaderView; // @synthesize playerHeaderView=_playerHeaderView;
@property(retain, nonatomic) LocalPlayerSignInView *signInView; // @synthesize signInView=_signInView;
- (void)updateHeader;
- (void)configureDataSource;
- (void)configureMeHeader:(id)arg1;
- (void)configureViewFactories;
- (void)authenticationDidChange;
- (void)statusFrameChanged:(id)arg1;
- (void)updateStatusLayout;
@property(retain) GKMeHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)dealloc;
- (void)viewDidAppear;

@end
