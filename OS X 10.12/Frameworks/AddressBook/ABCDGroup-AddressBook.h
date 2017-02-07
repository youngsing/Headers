//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsPersistence/ABCDGroup.h>

@interface ABCDGroup (AddressBook)
+ (id)nts_DistributionIdentifierForProperty:(id)arg1 person:(id)arg2 inGroup:(id)arg3;
+ (id)nts_DistributionListConfigWithProperty:(id)arg1 person:(id)arg2 inGroup:(id)arg3;
+ (id)metadataType;
+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary *)arg4 valueWithEntityConverter:(struct __CFDictionary *)arg5;
- (BOOL)nts_SetDistributionIdentifier:(id)arg1 forProperty:(id)arg2 person:(id)arg3 inGroup:(id)arg4 allowFetching:(BOOL)arg5;
- (id)nts_DistributionIdentifierForProperty:(id)arg1 person:(id)arg2 inGroup:(id)arg3;
- (BOOL)isGroup:(id)arg1 parentOfRecord:(id)arg2;
- (id)nts_SubgroupsOfGroup:(id)arg1;
- (BOOL)nts_RemoveSubgroup:(id)arg1 fromGroup:(id)arg2;
- (BOOL)nts_AddSubgroup:(id)arg1 toGroup:(id)arg2;
- (BOOL)nts_SetMembers:(id)arg1 ofGroup:(id)arg2;
- (id)nts_MembersOfGroup:(id)arg1;
- (BOOL)nts_RemoveMember:(id)arg1 fromGroup:(id)arg2;
- (BOOL)nts_AddMember:(id)arg1 toGroup:(id)arg2;
@end
