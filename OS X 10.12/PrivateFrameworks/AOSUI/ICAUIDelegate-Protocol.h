//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class JSValue, NSDictionary, NSString, NSWindow;

@protocol ICAUIDelegate <NSObject>
- (void)icaSetButtonBar:(NSDictionary *)arg1;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(JSValue *)arg3;
- (void)exitWebView:(NSDictionary *)arg1;
- (void)endSheet:(NSDictionary *)arg1;
- (void)beginSheetWithContent:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)beginSheetWithURL:(NSString *)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(JSValue *)arg4 optionalContext:(NSDictionary *)arg5;
- (void)icaWebKitViewIsAvailable;
- (void)icaWebKitViewSwitchToLocation:(NSString *)arg1 toSection:(NSString *)arg2;

@optional
- (void)skipAndContinueSignIn;
- (void)runAppleIDOptOut:(JSValue *)arg1;
- (NSWindow *)webViewWindow;
- (void)icaWebKitViewHasLoaded;
- (void)showSpinnerWithLabelOnNativeScreen:(NSString *)arg1;
- (void)showNativeAddFamilyMember;
@end
