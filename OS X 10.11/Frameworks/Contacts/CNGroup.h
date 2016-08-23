//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSMutableCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    CNGroup *_snapshot;
}

+ (BOOL)supportsSecureCoding;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForGroupsWithIdentifiers:(id)arg1;
+ (id)_predicateForNonHiddenGroups;
+ (id)predicateForAllGroups;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) CNGroup *snapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

