//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface MKLayer : CALayer
{
    struct CGRect _hitBounds;
    struct CGPoint _hitOffset;
    struct CGPoint _hitOutset;
}

@property(readonly, nonatomic) struct CGRect hitBounds; // @synthesize hitBounds=_hitBounds;
@property(nonatomic) struct CGPoint hitOutset; // @synthesize hitOutset=_hitOutset;
@property(nonatomic) struct CGPoint hitOffset; // @synthesize hitOffset=_hitOffset;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

