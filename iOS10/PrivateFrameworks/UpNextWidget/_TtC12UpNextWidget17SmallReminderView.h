//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, UIColor;

@interface _TtC12UpNextWidget17SmallReminderView : UIView
{
    // Error parsing type: , name: title
    // Error parsing type: , name: dueDate
    // Error parsing type: , name: listColor
    // Error parsing type: , name: label
    // Error parsing type: , name: circleImageView
    // Error parsing type: , name: circleDiameter
}

- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) UIColor *listColor; // @synthesize listColor;
@property(nonatomic, copy) NSDate *dueDate; // @synthesize dueDate;
@property(nonatomic, copy) NSString *title; // @synthesize title;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;

@end

