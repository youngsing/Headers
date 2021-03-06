//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface AKToggleButton : UIButton
{
    _Bool _showsBackgroundColor;
    _Bool _shouldTintNormalImage;
    UIColor *_selectedColor;
    UIImage *_templateImage;
}

+ (id)colorImage:(id)arg1 withColor:(id)arg2;
@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) _Bool shouldTintNormalImage; // @synthesize shouldTintNormalImage=_shouldTintNormalImage;
@property(nonatomic) _Bool showsBackgroundColor; // @synthesize showsBackgroundColor=_showsBackgroundColor;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)_setDeselectedStateColorImage;
- (void)_setSelectedStateColorImage;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateSelectionColorsAnimated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_touchCommitted:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2;

@end

