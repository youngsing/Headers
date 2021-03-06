//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartCacheDataSource-Protocol.h>

@class HKDataUnit, HKHealthStore, NSString;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource>
{
    HKHealthStore *_healthStore;
    HKDataUnit *_dataUnit;
    CDUnknownBlockType _mappingFunction;
}

@property(readonly, nonatomic) CDUnknownBlockType mappingFunction; // @synthesize mappingFunction=_mappingFunction;
@property(readonly, nonatomic) HKDataUnit *dataUnit; // @synthesize dataUnit=_dataUnit;
- (void).cxx_destruct;
- (id)_seriesPointDateBeforeDate:(id)arg1 forZoom:(long long)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)operationForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataUnit:(id)arg1 healthStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

