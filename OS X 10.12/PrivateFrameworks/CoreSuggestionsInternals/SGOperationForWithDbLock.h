//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SGOperationForWithDbLock : NSBlockOperation
{
    NSObject<OS_dispatch_semaphore> *_semaphoreStart;
    NSObject<OS_dispatch_semaphore> *_semaphoreFinish;
}

- (void).cxx_destruct;
- (void)complete;
- (void)waitForStart;
- (void)block;
- (id)init;

@end

