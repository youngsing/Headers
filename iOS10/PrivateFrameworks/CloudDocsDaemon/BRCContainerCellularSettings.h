//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCContainerCellularSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
}

+ (id)containerCellularSettings;
- (void).cxx_destruct;
- (_Bool)isCellularEnabledForContainerID:(id)arg1;
- (_Bool)_isCellularEnabledForBundleID:(id)arg1;
- (_Bool)_isCellularEnabledForDocumentsAndData;
- (id)init;
- (void)_accountDidChange;

@end

