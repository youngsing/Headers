//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol OldSpotlightDataSource <NSObject>
- (void)updateDidEndForSpotlightDataType:(NSString *)arg1;
- (void)updateWillBeginForSpotlightDataType:(NSString *)arg1;
- (void)resetAdditionsAndDeletionsForSpotlightDataType:(NSString *)arg1;
- (NSArray *)allItemsForSpotlightDataType:(NSString *)arg1;
- (NSArray *)itemsToDeleteForSpotlightDataType:(NSString *)arg1;
- (NSArray *)itemsToAddForSpotlightDataType:(NSString *)arg1;
@end
