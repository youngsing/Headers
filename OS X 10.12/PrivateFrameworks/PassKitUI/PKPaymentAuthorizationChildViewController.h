//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>

@class NSString, PKPaymentAuthorizationCoreViewController, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine;

@interface PKPaymentAuthorizationChildViewController : NSViewController <PKPaymentAuthorizationStateMachineDelegate>
{
}

- (void)didDismiss;
- (void)didBecomeInactiveViewController;
- (void)willBecomeInactiveViewController;
- (void)didBecomeActiveViewController;
- (void)willBecomeActiveViewController;
- (void)dataModelDidUpdate;
- (void)preflight;
@property(readonly, nonatomic) BOOL shouldDeactivateOnDidResign;
@property(readonly, nonatomic) BOOL shouldActivateOnDidBecomeActive;
@property(readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel;
@property(readonly, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine;
@property(readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property(readonly, nonatomic) PKPaymentAuthorizationCoreViewController *coreViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
