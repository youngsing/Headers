//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>
{
    NSString *_zoneName;
    NSString *_ownerName;
}

+ (BOOL)supportsSecureCoding;
+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2;
@property(readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)ckShortDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)init;
- (id)CKXPCSuitableString;

@end

