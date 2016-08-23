//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSWindowBatchOrdering : NSObject
{
    CDUnknownBlockType completionCallback;
    struct NSWindowBatchOrderingTriplet *triplets;
    unsigned long long tripletCount;
    unsigned long long tripletCapacity;
}

- (void)dealloc;
- (void)deallocateAllWindows;
- (void)performRelativeToWindow:(long long)arg1;
- (void)performBatchOrderingForTripletsInRange:(struct _NSRange)arg1;
- (void)addCompletionCallback:(CDUnknownBlockType)arg1;
- (long long)bottomWindowOfAtLeastNormalWindowLevel;
- (void)unscheduleWindow:(long long)arg1;
- (void)scheduleWindow:(long long)arg1 forBatchOrdering:(long long)arg2 relativeTo:(long long)arg3;
- (unsigned long long)indexOfTripletWithWindow:(long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)ensureCapacity:(unsigned long long)arg1;

@end

