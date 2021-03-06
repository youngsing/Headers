//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, PKServiceProviderPurchaseData;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _state;
    NSString *_deviceIdentifier;
    NSString *_serviceProviderIdentifier;
    PKServiceProviderPurchaseData *_serviceProviderData;
    NSString *_signature;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)purchaseWithDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToServiceProviderPurchase:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

