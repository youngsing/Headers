//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse
{
    NSArray *_availableProducts;
}

@property(readonly, copy, nonatomic) NSArray *availableProducts; // @synthesize availableProducts=_availableProducts;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
