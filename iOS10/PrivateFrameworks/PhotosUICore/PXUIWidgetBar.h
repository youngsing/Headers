//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXWidgetBar.h>

@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar
{
    PXUIWidgetBarViewTile *__viewTile;
}

- (void).cxx_destruct;
- (void)updateView;
@property(readonly, nonatomic) PXUIWidgetBarViewTile *_viewTile; // @synthesize _viewTile=__viewTile;
- (void)checkInTile:(id)arg1;
- (id)checkOutTileWithKind:(long long)arg1;
- (id)createTileAnimator;

@end

