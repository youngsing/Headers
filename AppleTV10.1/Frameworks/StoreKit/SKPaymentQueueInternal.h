//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKPaymentQueueClient, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject
{
    _Bool _checkedIn;
    SKPaymentQueueClient *_client;
    _Bool _isRefreshing;
    NSMutableArray *_localTransactions;
    struct __CFArray *_observers;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    _Bool _restoreFinishedDuringRefresh;
    _Bool _restoringCompletedTransactions;
    NSMutableArray *_transactions;
}

- (void)dealloc;

@end

