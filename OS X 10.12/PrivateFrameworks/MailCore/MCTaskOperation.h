//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class MCActivityMonitor;

@interface MCTaskOperation : NSBlockOperation
{
    MCActivityMonitor *_parentMonitor;
    MCActivityMonitor *_monitor;
}

+ (void)setTaskDescription:(const char *)arg1;
@property(retain) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) MCActivityMonitor *parentMonitor; // @synthesize parentMonitor=_parentMonitor;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)main;
- (id)_setTaskName:(id)arg1 priority:(unsigned char)arg2 canCancel:(BOOL)arg3;
- (void)setParentMonitor:(id)arg1 taskName:(id)arg2;

@end

