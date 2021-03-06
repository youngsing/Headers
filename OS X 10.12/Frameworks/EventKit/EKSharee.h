//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>
#import <EventKit/EKProtocolMutableSharee-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSPredicate, NSString, NSURL;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol, EKProtocolMutableSharee>
{
    NSManagedObjectID *managedObjectID;
}

+ (id)accessLevelStringFromEnum:(unsigned long long)arg1;
+ (unsigned long long)accessLevelEnumFromString:(id)arg1;
+ (id)statusStringFromEnum:(unsigned long long)arg1;
+ (unsigned long long)statusEnumFromString:(id)arg1;
+ (id)knownSingleValueKeys;
+ (id)knownIdentityKeys;
+ (Class)frozenClass;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (unsigned long long)hashForObject:(id)arg1;
+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
- (void)setManagedObjectID:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
- (void).cxx_destruct;
- (id)ABPersonInAddressBook:(id)arg1;
@property(readonly, nonatomic) NSPredicate *contactPredicate;
@property(nonatomic) unsigned long long shareeAccessLevel;
@property(nonatomic) unsigned long long shareeStatus;
@property(copy, nonatomic) NSString *emailAddress;
@property(readonly) BOOL isCurrentUserForScheduling;
@property(readonly) BOOL isCurrentUserForSharing;
- (void)setURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)setAccessLevel:(id)arg1;
- (id)accessLevel;
- (void)setStatus:(id)arg1;
- (id)status;
@property(copy, nonatomic) NSString *name;
- (id)backingSharee;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

