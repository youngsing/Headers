//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUIconCell.h>

@class NSArray, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface HUTitleDescriptionCell : HUIconCell
{
    _Bool _hideTitle;
    _Bool _hideDescription;
    _Bool _hideDescriptionIcon;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSString *_titleText;
    UIFont *_titleFont;
    NSString *_descriptionText;
    UIFont *_descriptionFont;
    UIImage *_descriptionIcon;
    double _textAlpha;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
    UIImageView *_descriptionIconView;
}

@property(readonly, nonatomic) UIImageView *descriptionIconView; // @synthesize descriptionIconView=_descriptionIconView;
@property(retain, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property(retain, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(nonatomic) _Bool hideDescriptionIcon; // @synthesize hideDescriptionIcon=_hideDescriptionIcon;
@property(retain, nonatomic) UIImage *descriptionIcon; // @synthesize descriptionIcon=_descriptionIcon;
@property(nonatomic) _Bool hideDescription; // @synthesize hideDescription=_hideDescription;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)_addDescriptionIconView;
- (void)_addDescriptionLabel;
- (void)_addTitleLabel;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)updateHorizontalLabelConstraints;
- (void)updateVerticalLabelConstraints;
- (void)updateConstraints;
- (void)setDisabled:(_Bool)arg1;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

