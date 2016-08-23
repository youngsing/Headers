//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, NSArray, NSDictionary, NSMutableDictionary, NSPredicate, NSString;

@interface ABPersonEntriesFetcher : NSObject
{
    ABAddressBook *_addressBook;
    NSArray *_affectedStores;
    NSPredicate *_fetchPredicate;
    BOOL _includeGroups;
    BOOL _includeLinkedPeople;
    BOOL _unifyPeople;
    NSString *_displayedProperty;
    NSPredicate *_displayedPropertyFilterPredicate;
    NSMutableDictionary *_entriesByUID;
}

@property(copy) NSPredicate *displayedPropertyFilterPredicate; // @synthesize displayedPropertyFilterPredicate=_displayedPropertyFilterPredicate;
@property(copy) NSString *displayedProperty; // @synthesize displayedProperty=_displayedProperty;
@property BOOL unifyPeople; // @synthesize unifyPeople=_unifyPeople;
@property BOOL includeLinkedPeople; // @synthesize includeLinkedPeople=_includeLinkedPeople;
@property BOOL includeGroups; // @synthesize includeGroups=_includeGroups;
@property(copy) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(copy) NSArray *affectedStores; // @synthesize affectedStores=_affectedStores;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, copy) NSDictionary *resultEntriesByUID;
- (void)fetchEntries;
- (void)dealloc;
- (id)init;

@end

