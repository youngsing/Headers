//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, UIView;

@interface PXSelectionBadgeUIViewTile : UIImageView <PXReusableObject, PXUIViewBasicTile>
{
    struct {
        _Bool imageView;
    } _needsUpdateFlags;
    _Bool __selected;
}

+ (struct CGSize)preferredSize;
@property(nonatomic, setter=_setSelected:) _Bool _selected; // @synthesize _selected=__selected;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageView;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

