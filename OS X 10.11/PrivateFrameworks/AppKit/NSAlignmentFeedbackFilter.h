//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSAlignmentFeedbackFilter : NSObject
{
}

+ (unsigned long long)inputEventMask;
- (void)performFeedback:(id)arg1 performanceTime:(unsigned long long)arg2;
- (id)alignmentFeedbackTokenForVerticalMovementInView:(id)arg1 previousY:(double)arg2 alignedY:(double)arg3 defaultY:(double)arg4;
- (id)alignmentFeedbackTokenForHorizontalMovementInView:(id)arg1 previousX:(double)arg2 alignedX:(double)arg3 defaultX:(double)arg4;
- (id)alignmentFeedbackTokenForMovementInView:(id)arg1 previousPoint:(struct CGPoint)arg2 alignedPoint:(struct CGPoint)arg3 defaultPoint:(struct CGPoint)arg4;
- (void)updateWithPanRecognizer:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_alignmentFeedbackFilterImpl;
- (void)_setSnapDistance:(double)arg1;
- (void)_setActuationBlock:(CDUnknownBlockType)arg1 coalesce:(BOOL)arg2;
- (CDUnknownBlockType)_actuationBlock;

@end

