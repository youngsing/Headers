//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKGameStatService-Protocol.h>

@class GKLeaderboardScoreRequest, NSArray, NSDictionary;

@protocol GKGameStatServicePrivate <GKGameStatService>
- (oneway void)getHypotheticalLeaderboardRanksForScores:(NSArray *)arg1 forGameDescriptor:(NSDictionary *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getAchievementLeaderboardForRequest:(GKLeaderboardScoreRequest *)arg1 handler:(void (^)(GKLeaderboardInternal *, NSError *))arg2;
@end
