//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController
{
    id <GKAchievementViewControllerDelegate> _achievementDelegate;
}

@property(nonatomic) id <GKAchievementViewControllerDelegate> achievementDelegate; // @synthesize achievementDelegate=_achievementDelegate;
- (void)notifyDelegateOnWillFinish;
- (void)dealloc;
- (id)init;

@end

