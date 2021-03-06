//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MTLToolsPointerArray : NSObject
{
    unsigned long long _pointerAdditions;
    NSPointerArray *_pointerArray;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void).cxx_destruct;
- (void)enumeratePointersUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectAssociatedWithBaseObject:(id)arg1;
- (id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addPointer:(void *)arg1;
- (void)_addPointer:(void *)arg1;
- (id)initWithOptions:(unsigned int)arg1;

@end

