//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLPlacemark.h>

#import <MapKit/MKAnnotation-Protocol.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>
{
}

@property(readonly, nonatomic) NSString *countryCode;
- (id)thoroughfare;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 addressDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

