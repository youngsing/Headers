//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLStatement.h>

__attribute__((visibility("hidden")))
@interface NSSQLiteStatement : NSSQLStatement
{
    struct sqlite3_stmt *_cachedSQLiteStatement;
}

- (void)setCachedSQLiteStatement:(struct sqlite3_stmt *)arg1;
- (struct sqlite3_stmt *)cachedSQLiteStatement;
- (void)dealloc;
- (void)finalize;
- (void)clearCaches;

@end

