//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessagesKit/SOHelper.h>

#import <MessagesKit/SOAccountInfoHelperReceiverProtocol-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SOAccountInfoHelper : SOHelper <SOAccountInfoHelperReceiverProtocol>
{
    NSMutableDictionary *_iMessageIDToChangeBlockGUIDs;
    NSMutableDictionary *_facetimeIDToChangeBlockGUIDs;
    NSMutableDictionary *_changeBlockGUIDToBlock;
    NSObject<OS_dispatch_queue> *_accountInfoDispatchQueue;
}

+ (id)remoteReceiverProtocol;
+ (id)receiverProtocol;
+ (id)sharedInstance;
+ (id)bundleName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountInfoDispatchQueue; // @synthesize accountInfoDispatchQueue=_accountInfoDispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *changeBlockGUIDToBlock; // @synthesize changeBlockGUIDToBlock=_changeBlockGUIDToBlock;
@property(retain, nonatomic) NSMutableDictionary *facetimeIDToChangeBlockGUIDs; // @synthesize facetimeIDToChangeBlockGUIDs=_facetimeIDToChangeBlockGUIDs;
@property(retain, nonatomic) NSMutableDictionary *iMessageIDToChangeBlockGUIDs; // @synthesize iMessageIDToChangeBlockGUIDs=_iMessageIDToChangeBlockGUIDs;
- (void).cxx_destruct;
- (id)faceTimeIDsForABPersonID:(id)arg1;
- (id)_generateGUID;
- (void)updatedMessagesStatusID:(id)arg1;
- (void)updatedFaceTimeStatusID:(id)arg1;
- (void)removeBlock:(id)arg1;
- (id)runBlock:(CDUnknownBlockType)arg1 onIMessageIDChange:(id)arg2;
- (id)runBlock:(CDUnknownBlockType)arg1 onFaceTimeIDChange:(id)arg2;
- (id)_runBlock:(CDUnknownBlockType)arg1 onIDChange:(id)arg2 withStorage:(id)arg3;
- (void)setValue:(id)arg1 forControllerKey:(id)arg2;
- (void)disableLegacyAV;
- (void)enableLegacyAV;
- (void)addValidFaceTimeID:(id)arg1;
- (void)addValidMessagesID:(id)arg1;
- (void)addInvalidFaceTimeID:(id)arg1;
- (void)addInvalidMessagesID:(id)arg1;
- (long long)faceTimeAliasStateForID:(id)arg1;
- (long long)messagesAliasStateForID:(id)arg1;
- (id)_validFTHandles;
- (id)_validMessagesHandles;
- (id)_invalidFTHandles;
- (id)_invalidMessagesHandles;
- (long long)faceTimeAccountState;
- (long long)iMessageAccountState;
- (long long)messagesAccountState;
- (long long)bonjourAccountState;
- (BOOL)useLegacyAV;
- (BOOL)shouldShowStatus;
- (BOOL)iMessageAccountOnly;
- (long long)_stateForKey:(id)arg1;
- (long long)iMessageAccountStateBlocking;
- (long long)faceTimeAccountStateBlocking;
- (long long)messagesAccountStateBlocking;
- (long long)bonjourAccountStateBlocking;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
