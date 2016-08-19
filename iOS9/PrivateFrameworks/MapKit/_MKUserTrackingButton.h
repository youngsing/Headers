//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <MapKit/MKUserTrackingButtonTarget-Protocol.h>

@class MKMapView, NSMutableDictionary, NSString, _MKUserTrackingButtonController;
@protocol MKUserTrackingView;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget>
{
    _MKUserTrackingButtonController *_controller;
    NSMutableDictionary *_customImages;
    NSMutableDictionary *_customLandscapeImagePhones;
    _Bool _selectsWhenTracking;
    _Bool _explicitlyEnabled;
    _Bool _internallyEnabled;
    _Bool _inMiniBar;
}

+ (Class)_activityIndicatorClass;
+ (id)buttonWithMapView:(id)arg1;
+ (id)buttonWithUserTrackingView:(id)arg1;
@property(readonly, nonatomic) _Bool inMiniBar; // @synthesize inMiniBar=_inMiniBar;
@property(nonatomic, getter=_selectsWhenTracking, setter=_setSelectsWhenTracking:) _Bool selectsWhenTracking; // @synthesize selectsWhenTracking=_selectsWhenTracking;
@property(readonly, nonatomic) _MKUserTrackingButtonController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_setInternallyEnabled:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (struct CGRect)_selectedIndicatorBounds;
- (void)updateForMiniBarState:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_repositionViews;
- (void)_setState:(long long)arg1;
- (long long)_state;
- (void)_updateForState:(long long)arg1;
- (_Bool)_isHighlightedForState:(long long)arg1;
- (long long)_activityIndicatorStyle;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3;
- (id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_setSkip:(_Bool)arg1 forUserTrackingMode:(long long)arg2;
@property(retain, nonatomic) id <MKUserTrackingView> userTrackingView;
@property(retain, nonatomic) MKMapView *mapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
