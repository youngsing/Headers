//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXExtensionMatchingMerger : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;
    NSArray *_mapExtensions;
    NSArray *_intentNonUIExtensions;
    NSArray *_intentUIExtensions;
}

- (void).cxx_destruct;
- (void)clearExtensions;
- (id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)init;

@end

