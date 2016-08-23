//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABCommand.h>

@class ABGroup, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ABPastePeopleCommand : ABCommand
{
    NSMutableArray *_people;
    NSMutableArray *_linkedPeople;
    NSMutableArray *_peopleProperties;
    ABGroup *_selectedGroup;
}

- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)finalize;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 addressBook:(id)arg2;

@end
