//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary;

@protocol AirPlayUIAgent
- (void)resumeAirPlayScreen:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)suspendAirPlayScreen:(void (^)(void))arg1;
- (void)setBestForAirPlayMode:(BOOL)arg1 forRoute:(NSDictionary *)arg2;
- (void)getBestForAirPlayModeForRoute:(NSDictionary *)arg1 reply:(void (^)(BOOL))arg2;
@end
