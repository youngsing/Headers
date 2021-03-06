//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICNoteContainer-Protocol.h>

@class ICAccount, NSString;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>
{
}

+ (id)keyPathsForValuesAffectingCloudAccount;
- (id)noteVisibilityTestingForSearchingAccount;
- (_Bool)supportsEditingNotes;
- (id)accountName;
- (id)cloudAccount;
- (id)noteContainerAccount;
- (id)titleForTableViewCell;
- (id)titleForNavigationBar;
- (_Bool)noteIsVisible:(id)arg1;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *accountNameForAccountListSorting; // @dynamic accountNameForAccountListSorting;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAllNotesContainer; // @dynamic isAllNotesContainer;
@property(nonatomic) _Bool isHiddenNoteContainer; // @dynamic isHiddenNoteContainer;
@property(retain, nonatomic) NSString *nestedTitleForSorting; // @dynamic nestedTitleForSorting;
@property(retain, nonatomic) ICAccount *owner; // @dynamic owner;
@property(nonatomic) int sortOrder; // @dynamic sortOrder;
@property(readonly) Class superclass;

@end

