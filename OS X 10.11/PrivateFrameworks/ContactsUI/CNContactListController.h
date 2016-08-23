//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/ABPersonListControllerProtocol-Protocol.h>
#import <ContactsUI/CNContactListCellViewControllerDelegate-Protocol.h>
#import <ContactsUI/NSOutlineViewDataSource-Protocol.h>
#import <ContactsUI/NSOutlineViewDelegate-Protocol.h>

@class ABAccount, ABAddressBook, ABGroup, ABPersonEntriesList, CNContactListCellView, CNContactListHelperFactory, CNContactListView, NSArray, NSDictionary, NSString;

@interface CNContactListController : NSObject <CNContactListCellViewControllerDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, ABPersonListControllerProtocol>
{
    ABPersonEntriesList *_personEntriesList;
    unsigned long long _countOfContactsExpanded;
    BOOL _shouldUnifyPeople;
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABAddressBook *_suggestionAddressBook;
    ABGroup *_displayedGroup;
    NSDictionary *_cachedFetchedEntriesByUID;
    NSArray *_displayedKeys;
    CNContactListView *_contactListView;
    CNContactListHelperFactory *_helperFactory;
    CNContactListCellView *_cellView;
    long long _expandedRow;
}

@property BOOL shouldUnifyPeople; // @synthesize shouldUnifyPeople=_shouldUnifyPeople;
@property long long expandedRow; // @synthesize expandedRow=_expandedRow;
@property(retain) CNContactListCellView *cellView; // @synthesize cellView=_cellView;
@property(retain) CNContactListHelperFactory *helperFactory; // @synthesize helperFactory=_helperFactory;
@property(retain, nonatomic) CNContactListView *contactListView; // @synthesize contactListView=_contactListView;
@property(copy, nonatomic) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
@property(copy) NSDictionary *cachedFetchedEntriesByUID; // @synthesize cachedFetchedEntriesByUID=_cachedFetchedEntriesByUID;
@property(retain) ABGroup *displayedGroup; // @synthesize displayedGroup=_displayedGroup;
@property(retain) ABAddressBook *suggestionAddressBook; // @synthesize suggestionAddressBook=_suggestionAddressBook;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) ABAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)accessibilityPressRowWithView:(id)arg1;
- (void)cellViewController:(id)arg1 selectValueWithScope:(id)arg2;
- (BOOL)shouldIncludeSuggestions;
- (id)fetchSuggestedEntriesByUID;
- (void)updateSuggestedContacts;
- (unsigned long long)countOfEntries;
- (void)scrollVisibleToSelectedRow;
@property(copy) NSString *filterTerms;
- (void)setSelectedEntries:(id)arg1;
@property(readonly) BOOL shouldIncludeGroups;
@property(readonly) NSArray *personEntries;
@property(readonly) NSArray *entries;
- (void)fetchContacts;
- (void)rearrangeObjects;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)reflectChangesInUIForNotificationUserInfo:(id)arg1;
- (void)resetCountOfContactsExpanded;
@property(readonly, nonatomic) unsigned long long countOfContactsExpanded;
- (void)personEntriesDidChange:(id)arg1;
- (id)fetchPredicate;
- (id)affectedStores;
- (void)reloadPersonEntriesList;
- (void)refreshContactList;
- (BOOL)isValidRow:(long long)arg1;
- (id)expandedItem;
- (BOOL)isHeaderRow:(unsigned long long)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)heightOfExpandedEntry:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)viewControllerAtRow:(long long)arg1;
- (id)contactAtRow:(long long)arg1;
- (void)_clickedRowAtIndex:(long long)arg1;
- (void)rowClicked:(id)arg1;
@property(readonly, nonatomic) BOOL shouldSelectContacts;
- (void)expandRow:(long long)arg1 shouldAnimate:(BOOL)arg2;
- (void)expandRow:(long long)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineViewNeedsIndentation:(id)arg1;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)setupCellView;
- (void)registerNibWithName:(id)arg1 forIdentifier:(id)arg2;
- (void)setupListView;
- (void)setHeadliner:(id)arg1;
- (void)dealloc;
- (id)initWithPersonEntriesList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
