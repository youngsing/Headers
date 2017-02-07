//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKFocusView.h>

@interface CMKFaceTrackingView : CMKFocusView
{
    _Bool _isInFrame;
}

@property(nonatomic) _Bool isInFrame; // @synthesize isInFrame=_isInFrame;
- (void)animateToFrame:(struct CGRect)arg1;
- (void)fadeOut;
- (void)fadeIn;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (double)fadeOutDuration;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize *)arg2;
- (id)init;

@end
