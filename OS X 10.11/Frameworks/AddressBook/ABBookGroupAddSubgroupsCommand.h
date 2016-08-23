//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

@class ABLazyGroup, ABRecordContext, NSSet;

@interface ABBookGroupAddSubgroupsCommand : ABBookUndoableCommand
{
    ABRecordContext *_recordContext;
    ABLazyGroup *_lazyGroup;
    NSSet *_newSubgroupUids;
}

- (id)newSubgroups;
- (void)removeSubgroupsFromGroup:(id)arg1;
- (void)executeUndo;
- (void)addSubgroupsToGroup:(id)arg1;
- (void)execute;
@property(readonly, copy) NSSet *newSubgroupUids;
- (id)actionName;
- (void)dealloc;
- (id)initWithRecordContext:(id)arg1 group:(id)arg2 newSubgroupUids:(id)arg3;
- (id)initWithAddressBook:(id)arg1 group:(id)arg2 newSubgroupUids:(id)arg3;

@end

