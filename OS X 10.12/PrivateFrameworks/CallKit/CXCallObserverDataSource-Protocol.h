//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction, NSDictionary, NSString;
@protocol CXCallObserverDataSourceDelegate;

@protocol CXCallObserverDataSource <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
- (void)invalidate;
- (void)requestTransaction:(CXTransaction *)arg1 forExtensionIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeDelegate:(id <CXCallObserverDataSourceDelegate>)arg1;
- (void)addDelegate:(id <CXCallObserverDataSourceDelegate>)arg1;
@end

