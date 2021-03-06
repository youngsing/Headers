//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CalAbstractCDChangeTracker.h>

@class NSURL;

@interface CalSQLCDChangeTracker : CalAbstractCDChangeTracker
{
    struct sqlite3 *_db;
    int _clientGeneration;
    struct sqlite3_stmt *_updateObjectStatement;
    struct sqlite3_stmt *_modifiedObjectsForEntityStatement;
    struct sqlite3_stmt *_getAllModificationsStatement;
    struct sqlite3_stmt *clearProcessedChangesStatement;
    struct sqlite3_stmt *_getGenerationStatement;
    struct sqlite3_stmt *_setGenerationStatement;
    NSURL *_sourceURL;
    NSURL *_storageURL;
    id _persistentStoreCoordinator;
}

+ (id)usingChangesAtURL:(id)arg1;
+ (id)trackChangesFromStoreAtURL:(id)arg1 toURL:(id)arg2 directlyMonitorSaves:(BOOL)arg3;
+ (id)trackContextChangesIn:(id)arg1 storingAtURL:(id)arg2;
@property(retain) id persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) NSURL *storageURL; // @synthesize storageURL=_storageURL;
@property(retain) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)_updateObjectIdentifier:(id)arg1 withEntityName:(id)arg2 asDeleted:(BOOL)arg3;
- (BOOL)_commitTransaction;
- (BOOL)_beginTransaction;
- (void)_finishStatements;
- (BOOL)_prepareStatements;
- (BOOL)_createTables;
- (void)dealloc;
- (void)clearAllStoredChanges;
- (void)clearProcessedChanges;
- (void)_setGeneration:(int)arg1;
- (void)_incrementGeneration;
- (int)getGeneration;
- (id)_readGeneration;
- (id)_readFromDB;
- (void)_finishStmt:(struct sqlite3_stmt **)arg1;
- (BOOL)_prepareStmt:(struct sqlite3_stmt **)arg1 text:(id)arg2;
- (id)initUsingChangesAtURL:(id)arg1;
- (id)openDatabaseAtURL:(id)arg1 createIfMissing:(BOOL)arg2;
- (BOOL)getAllChanges;
- (id)syncSchemaEntityNameOf:(id)arg1;

@end

