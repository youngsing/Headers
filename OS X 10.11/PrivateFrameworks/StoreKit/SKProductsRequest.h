//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

- (id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)issueRequestForIdentifier:(id)arg1;
- (BOOL)handleFinishResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)dealloc;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property id <SKProductsRequestDelegate> delegate; // @dynamic delegate;

@end

