//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPKPaymentOptionsSerialization : NSObject
{
}

+ (id)_billingAddressDictionaryFromEncodedData:(id)arg1;
+ (id)_encodedDataForBillingAddressDictionary:(id)arg1;
+ (id)_contactFromEncodedData:(id)arg1;
+ (id)_encodedDataForContact:(id)arg1;
+ (void)_deleteAllDefaultBillingAddresses:(id)arg1;
+ (void)handleSetTransactionDefaultsRequest:(id)arg1;
+ (id)setTransactionDefaultsRequest;

@end

