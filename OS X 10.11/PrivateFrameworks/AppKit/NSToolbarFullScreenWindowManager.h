//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTitlebarAccessoryViewController, NSTitlebarContainerView, NSTitlebarView, NSToolbar, NSToolbarFullScreenResetableAnimation, NSToolbarFullScreenWindow, NSWindow, _NSFullScreenTileDividerWindow, _NSFullScreenTileOverlayWindow, _NSFullScreenTileResizeCrossfadeOverlayWindow;

__attribute__((visibility("hidden")))
@interface NSToolbarFullScreenWindowManager : NSObject
{
    BOOL _inLayout;
    NSWindow *_originalWindow;
    NSToolbarFullScreenWindow *window;
    NSToolbar *_toolbar;
    NSTitlebarAccessoryViewController *_auxiliaryViewController;
    NSToolbarFullScreenResetableAnimation *windowSlideOutAnimation;
    _NSFullScreenTileDividerWindow *_leftDividerWindow;
    _NSFullScreenTileDividerWindow *_rightDividerWindow;
    long long _tileOverlayShowCount;
    BOOL _tileHadLimitedClipping;
    _NSFullScreenTileOverlayWindow *_tileOverlayWindow;
    void *evtHandler;
    unsigned int autohideDisabledCounter;
    unsigned int forceWindowVisibleCounter;
    double _menuBarReveal;
    double _autohideHeight;
    double _lastSetAutohideHeight;
    unsigned long long _lastMenuBarCompanionSpaceID;
    BOOL hasAutoHideMask;
    BOOL menuBarIsShown;
    BOOL windowIsInFullScreen;
    BOOL settingAuxFrame;
    BOOL resizeContentWindowAfterToolbarAnimation;
    BOOL isForcingToolbarVisibleForSheet;
    BOOL isHandlingHotKeyEvent;
    BOOL forceAuxViewVisible;
    BOOL animatingToCorrectPosition;
    BOOL _toolbarWantsToAttachToMenubar;
    BOOL _performingLiveResize;
    struct CGRect _liveResizeStartTileFrame;
    BOOL _performingTileResizeToFit;
    BOOL _hasInvalidTileFrame;
    BOOL _appInitiatedInvalidTileResizeToFit;
    BOOL _freezeSnapshotOnly;
    BOOL _reactingToTileResizeNotification;
    BOOL setAsAttachedToMenuBar;
    BOOL setAsMergedWithMenuBar;
    BOOL _registeredForNotes;
    NSTitlebarContainerView *_titlebarContainerView;
    NSTitlebarView *_titlebarView;
    BOOL _toolbarWindowIsInheritingAppearanceFromParentWindow;
    double _tileCreationTime;
    BOOL _hasSiblings;
    BOOL _messageTracedFirstUserResize;
    _NSFullScreenTileResizeCrossfadeOverlayWindow *_resizeCrossfadeOverlay;
    double _resizeCrossfadeDuration;
}

