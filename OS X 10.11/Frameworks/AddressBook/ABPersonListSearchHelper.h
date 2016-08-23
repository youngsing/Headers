//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersonListController, CNManualObservable, NSDictionary;
@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface ABPersonListSearchHelper : NSObject
{
    ABPersonListController *_personListController;
    NSDictionary *_cachedPersonEntriesByIdentifier;
    NSDictionary *_cachedSuggestionEntriesByIdentifier;
    CDUnknownBlockType _entryHandler;
    CNManualObservable *_searchObservable;
    id <CNCancelable> _localSubscription;
    id <CNCancelable> _suggestionSubscription;
}

@property(copy) NSDictionary *cachedSuggestionEntriesByIdentifier; // @synthesize cachedSuggestionEntriesByIdentifier=_cachedSuggestionEntriesByIdentifier;
@property(copy) NSDictionary *cachedPersonEntriesByIdentifier; // @synthesize cachedPersonEntriesByIdentifier=_cachedPersonEntriesByIdentifier;
@property(copy) CDUnknownBlockType entryHandler; // @synthesize entryHandler=_entryHandler;
- (void)removeEntries:(id)arg1;
- (BOOL)shouldIncludeSuggestions;
- (void)removeAllRecordsFromAddressBook:(id)arg1;
- (id)fetchSuggestedEntriesByUID;
- (void)performEntryHandler;
- (void)performSuggestionSearch:(id)arg1;
- (void)performLocalSearch:(id)arg1;
- (void)searchForString:(id)arg1;
- (id)fetchPersonEntriesByUID;
- (void)fetchLocalContacts;
- (void)dealloc;
- (id)initWithPersonListController:(id)arg1;

@end

