//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRecents/NSObject-Protocol.h>

@class CRSearchQuery, NSArray, NSString;

@protocol CRDRecentContactsLibraryProtocol <NSObject>
- (void)removeAllRecentContactsWithCompletion:(void (^)(NSError *))arg1;
- (void)removeRecentContactsWithRecentIDs:(NSArray *)arg1 syncKeys:(NSArray *)arg2 domain:(NSString *)arg3;
- (void)recordContactEvents:(NSArray *)arg1 domain:(NSString *)arg2 sendingAddress:(NSString *)arg3 source:(NSString *)arg4;
- (void)searchRecentsUsingQuery:(CRSearchQuery *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

