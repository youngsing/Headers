//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAlert, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface NSSavePanelAlertStyleContentView : NSView
{
    NSImageView *iconView;
    NSTextField *messageTextField;
    NSTextField *informativeMessageTextField;
    NSAlert *alert;
}

@property NSTextField *informativeMessageTextField; // @synthesize informativeMessageTextField;
@property NSTextField *messageTextField; // @synthesize messageTextField;
@property NSImageView *iconView; // @synthesize iconView;
- (void)layout;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)cancelAlertSpeaking;
- (void)dealloc;

@end

