//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMapTable;

@interface SBUIBannerTargetManager : NSObject
{
    NSHashTable *_proxies;
    NSMapTable *_implementationToProxyMap;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (id)_proxyForTargetImplementation:(id)arg1;
- (void)_unregisterTargetImplementation:(id)arg1;
- (void)_registerTargetImplementation:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *targets;
- (id)init;

@end
