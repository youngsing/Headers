//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABCNContactStore, NSMutableArray, NSMutableDictionary;

@interface ABDeleteRecordsCommandBuilder : NSObject
{
    NSMutableArray *_deletedRecords;
    ABAddressBook *_legacyAddressBook;
    ABCNContactStore *_addressBook;
    NSMutableDictionary *_removeMemberBuilders;
}

+ (id)builderWithAddressBook:(id)arg1;
- (void)_deleteGroupsWithBuilder:(id)arg1;
- (void)_buildDeleteCommandsForPeopleUIDs:(id)arg1 withBuilder:(id)arg2;
- (void)_deletePeopleWithBuilder:(id)arg1;
- (void)_buildRemoveMemberCommandsWithBuilder:(id)arg1;
- (id)_removeMembersBuilderForGroup:(id)arg1;
- (void)_removeRecordFromParentGroups:(id)arg1;
- (void)_removeRecordsFromParentGroupsWithBuilder:(id)arg1;
- (id)_makeBuilder;
- (id)build;
- (void)deleteRecord:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

@end

