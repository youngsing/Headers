//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSActionListener;
@protocol OS_dispatch_queue;

@interface BSActionListenerController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _transactionCount;
    BSActionListener *_listener;
    unsigned int _listenerCount;
    unsigned int _listenerTearDownToken;
}

+ (id)sharedInstance;
- (id)listener;
- (void)endTransactionForListener:(id)arg1;
- (void)endTransaction;
- (void)beginTransactionForListener:(id)arg1;
- (void)beginTransaction;
- (void)dealloc;
- (id)init;

@end
