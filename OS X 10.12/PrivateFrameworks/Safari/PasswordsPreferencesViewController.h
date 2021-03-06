//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/CredentialAndProtectionSpaceCollectionDelegate-Protocol.h>
#import <Safari/NSTableViewDelegate-Protocol.h>
#import <Safari/PreferencesViewController-Protocol.h>

@class AuthorizationRequest, NSButton, NSCountedSet, NSMutableDictionary, NSMutableSet, NSSearchField, NSString, NSTableView, NSTextField;
@protocol CredentialAndProtectionSpaceCollection;

__attribute__((visibility("hidden")))
@interface PasswordsPreferencesViewController : NSViewController <CredentialAndProtectionSpaceCollectionDelegate, NSTableViewDelegate, PreferencesViewController>
{
    id <CredentialAndProtectionSpaceCollection> _collection;
    BOOL _showSelectedPasswords;
    NSMutableSet *_selectedCredentialAndProtectionSpaceObjectsBeforeSortOrFilter;
    NSCountedSet *_countedSetOfCredentialHosts;
    NSString *_identifierOfColumnToEdit;
    BOOL _allowedToEditPassword;
    BOOL _isAddingPassword;
    BOOL _isEditingAddress;
    NSMutableDictionary *_columnIDsToCandidateStrings;
    double _rowHeight;
    AuthorizationRequest *_canShowPasswordsAuthorizationRequest;
    NSTextField *_emptyTablePlaceholderText;
    NSButton *_addButton;
    NSSearchField *_searchField;
    NSTableView *_tableView;
    NSButton *_removeButton;
    NSButton *_showSelectedPasswordsCheckbox;
    NSButton *_autoFillUserNamesAndPasswordsCheckbox;
}

+ (void)registerDefaults;
@property(nonatomic) __weak NSButton *autoFillUserNamesAndPasswordsCheckbox; // @synthesize autoFillUserNamesAndPasswordsCheckbox=_autoFillUserNamesAndPasswordsCheckbox;
@property(nonatomic) __weak NSButton *showSelectedPasswordsCheckbox; // @synthesize showSelectedPasswordsCheckbox=_showSelectedPasswordsCheckbox;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak NSTextField *emptyTablePlaceholderText; // @synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText;
- (void).cxx_destruct;
- (void)_updateAutoFillCheckboxes;
- (void)openHelpPage:(id)arg1;
- (void)toggleAutoFillUserNamesAndPasswords:(id)arg1;
- (void)didSortOrFilter;
- (void)willSortOrFilter;
- (id)passwordForSortingAndFilteringCredentialAndProtectionSpace:(id)arg1;
- (id)userForSortingAndFilteringCredential:(id)arg1;
- (id)addressStringForFilteringProtectionSpace:(id)arg1;
- (long long)compareAddressFromCredentialAndProtectionSpace:(id)arg1 toAddressFromCredentialAndProtectionSpace:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableViewCopy:(id)arg1;
- (BOOL)tableViewCanCopy:(id)arg1;
- (id)tableView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)tableView:(id)arg1 keyDown:(id)arg2;
- (BOOL)_shouldAddCandidateCredentialAndProtectionSpaceToCollection;
- (BOOL)_shouldAcceptAddRowText:(id)arg1;
- (BOOL)_shouldAcceptEditWithText:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)_passwordForCredential:(id)arg1 isPasswordSelected:(BOOL)arg2;
- (id)_passwordForCredentialEditing:(id)arg1 isPasswordSelected:(BOOL)arg2;
- (id)_bestSchemeForCandidateURLString:(id)arg1;
- (id)_userForCredential:(id)arg1;
- (id)_attributedAddressStringFromProtectionSpace:(id)arg1;
- (void)copySelectedPassword;
- (void)copySelectedUserName;
- (void)copySelectedWebsite;
- (id)_credentialForSelectedRow;
- (id)helpAnchor;
- (void)search:(id)arg1;
- (id)filterStringFromSearchField;
- (void)focusContentSearchField:(id)arg1;
- (id)_window;
- (BOOL)validate_focusContentSearchField:(id)arg1;
- (void)toggleShowSelectedPasswords:(id)arg1;
- (BOOL)_canShowPasswords;
- (void)_removeItemsAtIndexes:(id)arg1;
- (void)_removeSelectedItems;
- (void)_removeCredentialConfirmingIfNecessary;
- (void)addItem:(id)arg1;
- (void)removeItems:(id)arg1;
- (BOOL)_shouldAcceptEditedPassword:(id)arg1 forCredentialAndProtectionSpace:(id)arg2;
- (BOOL)_shouldAcceptEditedUserName:(id)arg1 forCredentialAndProtectionSpace:(id)arg2;
- (BOOL)_shouldAcceptEditedWebsiteAddress:(id)arg1 forCredentialAndProtectionSpace:(id)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)_isRowIndexOfCredentialBeingAdded:(unsigned long long)arg1;
- (void)_syncedPasswordsDidChangeExternally:(id)arg1;
- (void)_resetCredentials;
- (void)_resetCredentialsRemovingUnnecessaryPasswordsNotSavedCredentials:(BOOL)arg1;
- (void)_reloadTableData;
- (void)_updateShowSelectedPasswordsCheckbox;
- (BOOL)_showSelectedPasswordsCheckboxShouldBeEnabled;
- (void)_updateRemoveButton;
- (void)_updateAddButton;
- (void)_updateVisibilityOfPlaceholderText;
- (void)_revokePasswordsAuthorization;
- (BOOL)_hasItemsToRemove;
- (BOOL)_canRemoveSelectedItems;
- (void)dealloc;
- (id)nibName;
- (void)focusDefaultViewWithHostWindow:(id)arg1;
@property(readonly, nonatomic) double minimumPaneHeight;
- (void)hostModuleWasInitializedFromDefaults;
- (void)hostModuleWillBeRemoved;
- (void)hostModuleWillBeDisplayed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

