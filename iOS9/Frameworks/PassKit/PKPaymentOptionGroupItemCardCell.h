//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/PKPaymentOptionGroupItemCell.h>

@class PKPassSnapshotter, UIColor, UIImageView, UILabel;

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell
{
    _Bool _isRightToLeft;
    UILabel *_displayLabel;
    UILabel *_censoredPANLabel;
    UIImageView *_cardArtView;
    _Bool _showBillingAddress;
    _Bool _dimCardArt;
    PKPassSnapshotter *_passSnapshotter;
    UIColor *_mainLabelColor;
    UIColor *_subTextLabelColor;
    UIColor *_disabledMainLabelColor;
    UIColor *_disabledSubTextLabelColor;
}

@property(nonatomic) _Bool dimCardArt; // @synthesize dimCardArt=_dimCardArt;
@property(nonatomic) _Bool showBillingAddress; // @synthesize showBillingAddress=_showBillingAddress;
@property(retain, nonatomic) UIColor *disabledSubTextLabelColor; // @synthesize disabledSubTextLabelColor=_disabledSubTextLabelColor;
@property(retain, nonatomic) UIColor *disabledMainLabelColor; // @synthesize disabledMainLabelColor=_disabledMainLabelColor;
@property(retain, nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;
@property(retain, nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
@property(retain, nonatomic) PKPassSnapshotter *passSnapshotter; // @synthesize passSnapshotter=_passSnapshotter;
- (void)layoutSubviews;
- (struct CGRect)_censoredPANLabelFrame;
- (struct CGRect)_displayLabelFrame;
- (struct CGRect)_cardArtFrame;
- (void)_updateCellContent;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier *)arg1;

@end

