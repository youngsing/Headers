//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXBasicTileAnimationOptions, PXTilingController, PXWidgetCompositionElement;

@protocol PXWidgetCompositionElementObserver <NSObject>
- (void)elementHasLoadedContentDataDidChange:(PXWidgetCompositionElement *)arg1;
- (void)elementNeedsLayout:(PXWidgetCompositionElement *)arg1 preferredAnimationOptions:(PXBasicTileAnimationOptions *)arg2 originatingTilingController:(PXTilingController *)arg3;
@end
