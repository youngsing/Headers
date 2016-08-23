//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class CAValueFunction, NSString;

@interface CAPropertyAnimation : CAAnimation
{
}

+ (id)animationWithKeyPath:(id)arg1;
- (BOOL)cumulative;
- (BOOL)additive;
@property(retain) CAValueFunction *valueFunction;
@property(getter=isCumulative) BOOL cumulative;
@property(copy) NSString *keyPath;
@property(getter=isAdditive) BOOL additive;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;

@end

