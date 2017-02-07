//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCAMLBezierData, MRCroppingSprite, MRImage, MRTextRenderer, NSArray, NSDictionary, NSMutableDictionary;

@interface MREffectSlidingPanels : MREffect
{
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    struct CGContext *mCachedRenderedText;
    NSMutableDictionary *mSprites;
    NSDictionary *mBreakInformation;
    MRCroppingSprite *mTextSprite;
    struct CGSize mMaxTextSize;
    BOOL mIsLoaded;
    NSArray *mCurrentInfo;
    BOOL mHasBreak;
    struct CGSize mTextSize;
    BOOL mFitMovies;
    MRCAMLBezierData *mEnterCurve;
    MRCAMLBezierData *mExitCurve;
    double _interactiveModeStartTime;
}

- (void)computeAnimationForTime:(double)arg1 direction:(id)arg2 rect:(struct CGRect *)arg3 justification:(struct CGPoint *)arg4;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (void)exitInteractiveMode;
- (void)enterInteractiveModeAtTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getStartTime:(double *)arg1 andDuration:(double *)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (struct CGSize)_sizeForBreakAspectRatio:(double)arg1 size:(struct CGSize)arg2 inContext:(id)arg3;
- (void)_applySizeScripts:(id)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)_unload;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)init;

@end
