//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _NSConstraintIndicatorView : NSView
{
    NSLayoutConstraint *representedConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *representedConstraint; // @synthesize representedConstraint;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 asBorder:(BOOL)arg2 withLineThickness:(double)arg3 forceColor:(id)arg4;
- (struct CGRect)roundRectInBase:(struct CGRect)arg1;
- (id)constraintDescription;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;
- (void)dealloc;

@end

