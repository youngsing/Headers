//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSFastEnumeration-Protocol.h>
#import <Photos/PHObjectIDBackedFetchResult-Protocol.h>

@class NSArray, NSFetchRequest, NSNumber, NSSet, NSString, PHBatchFetchingArray, PHQuery, _PHFetchRequestWrapper;
@protocol OS_dispatch_queue;

@interface PHFetchResult : NSObject <PHObjectIDBackedFetchResult, NSCopying, NSFastEnumeration>
{
    PHBatchFetchingArray *_fetchedObjects;
    NSArray *_seedOIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    _Bool _registeredForChangeNotificationDeltas;
    NSString *_fetchType;
    NSSet *_fetchPropertySets;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    unsigned long long _audiosCount;
    NSNumber *_prefetchCount;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    _Bool _preventsClearingOIDCache;
    PHQuery *_query;
    long long _chunkSizeForFetch;
}

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectCount:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(_Bool)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1;
@property(nonatomic) _Bool preventsClearingOIDCache; // @synthesize preventsClearingOIDCache=_preventsClearingOIDCache;
@property long long chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
@property(readonly) NSSet *fetchPropertySets; // @synthesize fetchPropertySets=_fetchPropertySets;
@property(readonly) NSString *fetchType; // @synthesize fetchType=_fetchType;
@property(readonly) PHQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)description;
- (id)localIdentifiers;
- (void)getMediaTypeCounts;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectsAtIndexes:(id)arg1;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(_Bool)arg1;
- (_Bool)isRegisteredForChangeNotificationDeltas;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)objectIDAtIndex:(unsigned long long)arg1;
@property(readonly) NSSet *fetchedObjectIDsSet;
@property(readonly) NSArray *fetchedObjectIDs;
- (id)containerIdentifier;
- (long long)collectionFetchType;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
@property(readonly) NSArray *fetchedObjects;
@property(readonly) NSFetchRequest *fetchRequest;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (id)changeHandlingKey;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)copyWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(_Bool)arg3 usingManagedObjectContext:(id)arg4;
- (id)pl_photoLibraryObject;

@end
