//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class CLLocation, NSError;

@protocol IMLocationManager <NSObject>
@property(readonly, retain, nonatomic) NSError *error;
@property(readonly, retain, nonatomic) CLLocation *location;
@property(readonly, nonatomic) BOOL locationAuthorizationDenied;
- (void)startUpdatingCurrentLocationWithHandler:(void (^)(CLLocation *, NSError *))arg1;
@end

