//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/NSObject-Protocol.h>

@class NSArray, NSError, NSString, SPDaemonQueryToken, SPResultSet;

@protocol SPDaemonQueryDelegate <NSObject>
- (void)searchDaemonSuggestionsArray:(NSArray *)arg1;
- (void)searchDaemonRankingLog:(NSString *)arg1;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 encounteredError:(NSError *)arg2;

@optional
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 gotResultSet:(SPResultSet *)arg2 replace:(_Bool)arg3 complete:(_Bool)arg4 finished:(_Bool)arg5 blendingDuration:(double)arg6 geoEntityString:(NSString *)arg7;
@end
