//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSViewService.h>

#import <ContactsUI/CNContactPickerInternalSetup-Protocol.h>
#import <ContactsUI/CNContactPickerViewController-Protocol.h>

@class ABAddressBook, ABBookSearchField, ABGroupEntriesList, ABPersonEntriesList, ABPersonListSearchController, CNContactListController, CNContactListView, CNContactPickerNotificationWatcher, CNContactPickerSearchController, CNGroupListController, CNGroupListEntriesFactory, CNGroupListView, NSString, NSWindow;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerViewService : NSViewService <CNContactPickerViewController, CNContactPickerInternalSetup>
{
    ABAddressBook *_addressBook;
    CNContactPickerNotificationWatcher *_notificationWatcher;
    CNContactPickerSearchController *_contactSearchController;
    BOOL _needsHostingWindow;
    ABPersonEntriesList *_personEntriesList;
    CNContactListController *_contactListController;
    CNGroupListController *_groupListController;
    CNGroupListEntriesFactory *_groupEntriesFactory;
    ABGroupEntriesList *_groupEntriesList;
    id <CNContactPickerInternalResponseDelegate> _responseDelegate;
    ABPersonListSearchController *_searchController;
    CNGroupListView *_groupListView;
    CNContactListView *_contactListView;
    ABBookSearchField *_searchField;
    NSWindow *_hostingWindow;
}

@property(retain) NSWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property __weak ABBookSearchField *searchField; // @synthesize searchField=_searchField;
@property __weak CNContactListView *contactListView; // @synthesize contactListView=_contactListView;
@property __weak CNGroupListView *groupListView; // @synthesize groupListView=_groupListView;
@property(readonly) ABPersonListSearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly) CNContactListController *contactListController; // @synthesize contactListController=_contactListController;
- (void).cxx_destruct;
- (void)resetUsageStatistics;
- (unsigned long long)countOfServerSearchesPerformed;
- (unsigned long long)countOfLocalSearchesPerformed;
- (unsigned long long)countOfGroupsViewed;
- (unsigned long long)countOfContactsExpanded;
- (void)traceUsageStatistics;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)showSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
@property(getter=isSearchFieldVisible) BOOL searchFieldVisible;
- (void)setDisplayedKeys:(id)arg1;
- (void)setPickerScope:(id)arg1;
- (id)pickerView;
- (void)attachViewToHostingWindow:(id)arg1;
- (void)setView:(id)arg1;
- (void)setAccounts:(id)arg1;
- (id)browsingHeadliner;
@property __weak id <CNContactPickerInternalResponseDelegate> responseDelegate;
- (void)pickerDidCreate;
- (unsigned long long)awakeFromRemoteView;
- (void)awakeFromNib;
- (id)nibName;
- (id)makePersonListUIReflector;
- (id)makeGroupListNotificationHandler;
- (void)setupNotificationWatcher;
- (void)setupSearchController;
- (void)setupGroupListController;
- (void)setupContactListController;
- (void)setInitialSelection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 needsHostingWindow:(BOOL)arg3;
- (id)initWithNeedsHostingWindow:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

