//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPassFooterContentViewDelegate-Protocol.h>

@class NSObject, NSString, PKPassFooterContentView, PKPassView, PKPaymentSessionHandle;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate>
{
    PKPassView *_passView;
    PKPassFooterContentView *_contentView;
    PKPaymentSessionHandle *_sessionHandle;
    NSObject<OS_dispatch_source> *_sessionStartTimer;
    long long _paymentApplicationState;
    _Bool _isBackgrounded;
    unsigned long long _sessionToken;
    unsigned char _visibility;
    unsigned char _contentViewVisibility;
    NSObject<OS_dispatch_group> *_sessionDelayGroup;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
- (void).cxx_destruct;
- (_Bool)_canApplyContentViewForValueAddedService;
- (_Bool)_canApplyContentViewForPersonalizedApplication;
- (void)_lostModeButtonTapped;
- (void)_deleteButtonTapped;
- (void)_endSessionStartTimer;
- (void)_endSession;
- (void)_advanceContentViewVisibilityToState:(unsigned char)arg1 animated:(_Bool)arg2;
- (void)_advanceVisibilityToState:(unsigned char)arg1 animated:(_Bool)arg2;
- (void)_setContentView:(id)arg1 animated:(_Bool)arg2;
- (void)_setContentView:(id)arg1;
- (void)_configureForValueAddedServiceWithContext:(id)arg1;
- (void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1;
- (void)_startContactlessInterfaceSessionWithSessionAvailable:(CDUnknownBlockType)arg1 sessionUnavailable:(CDUnknownBlockType)arg2;
- (id)_contentViewForPaymentApplicationWithContext:(id)arg1;
- (void)_configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)passFooterContentViewDidEndAuthenticating:(id)arg1;
- (void)passFooterContentViewDidBeginAuthenticating:(id)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(id)arg1;
@property(readonly, nonatomic) _Bool isPassAuthorized;
- (void)configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPassView:(id)arg1 state:(long long)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

