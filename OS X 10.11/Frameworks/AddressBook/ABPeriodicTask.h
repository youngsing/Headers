//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABTask.h>

@interface ABPeriodicTask : ABTask
{
    CDUnknownBlockType _task;
    struct dispatch_source_s *_source;
    double _interval;
}

+ (struct dispatch_queue_s *)targetQueue;
+ (id)taskWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)cancel;
- (id)run:(id *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 interval:(double)arg2 task:(CDUnknownBlockType)arg3;

@end

