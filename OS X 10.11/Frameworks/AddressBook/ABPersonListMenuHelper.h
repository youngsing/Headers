//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSMenuDelegate-Protocol.h>

@class ABPersonListController, ABPersonListSharingHelper, NSMenu, NSString;

__attribute__((visibility("hidden")))
@interface ABPersonListMenuHelper : NSObject <NSMenuDelegate>
{
    ABPersonListController *_personListController;
    ABPersonListSharingHelper *_sharingHelper;
    NSMenu *_contextMenu;
}

@property(readonly) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
- (id)contactsForEntries:(id)arg1;
- (id)makeFindInSpotlightMenuItemWithEntries:(id)arg1;
- (id)makeDeleteSelectedEntriesMenuItemWithEntries:(id)arg1;
- (id)makeEditEntryMenuItemWithEntries:(id)arg1;
- (id)makeExportVCardMenuItemWithRecords:(id)arg1;
- (id)makeShareMenuItemWithEntries:(id)arg1;
- (id)peopleForIdentifiers:(id)arg1;
- (id)menuItemsForContextMenuWithEntries:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithPersonListController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

