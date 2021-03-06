//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SFSearchResult, SearchUIAppIconButton, SearchUIForceTouchGestureRecognizer, SearchUITableViewCell, UILabel;

@interface SearchUIIconView : UIView
{
    UIView *_iconButtonContainer;
    SearchUIAppIconButton *_iconButton;
    UILabel *_label;
    SFSearchResult *_result;
    NSLayoutConstraint *_bottomConstraint;
    SearchUIForceTouchGestureRecognizer *_forceTouchRecognizer;
    SearchUITableViewCell *_cell;
}

+ (id)labelFont;
@property(retain) SearchUITableViewCell *cell; // @synthesize cell=_cell;
@property(retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer; // @synthesize forceTouchRecognizer=_forceTouchRecognizer;
@property(retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) SearchUIAppIconButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain) UIView *iconButtonContainer; // @synthesize iconButtonContainer=_iconButtonContainer;
- (void).cxx_destruct;
- (void)updateWithResult:(id)arg1;
- (id)viewForLastBaselineLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (void)iconButtonPressed;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;

@end

