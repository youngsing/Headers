//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVPlaybackViewController.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _TVPlaybackViewController : TVPlaybackViewController
{
    UIViewController *_overlayViewController;
    _Bool _viewDidAppear;
    struct {
        _Bool respondsToCustomAnimatorForNavigationControllerOperation;
        _Bool respondsToViewWillAppear;
        _Bool respondsToViewDidAppear;
        _Bool respondsToViewWillDisappear;
        _Bool respondsToViewDidDisappear;
    } _tvPlaybackDelegateFlags;
    _Bool _interactiveOverlayDismissable;
    UIViewController *_interactiveOverlayViewController;
}

@property(retain, nonatomic) UIViewController *interactiveOverlayViewController; // @synthesize interactiveOverlayViewController=_interactiveOverlayViewController;
@property(retain, nonatomic) UIViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(nonatomic, getter=isInteractiveOverlayDismissable) _Bool interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable;
- (void).cxx_destruct;
- (void)_currentChildViewControllerDidChangeFrom:(id)arg1;
- (void)_currentChildViewControllerWillChangeTo:(id)arg1;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)dealloc;
- (void)_presentInteractiveOverlay:(_Bool)arg1;
- (void)setInteractiveOverlayViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_dismissPlayerFromInteractiveOverlay;
- (void)_updateInteractiveOverlayDismissableState;
- (void)setPlaybackDelegate:(id)arg1;

@end

