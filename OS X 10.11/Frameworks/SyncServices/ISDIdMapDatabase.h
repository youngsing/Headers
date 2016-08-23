//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncServices/ISDDatabase.h>

@interface ISDIdMapDatabase : ISDDatabase
{
    struct sqlite3_stmt *_addMappingStatement;
    struct sqlite3_stmt *_allMappingStatement;
    struct sqlite3_stmt *_getMappingForGlobalIdStatement;
    struct sqlite3_stmt *_getMappingForLocalIdStatement;
    struct sqlite3_stmt *_removeMappingStatement;
    struct sqlite3_stmt *_removeLocalIdMappingStatement;
    struct sqlite3_stmt *_updateMappingStatement;
    struct sqlite3_stmt *_removeMappingsForLocalIdsStatement;
    struct sqlite3_stmt *_removeMappingsForGlobalIdsStatement;
    struct sqlite3_stmt *_purgeMappingsForLocalIdsStatement;
    unsigned long long _flushCount;
}

+ (id)defaultDatabasePath:(id)arg1;
+ (BOOL)createDatabaseAtPath:(id)arg1;
- (void)removeAllMappings;
- (id)allMappings;
- (void)updateMapping:(id)arg1;
- (id)getOrCreateMappingForGlobalId:(id)arg1 useLocalIdAsGlobalId:(BOOL)arg2;
- (id)getOrCreateMappingForGlobalId:(id)arg1;
- (id)getMappingForLocalId:(id)arg1;
- (id)getMappingForGlobalId:(id)arg1;
- (id)getMappingForId:(id)arg1 isLocal:(BOOL)arg2;
- (void)removeMappingsForEntityNames:(id)arg1 withTruth:(id)arg2 andClearLocalIdsCache:(id)arg3;
- (void)removeMappingsForGlobalIdentifiers:(id)arg1;
- (void)removePurgedMappings;
- (void)purgeMappingsForLocalIdentifiers:(id)arg1;
- (void)removeMappingsForLocalIdentifiers:(id)arg1;
- (void)removeMappingForLocalId:(id)arg1;
- (void)removeMappingForGlobalId:(id)arg1;
- (void)addMapping:(id)arg1;
- (void)addMappingFromGlobalId:(id)arg1 toLocalId:(id)arg2;
- (void)recreateIndexes;
- (void)dropIndexes;
- (void)resetState;
- (void)enableFlush;
- (void)disableFlushAndLockImmediately;
- (void)disableFlush;
- (void)finalize;
- (void)dealloc;
- (void)closeDatabase;
- (void)finalizeStatements;
- (id)initWithDatabaseInDirectory:(id)arg1;

@end

