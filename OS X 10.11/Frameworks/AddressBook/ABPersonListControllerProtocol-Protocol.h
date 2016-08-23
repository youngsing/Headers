//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABAccount, ABAddressBook, ABGroup, NSArray, NSDictionary, NSString;
@protocol ABPersonListHeadlining;

@protocol ABPersonListControllerProtocol <NSObject>
@property(readonly) BOOL shouldIncludeGroups;
@property(readonly) NSArray *personEntries;
@property(readonly) NSArray *entries;
@property(retain) ABGroup *displayedGroup;
@property(retain) ABAddressBook *addressBook;
@property(retain) ABAccount *account;
- (void)scrollVisibleToSelectedRow;
- (void)reflectChangesInUIForNotificationUserInfo:(NSDictionary *)arg1;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)updateSuggestedContacts;
- (void)fetchContacts;
- (void)rearrangeObjects;
- (void)setSelectedEntries:(NSArray *)arg1;
- (void)setHeadliner:(id <ABPersonListHeadlining>)arg1;
- (void)setShouldUnifyPeople:(BOOL)arg1;
- (void)setFilterTerms:(NSString *)arg1;
@end

