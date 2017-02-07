//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INRideCompletionStatus, INRideDriver, INRideOption, INRideVehicle, NSArray, NSDate, NSString, NSUserActivity;

@protocol INRideStatusExport <NSObject, JSExport>
@property(copy, nonatomic) NSArray *additionalActionActivities;
@property(retain, nonatomic) NSUserActivity *userActivityForCancelingInApplication;
@property(copy, nonatomic) INRideOption *rideOption;
@property(copy, nonatomic) CLPlacemark *dropOffLocation;
@property(copy, nonatomic) NSArray *waypoints;
@property(copy, nonatomic) CLPlacemark *pickupLocation;
@property(copy, nonatomic) NSDate *estimatedPickupEndDate;
@property(copy, nonatomic) NSDate *estimatedDropOffDate;
@property(copy, nonatomic) NSDate *estimatedPickupDate;
@property(copy, nonatomic) INRideDriver *driver;
@property(copy, nonatomic) INRideVehicle *vehicle;
@property(copy, nonatomic) INRideCompletionStatus *completionStatus;
@property(nonatomic) long long phase;
@property(copy, nonatomic) NSString *rideIdentifier;
- (id)init;
@end
