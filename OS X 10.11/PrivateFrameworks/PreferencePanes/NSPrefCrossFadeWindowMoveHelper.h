//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPrefCrossFadeWindow;

@interface NSPrefCrossFadeWindowMoveHelper : NSObject
{
    struct __CFRunLoopTimer *_moveTimer;
    struct __CFRunLoop *_runLoop;
    double _startTime;
    double _totalTime;
    double _percent;
    NSPrefCrossFadeWindow *_window;
    struct CGRect _frameDelta;
    struct CGRect _startFrame;
    double _screenMaxY;
    BOOL _done;
    BOOL _displayFlag;
}

- (void)_stopAnimation;
- (void)_doAnimation:(BOOL)arg1;
- (void)_resizeWindow:(id)arg1 toFrame:(struct CGRect)arg2 display:(BOOL)arg3;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

