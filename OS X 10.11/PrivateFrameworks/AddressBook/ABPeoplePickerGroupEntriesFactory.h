//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABAbstractGroupEntriesFactory.h>

__attribute__((visibility("hidden")))
@interface ABPeoplePickerGroupEntriesFactory : ABAbstractGroupEntriesFactory
{
    BOOL _includeAllContacts;
    BOOL _includeDirectories;
}

@property BOOL includeDirectories; // @synthesize includeDirectories=_includeDirectories;
@property BOOL includeAllContacts; // @synthesize includeAllContacts=_includeAllContacts;
- (id)makeGroupEntriesWithHidingPolicy:(id)arg1;
- (id)makeGroupEntries;

@end

