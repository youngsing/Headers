//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ISDialog;
@protocol ISDialogDelegate;

@protocol ISUIServiceClientRemoteObject
- (void)serviceDismissDialog:(ISDialog *)arg1 withExitCode:(long long)arg2;
- (void)serviceDisplayDialog:(ISDialog *)arg1 withServiceDelegate:(id <ISDialogDelegate>)arg2 replyBlock:(void (^)(long long, ISSignInPromptResponse *))arg3;
- (void)serviceDisplayDialog:(ISDialog *)arg1;
@end
