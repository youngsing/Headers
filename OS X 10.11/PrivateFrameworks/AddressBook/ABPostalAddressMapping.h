//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ABPostalAddressMapping : NSObject
{
}

+ (void)cleanseQuery:(id)arg1;
+ (void)trimEmptyFieldsFromQuery:(id)arg1;
+ (id)makeQueryFromAddress_nz:(id)arg1;
+ (id)makeQueryFromAddress_mx:(id)arg1;
+ (id)makeQueryFromAddress_jp:(id)arg1;
+ (id)makeQueryFromAddress:(id)arg1;
+ (id)queryForSanitizedAddress:(id)arg1;
+ (void)sanitizeCountryCodeInAddress:(id)arg1 defaultCountryCode:(id)arg2;
+ (void)sanitizeCountryInAddress:(id)arg1;
+ (void)sanitizePostalCodeInAddress:(id)arg1;
+ (void)sanitizeStateInAddress:(id)arg1;
+ (void)sanitizeCity_jp:(id)arg1;
+ (void)sanitizeCity_cz:(id)arg1;
+ (void)sanitizeCity:(id)arg1;
+ (void)sanitizeCityInAddress:(id)arg1;
+ (void)sanitizeStreet_cz:(id)arg1;
+ (void)sanitizeStreet:(id)arg1;
+ (void)sanitizeStreetInAddress:(id)arg1;
+ (id)defaultCountryCode;
+ (id)URLWithAddress:(id)arg1 isDirections:(BOOL)arg2 defaultCountryCode:(id)arg3;
+ (id)getDirectionsURLWithPostalAddress:(id)arg1;
+ (id)showLocationURLWithPostalAddress:(id)arg1 defaultCountryCode:(id)arg2;
+ (id)showLocationURLWithAddressDictionary:(id)arg1;
+ (id)showLocationURLWithPostalAddress:(id)arg1;

@end

