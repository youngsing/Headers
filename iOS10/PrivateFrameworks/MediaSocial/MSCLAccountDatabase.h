//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSSQLiteDatabase.h>

@interface MSCLAccountDatabase : SSSQLiteDatabase
{
}

+ (id)sharedDatabase;
- (void)_migrateToSchemaVersion4;
- (void)_migrateToSchemaVersion3;
- (void)_migrateToSchemaVersion2;
- (void)_createDatabaseSchema;
- (id)init;

@end

