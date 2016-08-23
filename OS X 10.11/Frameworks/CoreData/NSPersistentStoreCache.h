//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : NSObject
{
    id _externalData;
    unsigned long long _capacity;
}

+ (void)initialize;
- (id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 timestamp:(double)arg3;
- (void)registerAncillaryOrderKeys:(id)arg1 forSourceObjectID:(id)arg2 forProperty:(id)arg3 options:(unsigned int)arg4 andTimestamp:(double)arg5;
- (id)externalDataForSourceObjectID:(id)arg1 forProperty:(id)arg2 timestamp:(double)arg3;
- (void)registerExternalData:(id)arg1 forSourceObjectID:(id)arg2 forProperty:(id)arg3 options:(unsigned int)arg4 andTimestamp:(double)arg5;
- (unsigned int)optionsForObjectID:(id)arg1;
- (id)externalDataForObjectID:(id)arg1 timestamp:(double)arg2;
- (void)registerExternalData:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (void)forgetExternalDataForObjectID:(id)arg1;
- (int)refCountForObjectID:(id)arg1;
- (void)incrementRefCountForObjectID:(id)arg1;
- (void)decrementRefCountForObjectID:(id)arg1;
- (void)forgetAllExternalData;
- (void)_doForgetAllExternalData:(void *)arg1;
- (void)dealloc;
- (void)_growRegistrationCollectionTo:(unsigned long long)arg1;
- (id)init;
- (id)_initWithValueCallbacks:(void *)arg1;
- (void)_createExternalDataDictWithValueCallbacks:(void *)arg1;

@end

