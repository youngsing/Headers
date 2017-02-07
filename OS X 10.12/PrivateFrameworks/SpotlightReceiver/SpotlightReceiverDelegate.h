//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightReceiver/NSXPCListenerDelegate-Protocol.h>
#import <SpotlightReceiver/SpotlightReceiverJob-Protocol.h>

@class NSMutableSet, NSString;
@protocol SpotlightReceiver;

@interface SpotlightReceiverDelegate : NSObject <NSXPCListenerDelegate, SpotlightReceiverJob>
{
    NSObject<SpotlightReceiver> *_receiver;
    NSMutableSet *_connections;
}

+ (void)startListening:(id)arg1 withReceiver:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSObject<SpotlightReceiver> *receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchSetupInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithReceiver:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)xpcInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
