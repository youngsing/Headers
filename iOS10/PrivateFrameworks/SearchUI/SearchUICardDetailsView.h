//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextView;

@interface SearchUICardDetailsView : UIView
{
    UILabel *_titleLabel;
    UITextView *_detailsTextView;
}

@property(retain) UITextView *detailsTextView; // @synthesize detailsTextView=_detailsTextView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)currentTextViewHeight;
- (double)idealTextViewHeightForCurrentWidth;
@property unsigned long long maximumNumberOfLines;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithTitle:(id)arg1 details:(id)arg2 controller:(id)arg3;

@end

