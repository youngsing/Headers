//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CKAcknowledgmentGlyphView : UIView
{
    double _animationDuration;
    UIColor *_glyphColor;
    struct CGPoint _glyphOffset;
}

+ (void)cacheGlyphView:(id)arg1;
+ (id)glyphViewForAcknowledgmentType:(long long)arg1;
+ (id)viewCache;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) struct CGPoint glyphOffset; // @synthesize glyphOffset=_glyphOffset;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long acknowledgmentType; // @dynamic acknowledgmentType;
- (void)animateWithDelay:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end

