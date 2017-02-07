//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISSingleton-Protocol.h>

@class ISStoreClient, NSString;

@interface CKStoreClient : NSObject <ISSingleton>
{
    ISStoreClient *_storeClient;
}

+ (void)setStoreFrontID:(id)arg1;
+ (id)storeFrontID;
+ (BOOL)isBookStoreClient;
+ (BOOL)isAppStoreClient;
+ (void)configureClientAsType:(long long)arg1;
+ (id)_serviceProxy;
+ (id)sharedInstance;
@property(readonly) ISStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (id)primaryAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
