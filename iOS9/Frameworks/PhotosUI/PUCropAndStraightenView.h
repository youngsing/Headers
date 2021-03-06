//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class NSString, PHLivePhoto, PHLivePhotoView, PLImageGeometry, UIImage, UIImageView, UIScrollView;
@protocol PUCropAndStraightenViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropAndStraightenView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _tracking;
    _Bool __updatingForFit;
    _Bool __updatingForCrop;
    _Bool __updatingForStraighten;
    _Bool __scrollViewTracking;
    UIImage *_image;
    PHLivePhoto *_livePhoto;
    id <PUCropAndStraightenViewDelegate> _delegate;
    double _straightenAngle;
    long long _orientation;
    UIScrollView *__scrollView;
    UIView *__scrollViewReference;
    UIView *__contentView;
    UIImageView *__imageView;
    PHLivePhotoView *__livePhotoView;
    double __preferredZoomScale;
    PLImageGeometry *__imageGeometry;
    struct CGRect _cropRect;
    struct CGRect _canvasFrame;
    struct CGRect __fittingRegion;
}

@property(retain, nonatomic, setter=_setImageGeometry:) PLImageGeometry *_imageGeometry; // @synthesize _imageGeometry=__imageGeometry;
@property(nonatomic, getter=_isScrollViewTracking, setter=_setScrollViewTracking:) _Bool _scrollViewTracking; // @synthesize _scrollViewTracking=__scrollViewTracking;
@property(nonatomic, getter=_isUpdatingForStraighten, setter=_setUpdatingForStraighten:) _Bool _updatingForStraighten; // @synthesize _updatingForStraighten=__updatingForStraighten;
@property(nonatomic, getter=_isUpdatingForCrop, setter=_setUpdatingForCrop:) _Bool _updatingForCrop; // @synthesize _updatingForCrop=__updatingForCrop;
@property(nonatomic, getter=_isUpdatingForFit, setter=_setUpdatingForFit:) _Bool _updatingForFit; // @synthesize _updatingForFit=__updatingForFit;
@property(nonatomic, setter=_setFittingRegion:) struct CGRect _fittingRegion; // @synthesize _fittingRegion=__fittingRegion;
@property(nonatomic, setter=_setPreferredZoomScale:) double _preferredZoomScale; // @synthesize _preferredZoomScale=__preferredZoomScale;
@property(retain, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(retain, nonatomic, setter=_setScrollViewReference:) UIView *_scrollViewReference; // @synthesize _scrollViewReference=__scrollViewReference;
@property(retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) struct CGRect canvasFrame; // @synthesize canvasFrame=_canvasFrame;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property(nonatomic) __weak id <PUCropAndStraightenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleTouchingRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)_zoomScaleToFillStraightenedCropRect;
- (double)_zoomScaleToFillCropRect;
- (double)_zoomScaleToFitCanvas;
- (double)_zoomScaleForImageToFit:(_Bool)arg1 viewBounds:(struct CGRect)arg2;
- (double)_zoomScaleForImageRegion:(struct CGRect)arg1 toFit:(_Bool)arg2 viewBounds:(struct CGRect)arg3;
- (void)_updateScrollOffset;
- (void)_updateScrollInsets;
- (void)_updateZoomScale;
- (void)_updateScrollView;
- (struct CGSize)_sizeRotatedIfNeeded:(struct CGSize)arg1;
- (struct CGSize)_boundingSizeOfStraightenedRectWithSize:(struct CGSize)arg1;
- (struct CGRect)_imageBounds;
- (struct CGRect)_croppingRect;
- (void)fitImageRegion:(struct CGRect)arg1 inCropRectAnimated:(_Bool)arg2;
@property(readonly, nonatomic, getter=_isRotationSideways) _Bool _rotationSideways;
@property(readonly, nonatomic) struct CGAffineTransform _rotationTransform;
- (void)_setTracking:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
- (struct CGRect)imageCropRectForViewRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect imageCropRect;
- (struct CGRect)_fullCropRect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

