//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDLibraryUpgradeBaseAction.h>

@interface RDLibraryUpgradePhotos_1_0_0_CombinedAction : RDLibraryUpgradeBaseAction
{
}

+ (long long)progressCount;
+ (long long)toVersion;
+ (long long)fromVersion;
+ (unsigned char)upgradeActionType;
- (void)upgradeLibraryWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)taskAction;
- (id)initWithDatabase:(id)arg1;

@end
