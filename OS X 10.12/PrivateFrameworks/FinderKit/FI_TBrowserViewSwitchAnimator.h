//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TBrowserViewSwitchAnimator : NSObject
{
    struct TNSRef<NSWindow *, void> _parentWindow;
    struct TNSRef<NSWindow *, void> _coverWindow;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _initialBrowserImage;
    struct TNSRef<CALayer *, void> _initialBrowserLayer;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _finalBrowserImage;
    struct TNSRef<CALayer *, void> _finalBrowserLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animateTransition;
- (void)showCoverWindowWithFrame:(struct CGRect)arg1;
- (void)hideCoverWindow;
- (id)createCoverWindowWithFrame:(struct CGRect)arg1;
- (id)finalBrowserLayer;
- (id)initialBrowserLayer;
- (void)setFinalBrowserImage:(struct CGImage *)arg1;
- (void)setInitialBrowserImage:(struct CGImage *)arg1;
- (void)setParentWindow:(id)arg1;
- (void)dealloc;
- (void)aboutToTearDown;

@end
