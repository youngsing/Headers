//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABAddressBook, ABRecord, NSArray, NSDictionary, NSString, NSURL;

@protocol ABMetadataManager <NSObject>
- (void)reportDelinquentUIDs:(NSArray *)arg1 forJobType:(int)arg2;
- (void)validateAllMetaDataForceRebuild:(BOOL)arg1;
- (void)markViewedForRecord:(ABRecord *)arg1 tryAgain:(BOOL)arg2;
- (void)removeMetadataForRecordWithUniqueId:(NSString *)arg1 quantumBaseURLs:(NSArray *)arg2;
- (void)writeMetadata:(NSDictionary *)arg1 toURL:(NSURL *)arg2;
- (void)completed:(NSArray *)arg1 forType:(int)arg2;
- (void)planToComplete:(NSArray *)arg1 forType:(int)arg2;
- (void)stamp;
- (void)unlockInfo;
- (BOOL)lockInfo;
- (ABAddressBook *)addressBook;
@end

