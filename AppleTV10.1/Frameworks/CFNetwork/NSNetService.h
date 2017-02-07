//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol NSNetServiceDelegate;

@interface NSNetService : NSObject
{
    id _netService;
    id _delegate;
    id _reserved;
}

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;
- (id)TXTRecordData;
- (_Bool)setTXTRecordData:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)_monitors;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (_Bool)getInputStream:(out id *)arg1 outputStream:(out id *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct __CFNetService *)_internalNetService;
- (void)finalize;
- (void)dealloc;
- (void)_dispatchCallBackWithError:(CDStruct_59046461)arg1;
- (void)stop;
- (void)publish;
- (void)publishWithOptions:(unsigned long long)arg1;
- (void)publishWithServer:(unsigned long long)arg1;
- (id)normalizedType;
- (void)_internal_publishWithOptions:(unsigned long long)arg1;
@property(readonly) long long port;
@property(readonly, copy) NSArray *addresses;
@property(readonly, copy) NSString *hostName;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *type;
@property(readonly, copy) NSString *domain;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (void)_setIncludesAWDL:(_Bool)arg1;
- (_Bool)_includesAWDL;
@property _Bool includesPeerToPeer;
@property id <NSNetServiceDelegate> delegate;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (id)initWithCFNetService:(struct __CFNetService *)arg1;

@end
