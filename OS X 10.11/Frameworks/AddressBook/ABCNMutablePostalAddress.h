//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABCNPostalAddress.h>

@class NSString;

@interface ABCNMutablePostalAddress : ABCNPostalAddress
{
}

@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(copy, nonatomic) NSString *postalCode; // @dynamic postalCode;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *subAdministrativeArea; // @dynamic subAdministrativeArea;
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *subLocality; // @dynamic subLocality;
@property(copy, nonatomic) NSString *street; // @dynamic street;
- (id)freeze;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

