//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSNavNodeTask.h>

@interface NSNavFBENodeTask : NSNavNodeTask
{
    struct OpaqueNodeTask *_nodeTaskRef;
    int _taskStatus;
    CDUnknownBlockType _completionHandler;
}

@property int taskStatus; // @synthesize taskStatus=_taskStatus;
@property struct OpaqueNodeTask *nodeTaskRef; // @synthesize nodeTaskRef=_nodeTaskRef;
- (void)cancel;
- (void)finalize;
- (void)dealloc;
- (id)initWithNode:(id)arg1 taskRef:(struct OpaqueNodeTask *)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

