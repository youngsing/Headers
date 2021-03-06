//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSMutableArray, NSURL;
@protocol OS_dispatch_queue;

@interface SUScan : NSObject
{
    NSURL *catalogURL;
    NSArray *previousProducts;
    NSArray *preferredLocalizations;
    BOOL dontRunMakeQueues;
    NSDictionary *installedPrinters;
    BOOL shouldBuildCacheOnly;
    NSArray *filteredProductKeys;
    BOOL ignorePPDVersionCache;
    NSDictionary *distributionEnvironment;
    BOOL isBackgroundScan;
    double _progressValue;
    BOOL _isExecuting;
    int _productsCount;
    int _productsComplete;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSArray *installableProducts;
    NSMutableArray *_packageSources;
    NSError *_error;
    BOOL _didLoadAllResourcesSuccessfully;
    NSDictionary *_distributionEvaluationMetainfo;
}

+ (long long)_resultCodeFromScan:(id)arg1;
@property(retain) NSDictionary *distributionEvaluationMetainfo; // @synthesize distributionEvaluationMetainfo=_distributionEvaluationMetainfo;
@property BOOL isBackgroundScan; // @synthesize isBackgroundScan;
@property(retain) NSDictionary *distributionEnvironment; // @synthesize distributionEnvironment;
@property BOOL ignorePPDVersionCache; // @synthesize ignorePPDVersionCache;
@property(retain) NSArray *filteredProductKeys; // @synthesize filteredProductKeys;
@property BOOL shouldBuildCacheOnly; // @synthesize shouldBuildCacheOnly;
@property(retain) NSDictionary *installedPrinters; // @synthesize installedPrinters;
@property BOOL dontRunMakeQueues; // @synthesize dontRunMakeQueues;
@property(retain) NSArray *preferredLocalizations; // @synthesize preferredLocalizations;
@property(retain) NSArray *previousProducts; // @synthesize previousProducts;
@property(retain) NSURL *catalogURL; // @synthesize catalogURL;
- (bycopy id)installableProducts;
- (BOOL)hasInstallableProducts;
- (BOOL)didLoadAllResourcesSuccessfully;
- (id)error;
- (BOOL)isFinished;
- (double)progressValue;
- (BOOL)isExecuting;
- (void)performSynchronousScan;
- (void)start;
- (void)_updatePackageSourcesWithCatalog:(id)arg1;
- (void)_scanMain:(id)arg1;
- (id)_clientDescription;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

