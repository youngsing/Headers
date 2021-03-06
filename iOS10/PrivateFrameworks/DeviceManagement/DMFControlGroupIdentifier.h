//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _groupID;
    NSUUID *_organizationUUID;
}

+ (_Bool)supportsSecureCoding;
@property unsigned short groupID; // @synthesize groupID=_groupID;
@property(copy) NSUUID *organizationUUID; // @synthesize organizationUUID=_organizationUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToGroupIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)stringValue;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
- (id)init;

@end

