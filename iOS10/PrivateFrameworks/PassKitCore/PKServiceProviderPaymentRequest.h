//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentRequest.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding>
{
    PKServiceProviderOrder *_serviceProviderOrder;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // @synthesize serviceProviderOrder=_serviceProviderOrder;
- (void).cxx_destruct;
- (id)merchantIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithServiceProviderOrder:(id)arg1;

@end
