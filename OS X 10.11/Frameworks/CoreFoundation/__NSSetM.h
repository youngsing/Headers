//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet
{
    unsigned int _used:58;
    unsigned long long _size;
    unsigned long long _mutations;
    id *_objs;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(unsigned long long)arg2:(BOOL)arg3;
- (double)clumpingInterestingThreshold;
- (double)clumpingFactor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)_mutate;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;

@end

