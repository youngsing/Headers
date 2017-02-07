//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFDialogViewDelegate-Protocol.h>

@class NSString, _SFDialogView;
@protocol _SFDialogControllerDelegate, _SFDialogPresenting;

@interface _SFDialogController : NSObject <_SFDialogViewDelegate>
{
    _SFDialogView *_dialogView;
    int _webProcessIdentifier;
    id <_SFDialogControllerDelegate> _delegate;
    id <_SFDialogPresenting> _dialogPresenter;
}

+ (void)initialize;
@property(nonatomic) __weak id <_SFDialogPresenting> dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(nonatomic) __weak id <_SFDialogControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dialogView:(id)arg1 didSelectPrimaryAction:(_Bool)arg2 withPromptText:(id)arg3;
- (void)_dismissDialog;
- (void)_presentDialog:(id)arg1 forWebProcessIdentifier:(int)arg2;
- (_Bool)_isPresentingDialog;
- (int)_currentWebProcessIdentifier;
- (void)dismissAllDialogsIfNeeded;
- (void)owningWebViewWillBecomeActive;
- (void)showDialog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
