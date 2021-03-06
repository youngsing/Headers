//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMF/NSObject-Protocol.h>

@class FMAccuracyOverlay, NSColor, NSImage, NSString;

@protocol FMAnnotation <NSObject>
@property(retain, nonatomic) NSImage *smallOverlayIcon;
@property(retain, nonatomic) NSImage *largeOverlayIcon;
@property(retain, nonatomic) NSImage *smallAnnotationIcon;
@property(retain, nonatomic) NSImage *largeAnnotationIcon;
@property(retain, nonatomic) NSColor *tintColor;
@property(nonatomic) BOOL isBorderEnabled;
@property(nonatomic) double distanceFromUser;
@property(nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) double horizontalAccuracy;
@property(retain, nonatomic) FMAccuracyOverlay *overlay;
- (BOOL)isThisDevice;
- (BOOL)hasKnownLocation;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

