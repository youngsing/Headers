//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAnalyticsEvent, NSArray;

@protocol AFAnalyticsService <NSObject>
- (oneway void)stageEvents:(NSArray *)arg1 completion:(void (^)(void))arg2;

@optional
- (oneway void)stageEvents:(NSArray *)arg1;
- (oneway void)stageEvent:(AFAnalyticsEvent *)arg1;
@end
