//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXImageRequester, PXImageViewSpec, PXUIImageView, UIView, UIVisualEffectView;

@interface PXUIImageTile : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool imageView;
        _Bool imageRequester;
        _Bool image;
        _Bool blurEffectView;
    } _needsUpdateFlags;
    PXUIImageView *_imageView;
    _Bool _applyBlurEffect;
    PXImageRequester *_imageRequester;
    PXImageViewSpec *__spec;
    double __displayScale;
    long long __animationCount;
    UIVisualEffectView *_blurEffectView;
    struct CGSize __contentSize;
    struct CGRect __contentsRect;
}

@property(readonly, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(nonatomic, setter=_setAnimationCount:) long long _animationCount; // @synthesize _animationCount=__animationCount;
@property(nonatomic, setter=_setContentsRect:) struct CGRect _contentsRect; // @synthesize _contentsRect=__contentsRect;
@property(nonatomic, setter=_setDisplayScale:) double _displayScale; // @synthesize _displayScale=__displayScale;
@property(nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(retain, nonatomic, setter=_setSpec:) PXImageViewSpec *_spec; // @synthesize _spec=__spec;
@property(nonatomic) _Bool applyBlurEffect; // @synthesize applyBlurEffect=_applyBlurEffect;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (void)_updateBlurEffectViewfNeeded;
- (void)_invalidateBlurEffectView;
- (void)_updateImageIfNeeded;
- (void)_invalidateImage;
- (void)_updateImageRequesterIfNeeded;
- (void)_invalidateImageRequester;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageView;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)_performChanges:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
