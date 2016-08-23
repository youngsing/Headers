//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEvent, NSView;

@interface _NSRubberBand : NSObject
{
    struct CGPoint _startingPoint;
    struct CGRect _currentRect;
    struct CGRect _lastRect;
    id _delegate;
    NSView *_view;
    id _data;
    NSEvent *_event;
}

- (void)drawRubberBandWithClipRect:(struct CGRect)arg1;
- (void)performRubberBandingWithEvent:(id)arg1;
- (id)originalEvent;
- (void)setData:(id)arg1;
- (id)data;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 inView:(id)arg2;

@end

