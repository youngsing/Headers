//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, CNContact, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying>
{
    CKRecordID *_userRecordID;
    CNContact *_displayContact;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) CNContact *displayContact; // @synthesize displayContact=_displayContact;
@property(readonly, copy, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
- (id)description;
- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserRecordID:(id)arg1 displayContact:(id)arg2;

@end
