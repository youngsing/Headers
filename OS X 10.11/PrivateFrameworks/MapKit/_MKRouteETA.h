//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MKRouteETA : NSObject
{
    double _distance;
    unsigned long long _transportType;
    double _travelTime;
    double _responseTime;
}

+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3;
@property(readonly, nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double distance; // @synthesize distance=_distance;

@end
