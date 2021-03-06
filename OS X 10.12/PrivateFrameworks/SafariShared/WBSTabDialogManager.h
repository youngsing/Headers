//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBSTabDialogManager : NSObject
{
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_webPIDToDialogQueueMap;
    unsigned long long _maximumNumberOfBackgroundDialogs;
}

- (void).cxx_destruct;
- (void)dismissDialogForWebPIDIfNeeded:(int)arg1;
- (void)dismissDialogForWebPID:(int)arg1 withResponse:(long long)arg2 message:(id)arg3;
- (id)unregisterDialogForWebPID:(int)arg1;
- (void)registerDialogForWebPID:(int)arg1 withCompletionHandler:(id)arg2;
- (void)dismissAllDialogsForWebPIDIfNeeded:(int)arg1;
- (void)presentNextDialogForWebPID:(int)arg1;
- (void)dismissCurrentDialogForWebPID:(int)arg1 withResponse:(long long)arg2 message:(id)arg3;
- (void)enqueueOrPresentDialogForWebPID:(int)arg1 presentationBlock:(CDUnknownBlockType)arg2 dismissalBlock:(CDUnknownBlockType)arg3 andIgnoreQueueCapacity:(BOOL)arg4;
- (id)init;

@end

