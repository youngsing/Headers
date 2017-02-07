//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/WLEasyToHitCustomView.h>

@class CAFilter, NSArray, NSMutableArray, NSMutableSet, PKPass, PKPassColorProfile, PKPassFaceTemplate, UIImage, UIImageView, UIView;
@protocol PKPassFaceDelegate;

@interface PKPassFaceView : WLEasyToHitCustomView
{
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
    _Bool _showingHeader;
    _Bool _showingBody;
    _Bool _resizablePartialImage;
    UIView *_contentView;
    UIImageView *_backgroundView;
    UIImage *_faceImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    double _dimmer;
    NSMutableArray *_headerBucketViews;
    NSMutableArray *_bodyBucketViews;
    unsigned long long _contentViewCreatedRegions;
    unsigned long long _invariantViewCreatedRegions;
    _Bool _clipsContent;
    _Bool _allowBackgroundPlaceHolders;
    id <PKPassFaceDelegate> _delegate;
    long long _backgroundMode;
    unsigned long long _visibleRegions;
    double _clippedContentHeight;
    NSArray *_buckets;
    long long _style;
    PKPassFaceTemplate *_faceTemplate;
}

+ (id)newBackFaceViewForStyle:(long long)arg1 tall:(_Bool)arg2;
+ (id)newFrontFaceViewForStyle:(long long)arg1;
+ (Class)_faceClassForStyle:(long long)arg1 front:(_Bool)arg2;
@property(readonly, nonatomic) PKPassFaceTemplate *faceTemplate; // @synthesize faceTemplate=_faceTemplate;
@property(retain, nonatomic) NSMutableArray *headerBucketViews; // @synthesize headerBucketViews=_headerBucketViews;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, retain, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property(nonatomic) double clippedContentHeight; // @synthesize clippedContentHeight=_clippedContentHeight;
@property(nonatomic) _Bool allowBackgroundPlaceHolders; // @synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders;
@property(nonatomic) _Bool clipsContent; // @synthesize clipsContent=_clipsContent;
@property(nonatomic) unsigned long long visibleRegions; // @synthesize visibleRegions=_visibleRegions;
@property(nonatomic) long long backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(nonatomic) id <PKPassFaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (id)_relevantBuckets;
- (void)_setShowsBackgroundView:(_Bool)arg1;
- (void)_setContentViewsAlpha:(double)arg1;
- (void)_setShowsBodyViews:(_Bool)arg1;
- (void)_setShowsHeaderViews:(_Bool)arg1;
- (void)_flushContentViewsForRegions:(unsigned long long)arg1;
- (void)_createContentViewsForRegions:(unsigned long long)arg1;
- (void)_createInvariantViewsForRegions:(unsigned long long)arg1;
- (void)prepareForFlip;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)createBodyInvariantViews;
- (void)createHeaderInvariantViews;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) _Bool isFrontFace;
- (id)passFaceTemplate;
- (long long)_validityStateForPass:(id)arg1;
- (void)_presentDiffRecursivelyDiff:(id)arg1 forBucketAtIndex:(unsigned long long)arg2 withBuckets:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets shadowInsets;
- (void)createContentViewsWithFade:(_Bool)arg1;
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;
- (void)_createDimmingFilterIfNecessary;
@property(readonly, nonatomic) _Bool bodyContentCreated;
@property(readonly, nonatomic) PKPassColorProfile *colorProfile;
@property(readonly, nonatomic) PKPass *pass;
- (void)removeContentView:(id)arg1 ofType:(long long)arg2;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (id)_viewSetForContentViewType:(long long)arg1;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) UIView *contentView;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setPass:(id)arg1 colorProfile:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
