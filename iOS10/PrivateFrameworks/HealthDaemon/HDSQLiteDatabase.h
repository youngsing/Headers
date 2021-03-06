//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;
@protocol HDSQLiteDatabaseDelegate;

@interface HDSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    _Bool _isInTransaction;
    _Bool _requiresRollback;
    long long _transactionType;
    struct __CFDictionary *_statementCache;
    NSMutableDictionary *_attachedDatabaseURLsByName;
    struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> _activeStatements;
    _Bool _isHandlingTransactionEnd;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    _Bool _isWriter;
    _Bool _checkpointRequired;
    NSURL *_fileURL;
    id <HDSQLiteDatabaseDelegate> _delegate;
}

+ (_Bool)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 resultCode:(int *)arg3 error:(id *)arg4;
+ (id)virtualFilesystemModule;
+ (id)highFrequencyDatabaseURLWithHomeDirectoryPath:(id)arg1;
+ (id)protectedDatabaseURLWithHomeDirectoryPath:(id)arg1;
+ (id)mainDatabaseURLWithHomeDirectoryPath:(id)arg1;
@property(nonatomic) _Bool checkpointRequired; // @synthesize checkpointRequired=_checkpointRequired;
@property(nonatomic) __weak id <HDSQLiteDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isWriter; // @synthesize isWriter=_isWriter;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_assertNoActiveStatements;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3;
- (id)dumpSchemaWithError:(id *)arg1;
- (id)_schemaForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)isDatabaseWithNameAttached:(id)arg1;
- (_Bool)detachDatabaseWithName:(id)arg1 error:(id *)arg2;
- (_Bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id *)arg3;
- (_Bool)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id *)arg2;
- (_Bool)enableIncrementalAutovacuumWithError:(id *)arg1;
- (_Bool)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (_Bool)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id *)arg5;
- (_Bool)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id *)arg3;
- (_Bool)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id *)arg3;
- (void)requireRollback;
- (void)onCommit:(CDUnknownBlockType)arg1 orRollback:(CDUnknownBlockType)arg2;
- (_Bool)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long *)arg3 error:(id *)arg4;
- (_Bool)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id *)arg4;
- (id)lastInsertRowID;
- (long long)userVersionWithDatabaseName:(id)arg1 error:(id *)arg2;
- (_Bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id *)arg3;
- (void)_resetStatement:(struct sqlite3_stmt *)arg1 finalize:(_Bool)arg2;
- (_Bool)_executeSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
- (_Bool)executeUncachedSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (_Bool)_prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)performTransactionWithType:(long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)getLastErrorWithResultCode:(int)arg1;
- (_Bool)_executeSQL:(id)arg1 error:(id *)arg2 retryIfBusy:(_Bool)arg3;
- (_Bool)_executeSQL:(id)arg1 error:(id *)arg2;
- (_Bool)_verifyDatabaseOpenAndReturnError:(id *)arg1;
- (void)accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (void)close;
- (int)openForReadingWithError:(id *)arg1;
- (int)openWithError:(id *)arg1;
- (int)_openForWriting:(_Bool)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2;
- (_Bool)accessHFDForWritingWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)accessHFDForReadingWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)highFrequenceDatabaseURL;
- (_Bool)isProtectedDatabaseAttached;
- (_Bool)detachProtectedDatabaseWithError:(id *)arg1;
- (_Bool)attachProtectedDatabaseWithURL:(id)arg1 error:(id *)arg2;

@end

