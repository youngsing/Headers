//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKUserLocationView.h>

@class CALayer;

@interface _MKGemUserLocationView : MKUserLocationView
{
    CALayer *_gemLayer;
}

- (void).cxx_destruct;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_updateLayers;
- (struct NSImage *)staleImage;
- (struct NSImage *)normalImage;
- (id)_baseLayer;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_setupLayers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

