//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABGroup, ABPerson;

@protocol ABAccountPermissions <NSObject>
- (BOOL)groupsCanRemoveMembers;
- (BOOL)canRemoveGroup:(ABGroup *)arg1;
- (BOOL)canRenameGroup:(ABGroup *)arg1;
- (BOOL)canEditGroup:(ABGroup *)arg1;
- (BOOL)canCreateGroups;
- (BOOL)canEditPerson:(ABPerson *)arg1;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;
@end

