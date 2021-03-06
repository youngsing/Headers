//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@class CLKProgressProvider, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    struct NSNumber *_progressUpdateToken;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;

@end

