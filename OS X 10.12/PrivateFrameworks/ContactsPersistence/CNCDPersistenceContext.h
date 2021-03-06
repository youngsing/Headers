//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;
@protocol CNCDPersistenceBackend, CNCDPersistenceChangesNotifier;

@interface CNCDPersistenceContext : NSObject
{
    id <CNCDPersistenceBackend> _persistenceBackend;
    NSManagedObjectContext *_managedObjectContext;
    id <CNCDPersistenceChangesNotifier> _changesNotifier;
}

- (id)defaultPersistentStore;
- (id)defaultContainer;
- (id)exchangeAccountContainers;
- (id)accountContainers;
- (id)storeForContainer:(id)arg1 inCoordinator:(id)arg2;
- (id)storesForContainers:(id)arg1;
- (id)storeForContainer:(id)arg1;
- (void)assignManagedObject:(id)arg1 toStoreWithContainerIdentifier:(id)arg2;
- (id)storeUrlForContainerIdentifer:(id)arg1;
- (void)performBlockAndWaitWithContextAndCoordinator:(CDUnknownBlockType)arg1;
- (void)performBlockAndWaitWithManagedObjectContext:(CDUnknownBlockType)arg1;
- (id)performResultBlockWithManagedObjectContext:(CDUnknownBlockType)arg1;
- (BOOL)saveManagedObjectContext:(id *)arg1;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (id)notificationID;
- (void)dealloc;
- (id)initWithPersistenceBackend:(id)arg1 managedObjectContext:(id)arg2 changesNotifier:(id)arg3;
- (id)initWithPersistenceBackend:(id)arg1 managedObjectContext:(id)arg2;

@end

