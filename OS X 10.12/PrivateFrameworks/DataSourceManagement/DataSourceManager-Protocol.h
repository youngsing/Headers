//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataSourceManagement/NSObject-Protocol.h>

@class DSMMode, NSArray, NSDictionary, NSString;

@protocol DataSourceManager <NSObject>
+ (id)sharedInstance;
- (NSDictionary *)getProcessedDataStreams;
- (void)processingHasCompleted;
- (void)dataGatheringHasFinished;
- (void)dataGatheringWillStart;
- (BOOL)setMinimumPollingIntervalInNs:(unsigned long long)arg1;
- (BOOL)selectDataStreamsByName:(NSArray *)arg1 withDataManagerMode:(DSMMode *)arg2;
- (NSDictionary *)supportedModes;
- (BOOL)usesKernelTracingInMode:(DSMMode *)arg1;
- (NSString *)detailedDescription;
- (NSString *)dataSourceName;
@end

