//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PARFlightAirport : NSObject
{
    NSString *_code;
    NSString *_city;
    long long _utcOffset;
    double _latitude;
    double _longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) long long utcOffset; // @synthesize utcOffset=_utcOffset;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;

@end
