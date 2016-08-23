//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ViewBridge/NSViewService.h>

#import <PreferencePanes/NSWindowDelegate-Protocol.h>

@class NSPreferencePane, NSString, NSWindow;

@interface NSPrefRemoteViewService : NSViewService <NSWindowDelegate>
{
    NSPreferencePane *_prefPane;
    NSWindow *_window;
}

@property __weak NSWindow *window; // @synthesize window=_window;
@property __weak NSPreferencePane *prefPane; // @synthesize prefPane=_prefPane;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)invalidate;
- (void)loadView;
- (unsigned long long)awakeFromRemoteView;
- (void)advanceToRunPhase;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

