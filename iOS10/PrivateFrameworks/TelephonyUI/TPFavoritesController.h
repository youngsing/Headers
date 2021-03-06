//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUI/TUCallProviderManagerDelegate-Protocol.h>

@class CNContactStore, CNFavorites, NSArray, NSMutableDictionary, NSString, TUCallProviderManager;
@protocol TPFavoritesControllerDelegate;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate>
{
    TUCallProviderManager *_callProviderManager;
    NSArray *_favoritesEntries;
    id <TPFavoritesControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSMutableDictionary *_transportNameCache;
}

@property(readonly, copy, nonatomic) NSMutableDictionary *transportNameCache; // @synthesize transportNameCache=_transportNameCache;
@property(retain, nonatomic) CNFavorites *favorites; // @synthesize favorites=_favorites;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <TPFavoritesControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)dialRequestForCallProvider:(id)arg1;
- (void)handleFavoritesEntryChangedNotification:(id)arg1;
- (void)handleFavoritesChangedNotification:(id)arg1;
- (void)handleContactStoreDidChangeNotification:(id)arg1;
@property(copy, nonatomic) NSArray *favoritesEntries; // @synthesize favoritesEntries=_favoritesEntries;
- (unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1;
- (id)dialRequestForFavoritesEntry:(id)arg1;
- (id)transportNameForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (void)save;
- (void)removeEntriesAtIndexes:(id)arg1;
- (void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)canAddEntry;
- (id)addEntry:(id)arg1;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

