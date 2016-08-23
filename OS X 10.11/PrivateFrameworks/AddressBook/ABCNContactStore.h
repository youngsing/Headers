//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABCNContactStore : NSObject
{
    id _reserved1;
}

+ (id)defaultCountryCode;
+ (id)legacyMemoryBackedContactStore;
+ (id)memoryBackedContactStore;
- (id)makeDataMapper;
@property(readonly) CDUnknownBlockType dataMapperProvider;
- (CDUnknownBlockType)contactComparatorByAccount;
- (BOOL)setImageData:(id)arg1 onContact:(id)arg2 error:(id *)arg3;
- (BOOL)deleteContact:(id)arg1 error:(id *)arg2;
- (BOOL)saveContacts:(id)arg1 error:(id *)arg2;
- (BOOL)saveContact:(id)arg1 error:(id *)arg2;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)beginFetchRequest:(id)arg1 withResultHandler:(id)arg2;
- (id)beginFetchRequest:(id)arg1 withEnumerationBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)beginFetchRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)executeFetchRequest2:(id)arg1 error:(id *)arg2;
- (id)deprecated_executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)makeObservableWithFetchRequest:(id)arg1;
- (id)fetchUnifiedContactWithLinkIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)isContactReadOnly:(id)arg1;
- (id)accountsForContactsWithIdentifiers:(id)arg1;
- (id)accountForContactWithIdentifier:(id)arg1;
- (id)accountForContact:(id)arg1;
- (id)photoForContacts:(id)arg1;
- (id)photoForContact:(id)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchIdentifiersForMeCards:(id *)arg1;
- (id)fetchIdentifierForMeCard:(id *)arg1;
- (unsigned long long)fetchCountOfContactsWithLinkIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchContactsWithLinkIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchContactsWithIdentifiers:(id)arg1 unify:(BOOL)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)contactWithIdentifier:(id)arg1 unify:(BOOL)arg2 error:(id *)arg3;
- (id)contactWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)contactsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDataMapperProvider:(CDUnknownBlockType)arg1;
- (id)initWithDataMapper:(id)arg1;
- (id)initWithLegacySharedAddressBook;
- (id)initWithAddressBook:(id)arg1;
- (id)init;
- (id)distributionIdentifierForEmailAddressesOfContact:(id)arg1 inGroup:(id)arg2 error:(id *)arg3;
- (id)beginFetchWithRequest:(id)arg1;
- (BOOL)addMember:(id)arg1 toGroup:(id)arg2 error:(id *)arg3;
- (BOOL)saveGroup:(id)arg1 error:(id *)arg2;
- (id)saveImmutableContact:(id)arg1 error:(id *)arg2;

@end

