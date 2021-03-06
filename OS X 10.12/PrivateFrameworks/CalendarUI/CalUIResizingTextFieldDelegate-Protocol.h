//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarUI/NSTextFieldDelegate-Protocol.h>

@class NSControl, NSNotification, NSPasteboard, NSTextView, NSURL;

@protocol CalUIResizingTextFieldDelegate <NSTextFieldDelegate>

@optional
- (BOOL)readPasteboard:(NSPasteboard *)arg1;
- (void)controlTextDidEndEditing:(NSNotification *)arg1;
- (void)controlTextDidChange:(NSNotification *)arg1;
- (BOOL)control:(NSControl *)arg1 textView:(NSTextView *)arg2 doCommandBySelector:(SEL)arg3;
- (NSURL *)url;
@end

