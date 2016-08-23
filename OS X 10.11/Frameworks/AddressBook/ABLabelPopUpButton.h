//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSColor, NSDictionary, NSMenuItem, NSPopUpButtonCell, NSTextFieldCell;

__attribute__((visibility("hidden")))
@interface ABLabelPopUpButton : NSPopUpButton
{
    NSDictionary *mLabelAttributes;
    double mFontLineHeight;
    double mFontBaselineOffset;
    NSTextFieldCell *mTextFieldCellForDrawing;
    NSColor *mTextColor;
    NSMenuItem *mSpacerItem;
    NSMenuItem *mCustomItem;
    NSPopUpButtonCell *mPopupButtonImageFactoryCell;
}

+ (double)rightOutset;
@property(retain, nonatomic) NSMenuItem *customItem; // @synthesize customItem=mCustomItem;
@property(retain, nonatomic) NSMenuItem *spacerItem; // @synthesize spacerItem=mSpacerItem;
@property(retain) NSColor *textColor; // @synthesize textColor=mTextColor;
- (void)setMenuItems:(id)arg1;
- (void)includeCustomLabelItem:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)calcTextRectAndDraw:(BOOL)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)ABLabelPopUpButton_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
