//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSSecureCoding-Protocol.h>

@class ACAccountStore, NSDate, NSMutableSet, NSSet, NSString, NSURL;

@interface ACCredentialItem : NSObject <NSSecureCoding>
{
    NSString *_accountIdentifier;
    NSDate *_expirationDate;
    NSString *_serviceName;
    BOOL _persistent;
    NSURL *_objectID;
    ACAccountStore *_accountStore;
    NSMutableSet *_dirtyProperties;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property __weak ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)markAllPropertiesDirty;
- (BOOL)isPropertyDirty:(id)arg1;
@property(readonly, getter=isDirty) BOOL dirty;
@property(retain) NSURL *objectID;
@property(getter=isPersistent) BOOL persistent;
- (void)setServiceName:(id)arg1;
@property(readonly) NSString *serviceName;
@property(retain) NSDate *expirationDate;
- (void)setAccountIdentifier:(id)arg1;
@property(readonly) NSString *accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)initWithManagedCredentialItem:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;

@end

