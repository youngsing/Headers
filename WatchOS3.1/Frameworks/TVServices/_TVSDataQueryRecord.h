//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSDataQuery;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _TVSDataQueryRecord : NSObject
{
    _Bool _processAsync;
    TVSDataQuery *_query;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionHandler;
    long long _priority;
}

@property(nonatomic) _Bool processAsync; // @synthesize processAsync=_processAsync;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) TVSDataQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithQuery:(id)arg1 priority:(long long)arg2 processAsync:(_Bool)arg3 withCompletionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
