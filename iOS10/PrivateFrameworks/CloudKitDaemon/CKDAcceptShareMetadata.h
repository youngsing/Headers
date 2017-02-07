//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDAcceptShareMetadata : NSObject
{
    _Bool _acceptedInProcess;
    NSURL *_shareURL;
    CKRecordID *_shareRecordID;
    NSString *_etag;
    NSData *_publicPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicKey;
    unsigned long long _publicKeyVersion;
    NSData *_oonProtectionInfo;
    NSString *_oonParticipantID;
}

@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(retain, nonatomic) NSString *oonParticipantID; // @synthesize oonParticipantID=_oonParticipantID;
@property(retain, nonatomic) NSData *oonProtectionInfo; // @synthesize oonProtectionInfo=_oonProtectionInfo;
@property(nonatomic) unsigned long long publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property(retain, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (void).cxx_destruct;

@end
