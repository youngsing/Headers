//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/NSObject-Protocol.h>

@class CLLocation;

@protocol CLLocationManagerRoutineServerInterface <NSObject>
- (void)stopUpdatingPredictedApplications;
- (void)startUpdatingPredictedApplications;
- (void)fetchPredictedApplicationsAtLocation:(CLLocation *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end
