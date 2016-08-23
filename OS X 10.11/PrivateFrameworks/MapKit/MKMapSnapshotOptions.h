//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying>
{
    MKMapCamera *_camera;
    CDStruct_02837cd9 _mapRect;
    CDStruct_b7cb895d _region;
    unsigned long long _mapType;
    int _mode;
    BOOL _showsPointsOfInterest;
    BOOL _showsBuildings;
    struct CGSize _size;
    BOOL _usingRect;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest; // @synthesize showsPointsOfInterest=_showsPointsOfInterest;
@property(readonly, nonatomic) BOOL usingRect; // @synthesize usingRect=_usingRect;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(copy, nonatomic) MKMapCamera *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
