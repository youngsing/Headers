//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/FMAnnotation-Protocol.h>
#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class CLLocation, FMAccuracyOverlay, FMFHandle, NSColor, NSDate, NSImage, NSString;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, FMAnnotation>
{
    BOOL _locatingInProgress;
    BOOL _isBorderEnabled;
    CLLocation *_location;
    FMAccuracyOverlay *_overlay;
    double _horizontalAccuracy;
    NSImage *_smallAnnotationIcon;
    NSImage *_smallOverlayIcon;
    NSImage *_largeOverlayIcon;
    NSImage *_largeAnnotationIcon;
    double _distanceFromUser;
    NSColor *_tintColor;
    FMFHandle *_handle;
    NSString *_longAddress;
    NSDate *_timestamp;
    NSString *_label;
    NSString *_shortAddressString;
    double _maxLocatingInterval;
    double _TTL;
    double _distance;
    NSString *_distanceDescription;
    NSString *_age;
    struct CLLocationCoordinate2D _coordinate;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *age; // @synthesize age=_age;
@property(retain) NSString *distanceDescription; // @synthesize distanceDescription=_distanceDescription;
@property double distance; // @synthesize distance=_distance;
@property double TTL; // @synthesize TTL=_TTL;
@property double maxLocatingInterval; // @synthesize maxLocatingInterval=_maxLocatingInterval;
@property(copy) NSString *shortAddressString; // @synthesize shortAddressString=_shortAddressString;
@property(retain) NSString *label; // @synthesize label=_label;
@property(copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSString *longAddress; // @synthesize longAddress=_longAddress;
@property(retain) FMFHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) BOOL isBorderEnabled; // @synthesize isBorderEnabled=_isBorderEnabled;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double distanceFromUser; // @synthesize distanceFromUser=_distanceFromUser;
@property(retain, nonatomic) NSImage *largeAnnotationIcon; // @synthesize largeAnnotationIcon=_largeAnnotationIcon;
@property(retain, nonatomic) NSImage *largeOverlayIcon; // @synthesize largeOverlayIcon=_largeOverlayIcon;
@property(retain, nonatomic) NSImage *smallOverlayIcon; // @synthesize smallOverlayIcon=_smallOverlayIcon;
@property(retain, nonatomic) NSImage *smallAnnotationIcon; // @synthesize smallAnnotationIcon=_smallAnnotationIcon;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(retain, nonatomic) FMAccuracyOverlay *overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)updateHandle:(id)arg1;
@property(retain) CLLocation *location; // @synthesize location=_location;
- (void)updateLocation:(id)arg1;
- (void)updateLocationForCache:(id)arg1;
- (void)_updateLocation:(id)arg1;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (long long)distanceThenNameCompare:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)resetLocateInProgress:(id)arg1;
@property(getter=isLocatingInProgress) BOOL locatingInProgress; // @synthesize locatingInProgress=_locatingInProgress;
- (id)locationShortAddressWithAgeIncludeLocating;
- (id)locationShortAddressWithAge;
- (id)locationAge;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)agingItemTimestamp;
@property(readonly, copy) NSString *shortAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isThisDevice;
- (BOOL)hasKnownLocation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

