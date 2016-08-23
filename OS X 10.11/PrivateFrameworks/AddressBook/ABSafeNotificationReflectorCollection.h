//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABSafeNotificationReflectorCollection : NSObject
{
    NSArray *_reflectors;
}

- (void)dumpStatistics;
- (void)dumpEntries;
- (void)removeEntriesWithObserver:(id)arg1;
- (void)removeEntriesWithObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (id)reflectorForSignature:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)removeSafeObserver:(id)arg1;
- (void)removeSafeObserversInCollection:(id)arg1;
- (id)addEntryWithObserver:(id)arg1 selector:(SEL)arg2 notificationSignature:(id)arg3;
- (unsigned long long)countOfReflectors;
- (void)dealloc;
- (id)initWithNumberOfReflectors:(unsigned long long)arg1;

@end
