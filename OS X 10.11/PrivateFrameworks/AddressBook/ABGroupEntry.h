//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABGroup, NSArray, NSString;

@interface ABGroupEntry : NSObject
{
    NSString *_name;
    NSString *_identifier;
}

+ (id)sectionEntryWithIdentifier:(id)arg1 name:(id)arg2;
+ (id)identifierForGroupWithIdentifier:(id)arg1;
+ (id)accountHeaderEntryWithName:(id)arg1 account:(id)arg2 children:(id)arg3 addressBook:(id)arg4;
+ (id)smartGroupsHeaderEntryWithName:(id)arg1 children:(id)arg2 addressBook:(id)arg3;
+ (id)directoriesHeaderEntryWithDirectory:(id)arg1 children:(id)arg2;
+ (id)lastImportEntryWithName:(id)arg1 addressBook:(id)arg2;
+ (id)searchingGroupEntryWithDirectory:(id)arg1 addressBookForCreatingGroups:(id)arg2;
+ (id)smartGroupEntryWithAddressBook:(id)arg1 smartGroup:(id)arg2;
+ (id)groupEntryWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3;
+ (id)accountEntryWithName:(id)arg1 account:(id)arg2 addressBook:(id)arg3;
+ (id)headerEntryWithName:(id)arg1 account:(id)arg2 children:(id)arg3;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)nameWithStyleProvider:(id)arg1;
- (id)iconWithStyleProvider:(id)arg1;
- (BOOL)canShowStatusForAccountWithIdentifier:(id)arg1;
- (BOOL)canShowStatus;
@property(readonly, copy) NSString *accessibilityDescription;
- (id)description;
- (BOOL)isAvailableInTimeMachine;
- (BOOL)containsPeople:(id)arg1;
- (id)dragSource;
- (id)dropDestination;
- (BOOL)canSendEmailToGroup;
- (BOOL)canExportGroupVCard;
- (BOOL)canEditDistributionLists;
- (id)importFilesHelperWithFactory:(id)arg1 filenames:(id)arg2 showConfirmation:(BOOL)arg3;
- (id)editSmartGroupHelperWithFactory:(id)arg1;
- (BOOL)canEditSmartGroup;
- (id)createSmartGroupFromSearchHelperWithFactory:(id)arg1;
- (id)createSmartGroupHelperWithFactory:(id)arg1;
- (id)pasteHelperWithFactory:(id)arg1;
- (id)cutHelperWithFactory:(id)arg1;
- (BOOL)canCut;
- (id)copyHelperWithFactory:(id)arg1;
- (BOOL)canCopy;
- (BOOL)canCreateGroupFromSelection;
- (id)createGroupInSectionHelperWithFactory:(id)arg1;
- (BOOL)canCreateGroupInSection;
- (id)createHelperWithFactory:(id)arg1;
- (BOOL)canCreateGroup;
- (BOOL)canDrop;
- (BOOL)canDrag;
- (BOOL)canCreatePeople;
- (BOOL)canDeletePeople;
- (BOOL)canRemoveMembers;
- (id)deleteHelperWithFactory:(id)arg1;
- (BOOL)canDelete;
- (id)renameHelperWithFactory:(id)arg1;
- (BOOL)canRename;
- (id)selectHelperWithFactory:(id)arg1;
- (BOOL)canSelect;
- (BOOL)isGroupItem;
- (double)rowHeight;
- (unsigned long long)textAlignment;
- (id)tableViewIdentifier;
@property(readonly, copy) NSArray *children;
@property(readonly, retain) ABGroup *group;
- (id)addressBook;
@property(readonly, copy) NSString *accountIdentifier;
@property(readonly, retain) ABAccount *account;
@property(readonly, copy) NSString *localizedName;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;

@end

