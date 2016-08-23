//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyValueMutableOrderedSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyOrderedSets;
    char _padding[3];
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;
- (unsigned long long)count;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

