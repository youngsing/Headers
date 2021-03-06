//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, PKStackedTextItem, UIFont, UILabel;

@interface PKStackedTextItemView : UIView
{
    UILabel *_title;
    UILabel *_primary;
    UILabel *_secondary;
    UILabel *_tertiary;
    struct CGSize _boundsSize;
    NSMutableSet *_snapshots;
    UIFont *_significantPrimaryFont;
    UIFont *_primaryFont;
    UIFont *_layoutPrimaryFont;
    UIFont *_idealTitleFont;
    UIFont *_idealPrimaryFont;
    UIFont *_idealSecondaryFont;
    UIFont *_idealTertiaryFont;
    _Bool _animated;
    long long _style;
    long long _textAlignment;
    PKStackedTextItem *_content;
    CDStruct_c7197326 _contentConstraints;
}

@property(nonatomic) CDStruct_c7197326 contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(copy, nonatomic) PKStackedTextItem *content; // @synthesize content=_content;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setContent:(id)arg1 animated:(_Bool)arg2;
- (void)setTextAlignment:(long long)arg1 animated:(_Bool)arg2;
- (double)_prepareViewForReuse:(id)arg1;
- (void)_updateAlignmentAnimated:(_Bool)arg1;
- (void)_updateSubviewsAnimated:(_Bool)arg1;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (CDStruct_c7197326)boundingMetricForWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

