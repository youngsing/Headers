//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOLogMessageCacheManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOLogMessageInstrumentation : NSObject
{
    NSMutableArray *_registeredEventNames;
    NSMutableDictionary *_msgCountForRegisteredEvents;
    NSObject<OS_dispatch_queue> *_instrumenationQueue;
    NSObject<OS_dispatch_source> *_logMessageInstrumentationFlushTimer;
    _Bool _exitWhenAllInstrumentationLogsFlushed;
    unsigned long long _logMessageNothingToFlushCounter;
    NSString *_msgCountUserDefaultsKey;
    GEOLogMessageCacheManager *_cacheManager;
}

+ (void)disableDefaultInstrumentation;
+ (id)createDefaultInstrumentation;
+ (id)defaultInstrumentation;
- (void)waitForEmptyInstrumentationQueue:(CDUnknownBlockType)arg1;
- (void)captureLogMessageCollectionRequest:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(_Bool)arg3;
- (void)captureLogMsgCountForEventName:(id)arg1 logMsgCount:(long long)arg2 fromLogFrameworkAdaptor:(_Bool)arg3;
- (void)captureLogMessage:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(_Bool)arg3;
- (void)_registerEventName:(id)arg1;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) GEOLogMessageCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;

@end

