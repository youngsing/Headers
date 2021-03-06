//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

@class NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSTask, NSTextField, NSWindow;

@interface ACUIUpdateContactsViewController : ACUIViewController
{
    NSButton *_cancelButton;
    NSButton *_updateContactsButton;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_status;
    NSImageView *_icon;
    NSWindow *_window;
    NSWindow *_sheet;
    NSTask *_task;
    NSLayoutConstraint *_buttonTextVerticalSpacing;
}

+ (BOOL)supportsAccountType:(id)arg1;
@property __weak NSLayoutConstraint *buttonTextVerticalSpacing; // @synthesize buttonTextVerticalSpacing=_buttonTextVerticalSpacing;
@property(retain) NSTask *task; // @synthesize task=_task;
@property(retain) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSImageView *icon; // @synthesize icon=_icon;
@property(retain) NSTextField *status; // @synthesize status=_status;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSButton *updateContactsButton; // @synthesize updateContactsButton=_updateContactsButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)updateContactsFail:(id)arg1;
- (void)updateContactsFinish:(id)arg1;
- (void)updateContactsProgress:(id)arg1;
- (void)updateContactsStop;
- (void)cancel:(id)arg1;
- (void)updateContacts:(id)arg1;
- (id)_translateKey:(unsigned long long)arg1;
- (void)dealloc;
- (void)beginUpdateContactsInWindow:(id)arg1;

@end

