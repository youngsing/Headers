//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface SATVFooterView : UIView
{
    UIButton *_secondaryActionButton;
    UILabel *_footnoteLabel;
}

@property(retain, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)setFootnoteText:(id)arg1;
- (void)setFooterAttributedString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
