//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (NSSuggestedContentsScale)
@property(getter=NS_defersTransformInvalidation, setter=NS_setDefersTransformInvalidation:) BOOL NS_defersTransformInvalidation;
@property(readonly) double NS_suggestedContentsScale;
@property(readonly) struct CGSize NS_suggestedContentsScaleSize;
- (void)_NS_invalidateSuggestedContentsScale;
- (void)_NS_accumulateSuggestedScaleBelow:(double *)arg1:(double *)arg2;
- (void)_NS_accumulateSuggestedScale:(double *)arg1:(double *)arg2;
@end

