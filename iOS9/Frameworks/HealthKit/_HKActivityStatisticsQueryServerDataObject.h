//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKActivityStatisticsQueryServerDataObject : _HKQueryServerDataObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_intervalComponents;
    double _updateInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
