//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXCollectionReusableView.h>

@class UXLabel;

@interface PXPeopleProgressFooterView : UXCollectionReusableView
{
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
}

+ (id)kind;
@property(retain, nonatomic) UXLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UXLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
