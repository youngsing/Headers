//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKDSPContext : NSObject <NSCopying>
{
    NSString *_secureElementID;
    NSData *_cryptogram;
    NSData *_challengeResponse;
    NSString *_cardholderName;
    NSString *_phoneNumber;
    NSString *_primaryAppleAccountFirstName;
    NSString *_primaryAppleAccountLastName;
}

@property(copy, nonatomic) NSString *primaryAppleAccountLastName; // @synthesize primaryAppleAccountLastName=_primaryAppleAccountLastName;
@property(copy, nonatomic) NSString *primaryAppleAccountFirstName; // @synthesize primaryAppleAccountFirstName=_primaryAppleAccountFirstName;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(copy, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property(copy, nonatomic) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
- (void).cxx_destruct;
- (void)setPrimaryAppleAccount:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

