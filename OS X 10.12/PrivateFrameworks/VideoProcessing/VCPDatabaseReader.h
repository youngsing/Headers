//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VCPDatabaseReader : NSObject
{
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;
    struct sqlite3 *_database;
}

- (void).cxx_destruct;
- (id)queryAssetsAnalyzedSince:(id)arg1;
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisForAsset:(id)arg1;
- (BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id *)arg2;
- (int)executeDatabaseBlock:(CDUnknownBlockType)arg1;
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;
- (int)queryHeaderForAsset:(id)arg1 analysis:(id *)arg2 assetId:(long long *)arg3;
- (void)closeDatabase;
- (int)openDatabase;
- (void)dealloc;
- (id)init;

@end
