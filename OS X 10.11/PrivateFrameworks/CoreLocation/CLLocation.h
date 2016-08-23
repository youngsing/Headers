//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (BOOL)supportsSecureCoding;
- (void)setHorizontalAccuracy:(double)arg1;
@property(readonly, nonatomic) NSString *iso6709Notation;
- (id)propagateLocationToTime:(double)arg1;
- (id)snapToResolution:(double)arg1;
- (double)distanceFromLocation:(id)arg1;
- (double)getDistanceFrom:(id)arg1;
@property(readonly, nonatomic) int type;
@property(readonly) unsigned int integrity;
@property(readonly, nonatomic) double rawCourse;
@property(readonly, nonatomic) double course;
@property(readonly, nonatomic) double speed;
@property(readonly, nonatomic) CDStruct_7a56d1c9 clientLocation;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double verticalAccuracy;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) struct CLLocationCoordinate2D rawCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)shortDescription;
@property(readonly, copy, nonatomic) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientLocation:(CDStruct_7a56d1c9)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)init;

@end
