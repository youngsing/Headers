//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WatchListKitUI/SBIconProgressViewDelegate-Protocol.h>

@class NSString, SBIconProgressView, TVImageProxy, UIImage, UILabel, _TVImageView;

@interface _WLKUIAppInstallViewTV : UIView <SBIconProgressViewDelegate>
{
    _TVImageView *_appIconImageView;
    CDUnknownBlockType _completion;
    SBIconProgressView *_progressView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    TVImageProxy *_appIconImageProxy;
    UIImage *_placeholderAppIcon;
    NSString *_title;
    NSString *_subtitle;
    double _installProgress;
}

+ (id)_progressMaskImage;
@property(nonatomic) double installProgress; // @synthesize installProgress=_installProgress;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *placeholderAppIcon; // @synthesize placeholderAppIcon=_placeholderAppIcon;
@property(retain, nonatomic) TVImageProxy *appIconImageProxy; // @synthesize appIconImageProxy=_appIconImageProxy;
- (void).cxx_destruct;
- (void)finishInstallationWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

