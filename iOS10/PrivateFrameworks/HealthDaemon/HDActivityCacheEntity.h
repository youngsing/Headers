//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSampleEntity.h>

@interface HDActivityCacheEntity : HDSampleEntity
{
}

+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 database:(id)arg3 error:(id *)arg4 insertHandler:(CDUnknownBlockType)arg5;
+ (_Bool)supportsObjectMerging;
+ (id)activityCachesInRangeStart:(id)arg1 end:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)activityCacheForIndex:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)columnsDefinition;
+ (id)_databaseTable;

@end

