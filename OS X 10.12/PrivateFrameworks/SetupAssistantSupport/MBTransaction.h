//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBActivity, NSTimer;

@interface MBTransaction : NSObject
{
    MBActivity *_parentActivity;
    NSTimer *_timeoutTimer;
}

- (void)_timeout:(id)arg1;
- (void)stop;
- (id)waitForResponse;
- (void)requestWithData:(id)arg1;
- (id)initForActivity:(id)arg1 withTimeout:(double)arg2;
- (id)initForActivity:(id)arg1;

@end

