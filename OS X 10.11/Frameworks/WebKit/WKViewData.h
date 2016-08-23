//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEvent, NSWindow, _WKThumbnailView;

__attribute__((visibility("hidden")))
@interface WKViewData : NSObject
{
    struct unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl>> _pageClient;
    struct RefPtr<WebKit::WebPageProxy> _page;
    struct RetainPtr<WKBrowsingContextController> _browsingContextController;
    struct RetainPtr<NSView> _inspectorAttachmentView;
    struct RetainPtr<NSTrackingArea> _primaryTrackingArea;
    long long _lastToolTipTag;
    id _trackingRectOwner;
    void *_trackingRectUserData;
    struct RetainPtr<NSView> _layerHostingView;
    struct RetainPtr<id> _remoteAccessibilityChild;
    struct HashMap<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem>>, 0, WTF::CrashOnOverflow, 16>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem>>, 0, WTF::CrashOnOverflow, 16>>> _validationMap;
    struct unique_ptr<WebCore::TextIndicatorWindow, std::__1::default_delete<WebCore::TextIndicatorWindow>> _textIndicatorWindow;
    struct RetainPtr<NSEvent> _keyDownEventBeingResent;
    Vector_b180ff1e *_collectedKeypressCommands;
    struct CGSize _resizeScrollOffset;
    unsigned long long _pluginComplexTextInputIdentifier;
    int _pluginComplexTextInputState;
    _Bool _inBecomeFirstResponder;
    _Bool _inResignFirstResponder;
    BOOL _willBecomeFirstResponderAgain;
    NSEvent *_mouseDownEvent;
    NSEvent *_pressureEvent;
    BOOL _ignoringMouseDraggedEvents;
    id _flagsChangedEventMonitor;
    struct RetainPtr<WKFullScreenWindowController> _fullScreenWindowController;
    BOOL _hasSpellCheckerDocumentTag;
    long long _spellCheckerDocumentTag;
    BOOL _inSecureInputState;
    BOOL _shouldDeferViewInWindowChanges;
    NSWindow *_targetWindowForMovePreparation;
    BOOL _viewInWindowChangeWasDeferred;
    BOOL _needsViewFrameInWindowCoordinates;
    BOOL _didScheduleWindowAndViewFrameUpdate;
    struct RetainPtr<NSColorSpace> _colorSpace;
    struct RefPtr<WebCore::Image> _promisedImage;
    struct String _promisedFilename;
    struct String _promisedURL;
    struct CGSize _intrinsicContentSize;
    BOOL _clipsToVisibleRect;
    struct CGRect _contentPreparationRect;
    BOOL _useContentPreparationRectForVisibleRect;
    BOOL _windowOcclusionDetectionEnabled;
    struct RetainPtr<WKWindowVisibilityObserver> _windowVisibilityObserver;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController>> _gestureController;
    BOOL _allowsMagnification;
    BOOL _ignoresNonWheelEvents;
    BOOL _ignoresAllEvents;
    BOOL _allowsBackForwardNavigationGestures;
    BOOL _allowsLinkPreview;
    struct RetainPtr<WKViewLayoutStrategy> _layoutStrategy;
    unsigned int _lastRequestedLayoutMode;
    float _lastRequestedViewScale;
    struct CGSize _minimumViewSize;
    struct RetainPtr<CALayer> _rootLayer;
    BOOL _didScheduleSetTopContentInset;
    double _topContentInset;
    double _totalHeightOfBanners;
    double _overrideDeviceScaleFactor;
    BOOL _didRegisterForLookupPopoverCloseNotifications;
    BOOL _automaticallyAdjustsContentInsets;
    struct RetainPtr<WKImmediateActionController> _immediateActionController;
    struct RetainPtr<NSImmediateActionGestureRecognizer> _immediateActionGestureRecognizer;
    _WKThumbnailView *_thumbnailView;
    struct Vector<WTF::RetainPtr<id<NSCopying, NSObject>>, 0, WTF::CrashOnOverflow, 16> _activeTouchIdentities;
    struct RetainPtr<NSArray> _lastTouches;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
