//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@interface EWSRelativeMonthlyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType
{
    long long _DaysOfWeek;
    long long _DayOfWeekIndex;
}

+ (id)definition;
@property(nonatomic) long long DayOfWeekIndex; // @synthesize DayOfWeekIndex=_DayOfWeekIndex;
@property(nonatomic) long long DaysOfWeek; // @synthesize DaysOfWeek=_DaysOfWeek;

@end

