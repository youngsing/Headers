//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@class NSEvent, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSViewServiceApplication : NSApplication
{
    NSMutableArray *_exceptionQueue;
    NSEvent *_appEvent;
    unsigned int _didReceiveReopenWindows:1;
}

+ (BOOL)hasBootstrapKind:(int)arg1;
+ (int)bootstrapKind;
+ (BOOL)commonNamedFaults;
+ (id)commonBootstrap;
+ (void)learnHostPID;
+ (void)addHostPID:(int)arg1;
+ (BOOL)requiresFixedHost;
+ (id)serviceConfiguration;
+ (BOOL)appModalSessionInProgressForAnyHostOtherThanPID:(int)arg1;
+ (id)mungeStandardUserDefaults;
+ (void)ensureNSApp;
+ (id)bootstrapSharedServiceListener;
+ (void)obviateWindowAnimations;
+ (void)cacheMainBundleAsServiceBundle;
+ (void)validateXpcBundleInfoDictionary:(id)arg1;
+ (void)doctorServiceBundleInfoDictionary:(id)arg1;
+ (id)bundleForClass;
+ (BOOL)windowIsBeginningAppModalSession:(id)arg1;
+ (void)setNewestFriendlyThief:(int)arg1;
+ (void)withHostPID:(int)arg1 ontoMainThreadDefer:(CDUnknownBlockType)arg2;
+ (void)withHostPID:(int)arg1 invoke:(CDUnknownBlockType)arg2;
+ (void)cacheFakeEvent:(id)arg1;
+ (BOOL)isFakeEvent:(id)arg1;
- (BOOL)appModalSessionInProgressForAnyHostOtherThanPID:(int)arg1;
- (void)endModalSession:(struct _NSModalSession *)arg1;
- (void)endLocalAppModalSession:(struct _NSModalSession *)arg1 withWindow:(id)arg2;
- (void)endRemoteAppModalSession:(struct _NSModalSession *)arg1 withWindow:(id)arg2;
- (struct _NSModalSession *)beginModalSessionForWindow:(id)arg1;
- (BOOL)appModalSessionsOutlawed;
- (struct _NSModalSession *)beginLocalAppModalSessionForWindow:(id)arg1;
- (void)beginRemoteAppModalSessionForWindow:(id)arg1;
- (id)beginRemoteModalSession:(id)arg1 forWindow:(id)arg2 withSize:(struct CGSize)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)endSheet:(id)arg1;
- (void)endSheet:(id)arg1 returnCode:(long long)arg2;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)event:(id)arg1 wouldActivateWindow:(id)arg2;
- (void)onFirstEvent;
- (void)_modalSession:(struct _NSModalSession *)arg1 sendEvent:(id)arg2;
- (BOOL)_modalSession:(struct _NSModalSession *)arg1 wouldBeepGivenFakeEvent:(id)arg2;
- (void)sendEvent:(id)arg1 withForwarding:(BOOL)arg2;
- (id)nextEventMatchingMask:(unsigned long long)arg1 untilDate:(id)arg2 inMode:(id)arg3 dequeue:(BOOL)arg4;
- (void)sendEvent:(id)arg1;
- (BOOL)_eventIsToxic:(id)arg1;
- (BOOL)_resignKeyAppearanceInfFavorOfCorrespondingHostWindow:(id)arg1;
- (void)sendEventWithoutCatch:(id)arg1 withForwarding:(BOOL)arg2;
- (void)raiseIfDeferredException:(id)arg1;
- (void)enqueueException:(id)arg1;
- (void)dealloc;
- (BOOL)_handleKeyEquivalent:(id)arg1;
- (BOOL)_handleSymbolicHotKey:(id)arg1;
- (BOOL)_handleHotKeyRelease:(id)arg1;
- (void)_lookupHotKey:(id)arg1;
- (BOOL)_handleHotKeyPressed:(id)arg1;
- (BOOL)hotKeyIsToxic:(long long)arg1;
- (void)eventHasHitWindow:(id)arg1;
- (void)eventHasNotHitWindow:(id)arg1 actions:(CDUnknownBlockType)arg2;
- (int)_releaseKeyFocus;
- (int)_stealKeyFocusWithOptions:(unsigned int)arg1;
- (BOOL)_shouldLoadMainNibNamed:(id)arg1;
- (void)_reopenWindowsAsNecessaryIncludingRestorableState:(BOOL)arg1 registeringAsReady:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeWindow:(id)arg1;
- (void)_addWindow:(id)arg1;
- (void)_configureWindow:(id)arg1;
- (void)finishLaunching;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)_registerRequiredAEHandlers;

@end

