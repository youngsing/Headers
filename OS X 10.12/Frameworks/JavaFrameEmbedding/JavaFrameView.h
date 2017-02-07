//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface JavaFrameView : NSView
{
    id delegate;
    BOOL _startedCreation;
    struct _jobject *_embeddedFrameRef;
    NSString *_customJavaClassName;
    id reserved[4];
}

+ (void)setJavaStartupOptions:(id)arg1;
+ (const struct JNINativeInterface_ **)mainThreadJniEnv;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setWindowIsActive:(BOOL)arg1;
- (struct _jobject *)javaFrame;
- (void)createJavaFrameWhenAppLoaded:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)postNotifications:(id)arg1;
- (void)safeCreateJavaFrame:(id)arg1;
- (void)setJavaFrameObject:(struct _jobject *)arg1 withEnv:(const struct JNINativeInterface_ **)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)javaFrameClassName;
- (void)setJavaFrameClassName:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)commonCleanup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 javaFrameClassName:(id)arg2;
- (const char *)embeddedFrameClassname;

@end
