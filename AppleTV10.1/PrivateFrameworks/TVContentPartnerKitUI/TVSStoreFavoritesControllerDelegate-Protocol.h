//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class NSArray, NSError, TVSStoreFavoritesController;

@protocol TVSStoreFavoritesControllerDelegate <NSObject>

@optional
- (void)storeFavoritesController:(TVSStoreFavoritesController *)arg1 failedToFetchItemsWithError:(NSError *)arg2;
- (void)storeFavoritesController:(TVSStoreFavoritesController *)arg1 finishedFetchingItems:(NSArray *)arg2;
@end

