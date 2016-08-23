//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSNavNodeTask.h>

@class NSNavProgressErrorViewController, NSNavProgressStatusViewController;

@interface NSNavODSAskToUseTask : NSNavNodeTask
{
    int _state;
    NSNavProgressStatusViewController *_progressViewController;
    NSNavProgressErrorViewController *_taskDeniedViewController;
}

+ (void)waitingForDiscForNode:(id)arg1;
+ (void)deniedTaskForNode:(id)arg1;
+ (void)cancelTaskForNode:(id)arg1;
+ (void)finishedTaskForNode:(id)arg1;
+ (id)findTaskForNode:(id)arg1;
+ (id)addTaskForNode:(id)arg1;
@property int state; // @synthesize state=_state;
- (void)cancel;
- (void)_removeTask;
- (void)_addTaskDeniedViewController;
- (void)_addProgressViewController;
- (void)_userCancelled:(id)arg1;
- (id)_taskDeniedErrorString;
- (void)_updateProgress;
- (id)_nodeDriveType;
- (void)dealloc;
- (id)initWithNode:(id)arg1;

@end

