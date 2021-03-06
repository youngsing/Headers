//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation
{
    NSArray *_zoneIDs;
    CDUnknownBlockType _zoneRepairedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType zoneRepairedBlock; // @synthesize zoneRepairedBlock=_zoneRepairedBlock;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void).cxx_destruct;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (unsigned long long)activityStart;
- (id)initWithZoneIDsToRepair:(id)arg1;

@end

