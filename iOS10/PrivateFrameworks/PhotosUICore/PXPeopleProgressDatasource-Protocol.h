//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXPeopleProgressDatasource <NSObject>
@property _Bool featureUnlockUserDefault;
- (unsigned long long)verifiedCount;
- (unsigned long long)plusMembersCount;
- (unsigned long long)homeMembersCount;
- (unsigned long long)processedAssetCount;
- (unsigned long long)pendingAssetCount;
- (unsigned long long)totalAssetCount;
- (void)asyncPeopleScanningProgress:(void (^)(double, unsigned long long))arg1;
- (double)syncPeopleScanningProgress;
- (void)loadQueryData;

@optional
@property unsigned long long cachedUnlockValue;
@end
