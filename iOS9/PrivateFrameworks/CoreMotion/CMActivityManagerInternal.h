//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface CMActivityManagerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fActivityHandler;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    _Bool fSubscribedToMotionState;
    NSObject<OS_dispatch_semaphore> *fSidebandOverrideSemaphore;
    NSObject<OS_dispatch_queue> *fSidebandOverrideQueue;
    _Bool fSidebandOverrideWaiting;
    long long fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> *fMotionStateSimSemaphore;
    NSObject<OS_dispatch_queue> *fMotionStateSimQueue;
    _Bool fMotionStateSimWaiting;
    long long fMotionStateSimResult;
}

- (void)simulateMotionState:(_Bool)arg1 withState:(long long)arg2;
- (void)overrideOscarSideband:(_Bool)arg1 withState:(long long)arg2;
- (void)stopActivityUpdatesPrivate;
- (void)startActivityUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;
- (void)stopWatchdogCheckinsPrivate;
- (void)startWatchdogCheckinsPrivate;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)init;

@end

