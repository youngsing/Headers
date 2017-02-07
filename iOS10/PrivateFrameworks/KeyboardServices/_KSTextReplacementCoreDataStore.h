//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCoreDataStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
    NSString *_directoryPath;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)localCloudEntryFromMocObject:(id)arg1;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (id)getSyncStateEntry;
- (_Bool)didMakeInitialPull;
- (id)getCKFetchToken;
- (void)saveCKFetchToken:(id)arg1;
- (id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)countEntriesWithPredicate:(id)arg1;
- (id)textReplacementEntriesWithLimit:(unsigned long long)arg1;
- (void)deleteTextReplacementsWithPredicate:(id)arg1;
- (void)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(_Bool)arg2;
- (void)markDeletesForTextReplacementEntries:(id)arg1;
- (id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2;
- (id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2;
- (void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2;
- (void)recordTextReplacementEntries:(id)arg1;
- (void)dealloc;
- (void)cleanup;
- (id)initWithDirectoryPath:(id)arg1;
- (id)init;

@end
