//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSavePanel.h>

#import <SecurityInterface/NSOpenSavePanelDelegate-Protocol.h>

@class NSString;

@interface SFKeychainSavePanel : NSSavePanel <NSOpenSavePanelDelegate>
{
    id _reserved_SFKeychainSavePanel;
}

+ (id)sharedKeychainSavePanel;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (id)error;
- (struct OpaqueSecKeychainRef *)keychain;
- (void)setPassword:(id)arg1;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)_openDialog:(id)arg1 file:(id)arg2;
- (void)_setFileName:(id)arg1;
- (void)_setStartPath:(id)arg1;
- (void)_setDidEndSelector:(SEL)arg1;
- (SEL)_didEndSelector;
- (void)_setKeychainFullPathName:(id)arg1;
- (BOOL)panel:(id)arg1 isValidFilename:(id)arg2;
- (void *)_contextInfo;
- (void)_setContextInfo:(void *)arg1;
- (void)_setSavedDelegate:(id)arg1;
- (id)_savedDelegate;
- (int)_result;
- (id)_appendSuffixIfNeeded:(id)arg1;
- (void)_saveSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_ivars;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

