//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUSearchController, TUSearchResults;

@protocol TUSearchModuleProtocol <NSObject>
@property(readonly) TUSearchResults *searchResults;
@property(readonly, getter=isSearchComplete) BOOL searchComplete;
- (void)cancelSearch;
- (void)searchForString:(NSString *)arg1 completion:(void (^)(id <TUSearchModuleProtocol>, BOOL))arg2;

@optional
@property __weak TUSearchController *searchController;
@end

