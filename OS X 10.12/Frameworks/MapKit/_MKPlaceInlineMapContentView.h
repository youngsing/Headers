//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKImageView, MKViewWithHairline, NSImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView
{
    MKViewWithHairline *_hairlineView;
    MKImageView *_mapView;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) NSImage *map;
- (void)infoCardThemeChanged:(id)arg1;
@property(nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end
