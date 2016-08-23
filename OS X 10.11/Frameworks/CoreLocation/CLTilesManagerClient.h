//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLTilesManagerClientInternal;

@interface CLTilesManagerClient : NSObject
{
    CLTilesManagerClientInternal *_internal;
}

+ (id)sharedClient;
+ (void)initialize;
- (BOOL)unregisterFrom:(id)arg1;
- (BOOL)registerTo:(id)arg1 onQueue:(struct dispatch_queue_s *)arg2 block:(CDUnknownBlockType)arg3;
- (void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(BOOL)arg2;
- (BOOL)precacheHint:(id)arg1 onQueue:(struct dispatch_queue_s *)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (BOOL)executeAsynchronousQuery:(id)arg1 onQueue:(struct dispatch_queue_s *)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (void)onNotificationReceived:(void *)arg1;
- (void)reconnect;

@end

