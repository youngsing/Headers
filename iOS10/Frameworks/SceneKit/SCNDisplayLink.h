//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    CADisplayLink *_caDisplayLink;
    _Bool _supportTargetTimestamp;
    id _owner;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _invalidated;
    _Bool _asynchronous;
    double _lastFrameTime;
    float _preferredFrameRate;
    int _queuedFrameCount;
}

- (_Bool)_isInvalidated;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)_teardown;
- (void)_resume;
- (void)_pause;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property(nonatomic) float preferredFrameRate;
- (_Bool)setPaused:(_Bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;
- (void)willDie;
- (id)initWithOwner:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

