//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableSet, NSThread, NSView;

@interface NSUIHeartBeat : NSObject
{
    CDStruct_d41e72e8 _times;
    NSLock *_drawingThreadLock;
    NSLock *_blockLock;
    NSLock *_clientsLock;
    NSMutableSet *_clients;
    NSThread *_heartBeatThread;
    NSView *_currentView;
    struct {
        unsigned int _isDrawingLocked:1;
        unsigned int _isClientsChanged:1;
        unsigned int _lockedByClient:1;
        unsigned int _sessionIsActive:1;
        unsigned int _registeredForNotifications:1;
        unsigned int _pendingClientUnlock:1;
        unsigned int _queueState:2;
        unsigned int _reserved:24;
    } _hbFlags;
}

+ (BOOL)isHeartBeatThread;
+ (void)setHeartBeatCycle:(double)arg1;
+ (double)heartBeatCycle;
+ (id)sharedHeartBeat;
+ (void)initialize;
- (double)_startFrameTime;
- (double)_currentFrameTime;
- (void)unlockFocusInRect:(struct CGRect)arg1;
- (BOOL)lockFocusForView:(id)arg1 inRect:(struct CGRect)arg2 needsTranslation:(BOOL)arg3;
- (void)reenableHeartBeating:(BOOL)arg1;
- (void)disableHeartBeating;
- (void)updateHeartBeatState;
- (double)birthDate;
- (void)removeHeartBeatView:(id)arg1;
- (void)addHeartBeatView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_unregisterForSessionNotifications;
- (void)_registerForSessionNotifications;
- (void)_sessionDidResignActive;
- (void)_sessionDidBecomeActive;
- (void)_heartBeatThread:(id)arg1;
- (BOOL)_isBlocked;
- (BOOL)_isSpinning;

@end

