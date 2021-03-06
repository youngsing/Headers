//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface FCOngoingPurchaseEntry : NSObject
{
    _Bool _webAccessOptIn;
    NSString *_tagID;
    NSString *_purchaseID;
    NSString *_productIdentifier;
    NSNumber *_appAdamID;
    NSNumber *_storeExternalVersion;
    NSString *_vendorIdentifier;
    NSDate *_purchaseInitiatedTime;
    NSNumber *_price;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSDate *purchaseInitiatedTime; // @synthesize purchaseInitiatedTime=_purchaseInitiatedTime;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(copy, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(nonatomic) _Bool webAccessOptIn; // @synthesize webAccessOptIn=_webAccessOptIn;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productIdentifier:(id)arg4 webAccessOptIn:(_Bool)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10;

@end

