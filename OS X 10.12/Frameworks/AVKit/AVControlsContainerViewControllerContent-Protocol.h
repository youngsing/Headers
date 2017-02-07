//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVControlsContainerViewController, NSImage, NSString, NSView;

@protocol AVControlsContainerViewControllerContent <NSObject>
@property(readonly) BOOL movableControlsContentView;
@property(readonly) CDStruct_83cd8af5 controlsContentViewMargin;
@property(readonly) struct CGSize intrinsicControlsContentViewSize;
@property(readonly) long long layoutStyle;
@property(readonly) NSImage *backgroundBackdropViewMaskImage;
@property(readonly) NSString *controlsStyleIdentifier;
- (NSView *)initialFirstResponder;
- (void)controlsContainerViewControllerDidHideView:(AVControlsContainerViewController *)arg1;
- (void)controlsContainerViewControllerWillHideView:(AVControlsContainerViewController *)arg1;
- (void)controlsContainerViewControllerDidShowView:(AVControlsContainerViewController *)arg1;
- (void)controlsContainerViewControllerWillShowView:(AVControlsContainerViewController *)arg1;
@end
