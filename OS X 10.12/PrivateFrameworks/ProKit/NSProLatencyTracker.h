//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSProLatencyTracker : NSObject
{
    id trigger;
    double beginTime;
    double nextSendEventTime;
}

+ (id)sharedLatencyTracker;
- (void)flushLog;
- (void)revokeTracking;
- (void)_clear;
- (void)logNextSendEvent;
- (void)beginTrackingForView:(id)arg1;
- (void)beginTrackingForKeyEvent:(id)arg1;
- (id)_triggerDescription;
- (BOOL)isLogging;
- (void)dealloc;

@end

