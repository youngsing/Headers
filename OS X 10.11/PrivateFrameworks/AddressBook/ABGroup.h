//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABRecord.h>

@interface ABGroup : ABRecord
{
    id _groupReserved1;
    id _groupReserved2;
}

+ (id)searchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5;
+ (id)nts_RecordFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 addressBook:(id)arg3 generateIds:(BOOL)arg4;
+ (id)peopleInGroups:(id)arg1;
+ (void)addCustomPropertiesAndTypesFromAddressBook:(id)arg1 toAddressBook:(id)arg2;
+ (long long)removeProperties:(id)arg1;
+ (long long)addPropertiesAndTypes:(id)arg1;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3;
+ (long long)addPropertiesAndTypes:(id)arg1 withAddressBook:(id)arg2 acquireLock:(BOOL)arg3 save:(BOOL)arg4;
+ (id)builtInProperties;
+ (CDUnknownBlockType)userInterfaceComparator;
+ (id)addGroupFromDictionary:(id)arg1;
- (BOOL)supportsDistributionList;
- (int)containmentPersonality;
- (id)enclosedSubscriptionGroups;
- (long long)sortOrder;
- (id)uniqueIdForDrag;
- (BOOL)canDeletePeople;
- (BOOL)canRemoveMembers;
- (BOOL)canAddMembers;
- (BOOL)isRenamable;
- (BOOL)isDeletable;
- (BOOL)nts_canRemove;
- (BOOL)isAddressBookReadOnlyIgnoresInert:(BOOL)arg1;
- (BOOL)isReadOnlyIgnoresInert:(BOOL)arg1;
- (BOOL)isReadOnly;
- (id)displayName;
- (id)name;
- (id)_realCompositeName;
- (BOOL)nts_IsParentGroupOfRecord:(id)arg1;
- (BOOL)_isParentGroupOfRecord:(id)arg1;
- (id)_vCardRepresentation;
- (id)_21vCardRepresentationAsData;
- (id)_vCardRepresentationAsString;
- (id)_initWithVCardRepresentation:(id)arg1;
- (void)nts_CascadeRemove;
- (BOOL)nts_RecursiveContainsGroup:(id)arg1;
- (BOOL)recursiveContainsGroup:(id)arg1;
- (void)nts_AddMembersAndSubgroupsFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2;
- (void)nts_AddMembersAndSubgroupsFromDictionaryRepresentation:(id)arg1 withRecordMapping:(id)arg2 recordsByUniqueId:(id)arg3;
- (id)dictionaryRepresentation;
- (id)stringForXcode;
- (id)nts_DescriptionDictionary;
- (id)distributionIdentifierForProperty:(id)arg1 person:(id)arg2;
- (BOOL)setDistributionIdentifier:(id)arg1 forProperty:(id)arg2 person:(id)arg3;
- (BOOL)nts_SetDistributionIdentifier:(id)arg1 forProperty:(id)arg2 person:(id)arg3 allowFetching:(BOOL)arg4;
- (void)addSubrecordsToSet:(id)arg1;
- (id)allMembers;
- (BOOL)removeSubgroups:(id)arg1 error:(id *)arg2;
- (BOOL)removeSubgroup:(id)arg1;
- (BOOL)nts_RemoveSubgroup:(id)arg1;
- (BOOL)nts_AddSubgroup:(id)arg1;
- (BOOL)addSubgroups:(id)arg1 error:(id *)arg2;
- (BOOL)addSubgroup:(id)arg1;
- (id)nts_Subgroups;
- (id)subgroups;
- (id)nts_Members;
- (id)affectedStoresInMembershipPredicate;
- (id)contactMembershipPredicate;
- (id)members;
- (id)parentGroups;
- (BOOL)setMembers:(id)arg1 error:(id *)arg2;
- (BOOL)nts_SetMembers:(id)arg1;
- (void)nts_removeMembersFromAllParentGroups:(id)arg1;
- (void)nts_removeMemberFromAllParentGroups:(id)arg1;
- (BOOL)removeMembers:(id)arg1 error:(id *)arg2;
- (BOOL)removeMember:(id)arg1;
- (BOOL)denyRemoveMembers;
- (BOOL)nts_RemoveMember:(id)arg1;
- (BOOL)nts_AddMember:(id)arg1;
- (BOOL)denyAddMembers;
- (BOOL)addMembers:(id)arg1 error:(id *)arg2;
- (BOOL)addMember:(id)arg1;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (id)abGroupDatabaseImpl;
- (BOOL)shouldClearSearchWhenSwitchingTo:(id)arg1;
- (id)icon;
- (BOOL)isPublishable;
- (void)restoreFromUndoState:(id)arg1;
- (id)undoState;
- (BOOL)addToParentWithUniqueId:(id)arg1;
- (BOOL)addSubrecordWithUniqueId:(id)arg1;
- (BOOL)removeSubrecord:(id)arg1;
- (BOOL)addSubrecord:(id)arg1;
- (void)setAllProperties:(id)arg1;
- (id)allProperties;
- (long long)distributionIndexForProperty:(id)arg1 person:(id)arg2;
- (id)distributionValueForProperty:(id)arg1 person:(id)arg2;
- (id)nts_MembersRecursive;
- (id)allAssociatedMembersAndSubgroups;
- (id)allAssociatedMembersAndSubgroups:(BOOL)arg1;
- (id)membersAndSubgroups;
- (BOOL)isSpecialGroup;
- (id)firstLastSorting:(BOOL)arg1 part1:(BOOL)arg2;
- (id)createFirstLastSorting:(BOOL)arg1 part1:(BOOL)arg2;
- (BOOL)__containsRecord:(id)arg1;
- (BOOL)_matchAndMerge_MergeGroup:(id)arg1;

@end
