//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, BKSProcessAssertion, NSArray;

__attribute__((visibility("hidden")))
@interface NSFileAccessProcessManager : NSObject
{
    struct _xpc_connection_s *_connection;
    struct dispatch_queue_s *_queue;
    CDUnknownBlockType _suspensionHandler;
    NSArray *_urls;
    BKSApplicationStateMonitor *_monitor;
    BKSProcessAssertion *_assertion;
    int _pendingMessageCount;
}

+ (BOOL)needToManageConnection:(struct _xpc_connection_s *)arg1 forURLs:(id)arg2;
- (void)invalidate;
- (void)allowSuspension;
- (void)preventSuspensionWithActivityName:(id)arg1;
- (void)safelySendMessageWithReplyUsingBlock:(CDUnknownBlockType)arg1;
- (void)killProcessWithMessage:(id)arg1;
@property(copy) NSArray *URLs;
@property(copy) CDUnknownBlockType suspensionHandler;
- (void)_ensureMonitor;
- (void)dealloc;
- (id)initWithClient:(struct _xpc_connection_s *)arg1 queue:(struct dispatch_queue_s *)arg2;

@end

