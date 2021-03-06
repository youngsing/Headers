//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMGyroData.h>

@class NSDate;

@interface CMRecordedGyroData : CMGyroData
{
    double _startDateValue;
    CDStruct_31142d93 _rotationRate;
    double _timestampValue;
    float _temperatureValue;
    unsigned long long _identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;
@property(readonly) NSDate *startDate;
- (double)timestamp;
@property(readonly) float temperature;
- (CDStruct_31142d93)rotationRate;
- (void)dealloc;
- (void)resetWithData:(struct CMGyro50 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMGyro50 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;

@end

