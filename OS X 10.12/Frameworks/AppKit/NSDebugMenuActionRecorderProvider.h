//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDebugMenuItemProvider-Protocol.h>
#import <AppKit/NSTableViewDataSource-Protocol.h>
#import <AppKit/NSTableViewDelegate-Protocol.h>

@class NSArrayController, NSMenuItem, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface NSDebugMenuActionRecorderProvider : NSObject <NSTableViewDelegate, NSTableViewDataSource, NSDebugMenuItemProvider>
{
    NSMenuItem *_menuItem;
    NSWindow *_recordWindow;
    NSArrayController *_recordsController;
    BOOL _recording;
}

- (id)_createActionRecordWindow;
- (void)_toggleFilter:(id)arg1;
- (void)_toggleActionRecorder:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSMenuItem *menuItem;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
