//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKPassPaymentPayStateViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSDate, NSObject, NSString, PKFooterTransactionView, PKPassPaymentPayStateView, PKPaymentService;
@protocol OS_dispatch_source;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate>
{
    PKFooterTransactionView *_transactionView;
    PKPassPaymentPayStateView *_payStateView;
    _Bool _animated;
    unsigned long long _expressState;
    _Bool _receivedTransaction;
    _Bool _receivedExit;
    _Bool _needsResolution;
    _Bool _showingCheckmark;
    _Bool _animatingCheckmark;
    NSObject<OS_dispatch_source> *_activityResolutionTimer;
    NSDate *_visibleDate;
    int _expressTimeoutNotifyToken;
    int _expressFinishNotifyToken;
    PKPaymentService *_paymentService;
}

- (void).cxx_destruct;
- (void)_handleNotifyToken:(int)arg1;
- (void)_registerForExpressFelicaTransitNotifications:(_Bool)arg1;
- (_Bool)_isRegisteredForAnyExpressFelicaTransitNotifications;
- (_Bool)_isRegisteredForAllExpressFelicaTransitNotifications;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)payStateView:(id)arg1 revealingCheckmark:(_Bool)arg2;
- (void)_updateContentViewsWithTransaction:(id)arg1 felicaProperties:(id)arg2;
- (void)_updateContentViewsWithFelicaProperties:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1;
- (void)_resolveActivityIfNecessary;
- (void)_presentCheckmarkIfNecessary;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutIfNeededAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

