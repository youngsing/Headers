//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <QuickLook/QLPreviewContentControllerProtocol-Protocol.h>
#import <QuickLook/QLPrintPageRendererDataSource-Protocol.h>

@class NSMapTable, NSString, QLPreviewController, QLPrintPageRenderer, _UIRemoteView;
@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource>
{
    QLPreviewController *_previewController;
    id <QLPreviewContentDataSource> _dataSource;
    id <QLPreviewContentDelegate> _delegate;
    long long _currentPreviewItemIndex;
    long long _numberOfPreviewItems;
    NSMapTable *_previewItemsForProxys;
    NSMapTable *_proxysForPreviewItems;
    QLPrintPageRenderer *_printPageRenderer;
    _UIRemoteView *_fullScreenView;
    _Bool _statusBarWasHidden;
    _Bool _isHostingFullScreenWindow;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property id <QLPreviewContentDelegate> delegate; // @synthesize delegate=_delegate;
@property id <QLPreviewContentDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property QLPreviewController *previewController; // @synthesize previewController=_previewController;
- (void)_didExitFullScreen;
- (void)_willEnterFullScreenWithContext:(id)arg1;
- (void)_setAVState:(id)arg1 forPreviewItem:(id)arg2;
- (void)_previewContentControllerReceivedTapOnURL:(id)arg1;
- (void)_dismissGestureUpdateWithState:(long long)arg1 trackingInformation:(id)arg2;
- (void)_showContentsWasTappedInPreviewContentController;
- (void)_overlayWasTappedInPreviewContentController;
- (void)_contentWasTappedInPreviewContentController;
- (void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;
- (void)_previewContentControllerDidMoveToItemAtIndex:(long long)arg1;
- (void)_previewContentControllerWillMoveToItemAtIndex:(long long)arg1;
- (void)_previewContentControllerGetPreviewItemAtIndex:(long long)arg1 sourceUUID:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_proxyForPreviewItem:(id)arg1;
- (id)_previewItemFromProxy:(id)arg1;
- (id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(_Bool *)arg3;
- (void)printPageRenderer:(id)arg1 prepareForDrawingPages:(struct _NSRange)arg2;
- (long long)numberOfPagesInPrintPageRenderer:(id)arg1;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)togglePlayState;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (void)forceResignFirstResponder;
- (void)becomeForeground;
- (void)enterBackground;
- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;
- (void)setContentFrame:(struct CGRect)arg1;
- (void)willChangeContentFrame;
- (void)configureWithParameters:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setTransitioning:(_Bool)arg1 synchronizedWithBlock:(CDUnknownBlockType)arg2;
- (void)setOrbMode:(unsigned long long)arg1;
- (void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(CDUnknownBlockType)arg1;
- (void)setBlockRemoteImages:(_Bool)arg1;
- (void)checkCurrentPreviewItem;
- (void)stopLoadingCurrentPreviewItem;
- (void)refreshCurrentPreviewItem;
- (long long)numberOfPreviewItems;
- (void)setNumberOfPreviewItems:(long long)arg1;
- (long long)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
@property int previewMode;
- (void)_updateNavigationBarVerticalOffset;
- (void)viewDidLayoutSubviews;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

