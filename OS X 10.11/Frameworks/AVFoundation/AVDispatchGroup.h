//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVDispatchGroup : NSObject
{
    struct dispatch_queue_s *_ivarAccessQueue;
    NSArray *_notifyBlocks;
    long long _outstandingOperations;
}

- (void)notifyUsingBlock:(CDUnknownBlockType)arg1;
- (void)leave;
- (void)enter;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

