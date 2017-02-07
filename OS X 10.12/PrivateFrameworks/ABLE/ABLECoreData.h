//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface ABLECoreData : NSObject
{
    NSManagedObjectModel *_cdModel;
    NSManagedObjectContext *_cdcontext;
    NSPersistentStoreCoordinator *_cdcoordinator;
}

@property(readonly) NSPersistentStoreCoordinator *cdcoordinator; // @synthesize cdcoordinator=_cdcoordinator;
@property(readonly) NSManagedObjectContext *cdcontext; // @synthesize cdcontext=_cdcontext;
@property(readonly) NSManagedObjectModel *cdModel; // @synthesize cdModel=_cdModel;
- (void).cxx_destruct;
- (void)saveResponseData:(CDUnknownBlockType)arg1;
- (void)savePredictedEvents:(CDUnknownBlockType)arg1;
- (void)savePrediction:(CDUnknownBlockType)arg1;
- (void)saveEntries;
- (id)context;
- (id)coordinator;
- (id)newContextWithCoordinator:(id)arg1;
- (id)createCoordinatorFromDatabasePath:(id)arg1;
- (id)model;
- (void)obliterateDatabasePath:(id)arg1 dueToError:(id)arg2;
- (void)removeFileAt:(id)arg1;
- (void)saveContext:(id)arg1 withDB:(id)arg2 withCoordinator:(id)arg3;
- (id)init;

@end
