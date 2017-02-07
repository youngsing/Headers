//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <TVMLKit/TVJSSKPaymentTransaction-Protocol.h>

@class NSDate, NSString, SKPaymentTransaction, TVJSError, TVJSSKPayment;

__attribute__((visibility("hidden")))
@interface TVJSSKPaymentTransaction : IKJSObject <TVJSSKPaymentTransaction>
{
    SKPaymentTransaction *_transaction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long transactionState;
@property(readonly, nonatomic) NSString *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) TVJSSKPayment *payment;
@property(readonly, nonatomic) TVJSSKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) TVJSError *error;
@property(readonly, nonatomic) SKPaymentTransaction *wrappedTransaction;
- (id)initWithTransaction:(id)arg1 appContext:(id)arg2;

@end
