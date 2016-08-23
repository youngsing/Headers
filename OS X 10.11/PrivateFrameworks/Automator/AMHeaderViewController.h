//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AMPluginHeaderViewController, AMWorkflow, AMWorkflowHeaderView;

@interface AMHeaderViewController : NSViewController
{
    AMPluginHeaderViewController *_pluginHeaderViewController;
    AMWorkflow *_workflow;
    AMWorkflowHeaderView *_workflowHeaderView;
}

+ (BOOL)hasHeaderViewForPersonality:(id)arg1;
@property(retain) AMWorkflowHeaderView *workflowHeaderView; // @synthesize workflowHeaderView=_workflowHeaderView;
@property(retain) AMPluginHeaderViewController *pluginHeaderViewController; // @synthesize pluginHeaderViewController=_pluginHeaderViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)updateHeaderConnectionDrawing;
@property(retain) AMWorkflow *workflow;
- (void)update;
- (void)dealloc;

@end

