//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABLinkingInfoDataSource-Protocol.h>

@class ABAddressBook, NSString;

__attribute__((visibility("hidden")))
@interface ABAddressBookLinkingInfoDataSource : NSObject <ABLinkingInfoDataSource>
{
    ABAddressBook *_addressBook;
}

- (void)_performWithUnscopedAdapter:(CDUnknownBlockType)arg1;
- (id)nameCollisionMapForRecords:(id)arg1;
- (id)nameCollisionMapForExistingRecords;
- (id)recordsForIdentifiers:(id)arg1;
- (BOOL)property:(id)arg1 hasChangedOnRecord:(id)arg2;
- (void)setRecordPreferredForPhoto:(id)arg1 linkedRecords:(id)arg2;
- (void)setRecordPreferredForPhoto:(id)arg1;
- (void)setRecordPreferredForName:(id)arg1 linkedRecords:(id)arg2;
- (void)setRecordPreferredForName:(id)arg1;
- (void)unlinkRecord:(id)arg1;
- (BOOL)recordIsOnlyRecordInLink:(id)arg1;
- (BOOL)recordSupportsLinking:(id)arg1;
- (void)linkInsertedRecords:(id)arg1;
- (void)setLinkId:(id)arg1 forRecord:(id)arg2;
- (void)linkRecord:(id)arg1 toRecord:(id)arg2;
- (id)nameForRecord:(id)arg1;
- (BOOL)personIsMe:(id)arg1;
- (id)_nameBasedIndexingKeyForPerson:(id)arg1;
- (id)_nameBasedIndexingKeyForCompany:(id)arg1;
- (id)nameBasedIndexingKeyForRecord:(id)arg1;
- (CDUnknownBlockType)recordToAccountURITransform;
- (CDUnknownBlockType)recordToUniqueIdTransform;
- (id)uniqueIdForRecord:(id)arg1;
- (id)linkIdentifierForRecord:(id)arg1;
- (id)recordsWithLinkIdentifier:(id)arg1;
- (id)recordsForUniqueIds:(id)arg1;
- (id)linkIdentifiersOfDeletedRecords;
- (id)updatedRecords;
- (id)insertedRecords;
- (id)allRecords;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
