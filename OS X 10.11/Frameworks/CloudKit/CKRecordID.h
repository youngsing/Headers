//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface CKRecordID : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>
{
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)ckShortDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordName:(id)arg1;
- (id)init;
- (id)CKXPCSuitableString;

@end

