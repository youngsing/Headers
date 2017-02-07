//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface TPNumberPadKey : UIView
{
    UILabel *_digit;
    UILabel *_letters;
    UILabel *_secondaryLetters;
    NSLayoutConstraint *_digitBaseline;
    NSLayoutConstraint *_letterBaseline;
    NSLayoutConstraint *_secondaryLetterBaseline;
    UIImageView *_plus;
}

+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;
+ (void)initialize;
@property(retain, nonatomic) UIImageView *plus; // @synthesize plus=_plus;
@property(retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline; // @synthesize secondaryLetterBaseline=_secondaryLetterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *letterBaseline; // @synthesize letterBaseline=_letterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *digitBaseline; // @synthesize digitBaseline=_digitBaseline;
@property(retain, nonatomic) UILabel *secondaryLetters; // @synthesize secondaryLetters=_secondaryLetters;
@property(retain, nonatomic) UILabel *letters; // @synthesize letters=_letters;
@property(retain, nonatomic) UILabel *digit; // @synthesize digit=_digit;
- (void).cxx_destruct;
- (void)doLayoutNow;
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;
- (void)setFontStylesForHighlightState:(_Bool)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3 shouldCenterDigit:(_Bool)arg4 fontColor:(_Bool)arg5 circleDiameter:(double)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end
