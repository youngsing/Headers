//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

__attribute__((visibility("hidden")))
@interface _NSTemporaryObjectID2 : NSTemporaryObjectID
{
    id _store;
    _NS128bitWrapper *_uuid128;
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)_referenceData;
- (BOOL)isEqual:(id)arg1;
- (void)_setPersistentStore:(id)arg1;
- (BOOL)_isPersistentStoreAlive;
- (id)persistentStore;
- (id)_storeIdentifier;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;

@end

