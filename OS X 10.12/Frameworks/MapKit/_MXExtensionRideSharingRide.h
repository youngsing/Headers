//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class NSDate, NSImage, NSString, NSURL;

@interface _MXExtensionRideSharingRide : NSObject <NSSecureCoding>
{
    BOOL _requiresPartySize;
    NSImage *_image;
    NSString *_name;
    NSString *_vehicleType;
    NSDate *_estimatedPickupDate;
    NSString *_identifier;
    NSString *_price;
    NSString *_specialPricing;
    NSURL *_inAppBookingURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *inAppBookingURL; // @synthesize inAppBookingURL=_inAppBookingURL;
@property(retain, nonatomic) NSString *specialPricing; // @synthesize specialPricing=_specialPricing;
@property(nonatomic) BOOL requiresPartySize; // @synthesize requiresPartySize=_requiresPartySize;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *estimatedPickupDate; // @synthesize estimatedPickupDate=_estimatedPickupDate;
@property(retain, nonatomic) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
