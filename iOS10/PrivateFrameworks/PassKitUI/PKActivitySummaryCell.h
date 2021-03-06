//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKActivityEvent, UIImageView, UILabel;

@interface PKActivitySummaryCell : PKTableViewCell
{
    UILabel *_titleView;
    UILabel *_subtitleView;
    UILabel *_timeView;
    UILabel *_amountView;
    UIImageView *_unreadIndicatorView;
    PKActivityEvent *_event;
}

+ (id)unreadIndicatorImage;
+ (double)separatorLeadingInset;
+ (double)height;
@property(retain, nonatomic) PKActivityEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)_updateViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

