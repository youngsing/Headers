//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTPBBulletinSummary, NSSet, NSString;

@protocol BLTPingService <NSObject>
- (void)subscribeWithMachServiceName:(NSString *)arg1;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 subsectionIDs:(NSSet *)arg2 completion:(void (^)(_Bool))arg3;
- (void)unsubscribeFromSectionID:(NSString *)arg1;
- (void)subscribeToSectionID:(NSString *)arg1 forFullBulletins:(_Bool)arg2 withAck:(_Bool)arg3;
@end

