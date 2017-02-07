//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _CDDailyProgressForecast : NSObject
{
    double _temporalResolution;
    NSArray *_mean;
    NSArray *_var;
    double _averageVar;
}

@property double averageVar; // @synthesize averageVar=_averageVar;
@property(retain) NSArray *var; // @synthesize var=_var;
@property(retain) NSArray *mean; // @synthesize mean=_mean;
@property double temporalResolution; // @synthesize temporalResolution=_temporalResolution;
- (void).cxx_destruct;
- (id)description;
- (double)averageProgressVariance;
- (double)predictedProgressVarianceForTimeOfDay:(id)arg1;
- (double)predictedProgressForTimeOfDay:(id)arg1;
- (id)initWithMean:(id)arg1 andVariance:(id)arg2;

@end