+ (id)fullScreenNotificationCenter;
@property NSTitlebarView *titlebarView; // @synthesize titlebarView=_titlebarView;
@property NSTitlebarContainerView *titlebarContainerView; // @synthesize titlebarContainerView=_titlebarContainerView;
@property BOOL toolbarWindowIsInheritingAppearanceFromParentWindow; // @synthesize toolbarWindowIsInheritingAppearanceFromParentWindow=_toolbarWindowIsInheritingAppearanceFromParentWindow;
@property(getter=isHandlingHotKeyEvent) BOOL handlingHotKeyEvent; // @synthesize handlingHotKeyEvent=isHandlingHotKeyEvent;
@property NSWindow *originalWindow; // @synthesize originalWindow=_originalWindow;
- (void)updateWindowVisibility;
- (void)forceUpdateMenuBarAttachmentTags:(BOOL)arg1;
- (void)updateMenuBarAttachmentTags;
- (void)_activeSpaceDidChangeNotification:(id)arg1;
- (void)_applicationDidResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_windowDidResignKeyNotification:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (id)description;
- (void)autohideHeightChanged;
- (void)_enableFullScreenForceVisibleForToolbar:(id)arg1;
- (void)_disableFullScreenForceVisibleForToolbar:(id)arg1;
- (void)_disableFullScreenAutohidingForToolbar:(id)arg1;
- (void)_enableFullScreenAutohidingForToolbar:(id)arg1;
- (void)updateTitlebarViewBlendingMode;
- (BOOL)autohideDisabled;
- (void)removeAsChildOfContentWindow;
- (void)addAsChildOfContentWindow;
- (id)window;
- (void)finalize;
- (void)dealloc;
- (void)dispose;
@property(retain, nonatomic) NSToolbar *toolbar;
- (void)updateWindowAndContentView;
- (void)setAuxiliaryViewController:(id)arg1;
- (id)auxiliaryViewController;
- (void)_addViewControllerToWindow;
- (struct CGPoint)_calcWindowTopLeft;
- (void)_updateMessageTracerCreationStatsIfNeeded;
- (struct CGRect)_tileFrameForFullScreen;
- (void)_cacheTileRect:(struct CGRect)arg1;
- (void)_noteTileFrameChanged;
- (void)tile;
- (BOOL)_drivingLiveResize;
- (void)_removeRightTileDividerWindow;
- (void)_removeLeftTileDividerWindow;
- (void)_removeTileDividerWindows;
- (void)_updateTileDividerWindows;
- (void)_updateWindowFrameForTile:(struct CGRect)arg1 fromFrame:(struct CGRect)arg2;
- (void)_resizeToolbarWindowFrame:(struct CGRect)arg1;
- (void)hideOverlayWindow;
- (void)showOverlayWindowFromFrame:(struct CGRect)arg1;
- (void)_exitFullScreenFromOverlay:(id)arg1;
- (BOOL)performTileResizeToFit:(struct CGSize)arg1;
- (id)cursorForResizeDirection:(long long)arg1;
- (id)currentDividerResizeDirections;
- (BOOL)performDividerDragWithEvent:(id)arg1 forResizeDirection:(long long)arg2;
- (id)_perfTestResizeWindow;
- (void)updateForParentSpaceRelocation;
- (void)prepareResizeCrossfadeOverlayWithDuration:(double)arg1;
- (void)_resetTileDividers;
- (void)_updateTileFrame:(BOOL)arg1;
- (void)_startLiveResize;
- (void)_endLiveResize;
- (void)retileForSpaceTileFrameChange;
- (BOOL)_calcAttachesToMenuBar;
- (id)mainLayoutView;
- (void)registerForWindowNotifications:(BOOL)arg1;
- (void)tileEndedLiveResizeNotification:(id)arg1;
- (void)tileStartedLiveResizeNotification:(id)arg1;
- (void)tileDidResizeNotification:(id)arg1;
- (void)windowDidChangeFullScreenStatus:(id)arg1;
- (void)_doDidEnterFullScreen;
- (void)windowDidChangeSheetNotification:(id)arg1;
- (void)updateWindowCorners;
- (void)finishAnimationIfSynchronous;
- (void)animateWindowToCorrectPositionIfNecessary;
- (void)updateWindowPositionAnimation:(double)arg1 startTop:(double)arg2;
- (double)correctWindowTopTarget;
- (BOOL)_isTiledUnderMenuBar;
- (void)toolbar:(id)arg1 didChangeFrameSizeFromOldSize:(struct CGSize)arg2;
- (void)layout;
- (void)toolbarDidChangeAttachesToMenuBar:(id)arg1;
- (unsigned long long)parentSpaceID;
- (unsigned long long)tileSpaceID;
- (void)resizeContentWindow;
- (double)_toolbarWindowContentScreenHeightForToolbar:(id)arg1;
- (BOOL)contentWindowShouldMakeRoomForToolbar;
- (void)updateWindowLayout;
- (void)updateWindowHeight;
- (void)updateContentViewRevealByMenuBar;
- (void)_updateContentViewWithEffectiveReveal:(double)arg1;
- (BOOL)_shouldDrawBaselineForEffectiveReveal:(double)arg1;
- (struct CGPoint)topCenterForSheet:(id)arg1;
- (void)updateWindowAlpha;
- (double)getMenuBarTransitionDuration;
- (void)updateMenuBarScreenRevealHeight;
- (void)_makeWindowIfNecessary;
- (long long)_currentToolbarSubLevel;
- (long long)_currentChildWindowOrderingPriority;
- (BOOL)_shouldToolbarFloatAboveSiblings;
- (BOOL)_shouldRoundCorners;
- (struct CGSize)toolbarWindowSize;
- (double)visibleWindowHeight;
- (double)effectiveClampedAutohideHeight;
- (double)effectiveAutohideHeight;
- (double)desiredWindowHeight;
- (double)effectiveAuxiliaryViewMinHeight;
- (double)effectiveAuxiliaryViewMaxHeight;
- (unsigned long long)windowStyleMask;
- (id)screen;
- (struct NSToolbarFullScreenContentViewLayout_t)getToolbarLayout;
- (double)windowAnimationDuration;
- (id)init;
- (void)registerForTileNotifications;

@end
