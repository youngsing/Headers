//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFPersistenceManager : NSObject
{
}

+ (id)managedObjectContext;
+ (id)existingNoteForExternalRecordURL:(id)arg1 error:(id *)arg2;
+ (id)existingObjectFromContext:(id)arg1 withExternalRecordURL:(id)arg2 error:(id *)arg3;
+ (id)notesContainerLibraryURL;
+ (BOOL)_backupExistingStore:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;
+ (id)_storeURLForVersion:(unsigned long long)arg1 inDataDirectory:(id)arg2;
+ (id)_validStoreURLInDataDirectory:(id)arg1 movingOldStoreIfNeeded:(BOOL)arg2 withCoordinator:(id)arg3 error:(id *)arg4;
+ (id)persistentStoreCoordinatorAddPersistentStoreIfNecessary:(BOOL)arg1;
+ (id)persistentStoreCoordinator;
+ (void)addPersistentStoreIfNeeded;
+ (BOOL)isAppSandboxed;
+ (BOOL)isRunningInNotes;
+ (void)setShouldWriteExternalRecords:(BOOL)arg1;
+ (BOOL)shouldWriteExternalRecords;
+ (void)setStoreCoordinatorIsReadOnly:(BOOL)arg1;
+ (BOOL)storeCoordinatorIsReadOnly;

@end
