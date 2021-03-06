//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, UIImage, UIImageView, UILabel;

@interface WATodayHourlyForecastView : UIView
{
    UILabel *_temperatureLabel;
    UILabel *_timeLabel;
    UIImageView *_conditionsImageView;
    NSArray *_constraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)applyVibrancyToTime;
@property(retain, nonatomic) UIImage *conditionsImage;
@property(copy, nonatomic) NSAttributedString *time;
@property(copy, nonatomic) NSAttributedString *temperature;
- (id)initWithFrame:(struct CGRect)arg1;

@end

