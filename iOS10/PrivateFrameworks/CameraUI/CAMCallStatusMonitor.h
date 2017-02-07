//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject
{
    _Bool __mutexQueue_enabled;
    _Bool __mutexQueue_callActive;
    _Bool __mutexQueue_mustQueryInitialValueForCallActive;
    NSObject<OS_dispatch_queue> *__mutexQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
@property(nonatomic, setter=_mutexQueue_setMustQueryInitialValueForCallActive:) _Bool _mutexQueue_mustQueryInitialValueForCallActive; // @synthesize _mutexQueue_mustQueryInitialValueForCallActive=__mutexQueue_mustQueryInitialValueForCallActive;
@property(nonatomic, getter=_mutexQueue_isCallActive, setter=_mutexQueue_setCallActive:) _Bool _mutexQueue_callActive; // @synthesize _mutexQueue_callActive=__mutexQueue_callActive;
@property(nonatomic, getter=_mutexQueue_isEnabled, setter=_mutexQueue_setEnabled:) _Bool _mutexQueue_enabled; // @synthesize _mutexQueue_enabled=__mutexQueue_enabled;
- (void).cxx_destruct;
- (void)_setCallActive:(_Bool)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
@property(readonly, nonatomic, getter=isCallActive) _Bool callActive;
- (void)_queryCallActiveStatusForReason:(id)arg1;
- (void)_queryInitialValueForCallActiveIfNecessary;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_registerForAVSystemControllerNotifications;
- (void)dealloc;
- (id)init;

@end
