//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraKit/_UIBackdropViewObserver-Protocol.h>

@class CMKEffectsGridView, NSArray, _UIBackdropView, _UILegibilitySettingsProvider;

@interface CMKEffectsGridLabelsView : UIView <_UIBackdropViewObserver>
{
    _Bool _disableLayoutForLabels;
    CMKEffectsGridView *_gridView;
    long long _orientation;
    NSArray *_filterLabelViews;
    NSArray *_filterIndices;
    _UIBackdropView *__backdropView;
    _UILegibilitySettingsProvider *__legibilitySettingsProvider;
}

@property(retain, nonatomic) _UILegibilitySettingsProvider *_legibilitySettingsProvider; // @synthesize _legibilitySettingsProvider=__legibilitySettingsProvider;
@property(retain, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
@property(retain, nonatomic, setter=_setFilterIndices:) NSArray *filterIndices; // @synthesize filterIndices=_filterIndices;
@property(retain, nonatomic, setter=_setFilterLabelViews:) NSArray *filterLabelViews; // @synthesize filterLabelViews=_filterLabelViews;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isDisabledLayoutForLabels) _Bool disableLayoutForLabels; // @synthesize disableLayoutForLabels=_disableLayoutForLabels;
@property(retain, nonatomic) CMKEffectsGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)backdropViewDidChange:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (struct CGAffineTransform)_transformForOrientation:(long long)arg1;
- (struct CGRect)frameForLabelView:(id)arg1 withinGridFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)_rebuildLabelViews;
- (void)updateFilterLabels;
- (void)_replaceLabelViews:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

