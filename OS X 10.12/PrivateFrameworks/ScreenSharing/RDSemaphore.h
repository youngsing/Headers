//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface RDSemaphore : NSObject
{
    NSObject<OS_dispatch_semaphore> *semaphore;
    int oneShotState;
}

- (long long)signal;
- (long long)wait:(unsigned int)arg1;
- (void)dealloc;
- (id)initAsOneShot;
- (id)initWithCount:(long long)arg1;
- (id)init;

@end
