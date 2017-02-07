//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, NSString, SKUIReloadConfigurationOperation;

@interface SKUIConfigurationPreloader : NSObject
{
    NSString *_configurationCachePath;
    NSOperationQueue *_workQueue;
    NSMutableArray *_completionBlocks;
    SKUIReloadConfigurationOperation *_pendingReloadOperation;
    NSDictionary *_loadedConfiguration;
}

@property(retain, nonatomic) NSDictionary *loadedConfiguration; // @synthesize loadedConfiguration=_loadedConfiguration;
@property(retain, nonatomic) SKUIReloadConfigurationOperation *pendingReloadOperation; // @synthesize pendingReloadOperation=_pendingReloadOperation;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) NSString *configurationCachePath; // @synthesize configurationCachePath=_configurationCachePath;
- (void).cxx_destruct;
- (void)finishPreloadingConfiguration:(id)arg1 error:(id)arg2;
- (void)preloadConfigurationForPurpose:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)newReloadConfigurationOperation;
@property(readonly) _Bool hasExistingConfigurationCache;
- (id)init;
- (id)initWithConfigurationCachePath:(id)arg1;

@end
