//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class EKUIAttachmentGadget;

@interface EKUIAttachmentTableView : NSTableView
{
    EKUIAttachmentGadget *_controller;
}

@property __weak EKUIAttachmentGadget *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (BOOL)canBecomeKeyView;
- (void)keyDown:(id)arg1;
- (id)initWithController:(id)arg1;

@end

