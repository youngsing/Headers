//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSCFDummyQueue : NSObject
{
    struct dispatch_queue_s *_queue;
}

- (int)maxConcurrentOperationCount;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;

@end

