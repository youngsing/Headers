//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAgent/CalAgentLinkAddressBook-Protocol.h>

@protocol OS_dispatch_queue;

@interface CNAgentAddressBookProxy : NSObject <CalAgentLinkAddressBook>
{
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void).cxx_destruct;
- (void)updateClientSideCacheWithReply:(CDUnknownBlockType)arg1;
- (void)registerWithAgent;
- (void)broadcastToOtherClients:(id)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)broadcastToOtherClients:(id)arg1 withObject:(id)arg2;
- (void)broadcastToOtherClients:(id)arg1;
- (void)saveWithRemoteObjectCache:(id)arg1 basePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteSubGroupsForRemoteParentGroup:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteSmartGroupsForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remotePersonWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remotePersonForMeWithBasePersistenceURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)remotePeopleForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteParentGroupsForRemoteSubGroup:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteInfoWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteInfosForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteGroupWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteGroupsForRemotePerson:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteGroupsForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)remoteCustomPropertiesWithBasePersistenceURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)remoteAccountCollectionForBasePersistenceURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)propertyNameRepresentsCustomProperty:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)persistentStoreURLForRemoteRecord:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)membersOfRemoteGroup:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fullNameForRemotePerson:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchSmartGroupsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)fetchPeopleWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)fetchGroupsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)createInfoWithBasePersistenceURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)coreDataPredicateFromRemoteSearchElement:(id)arg1 withBasePersistenceURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)init;

@end

