//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalSpotlight : NSObject
{
}

+ (id)managedCalendarItemResultsForQuery:(struct __MDQuery *)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 context:(id)arg4;
+ (id)managedCalendarItemResultsForCalMDQuery:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 context:(id)arg4;
+ (id)managedCalendarItemResultsForQuery:(struct __MDQuery *)arg1 startIndex:(long long)arg2 context:(id)arg3;
+ (id)managedCalendarItemResultsForQuery:(struct __MDQuery *)arg1 context:(id)arg2;
+ (struct __MDQuery *)newQueryForMDQueryString:(id)arg1 calendars:(id)arg2;
+ (id)newCalMDQueryForMDQueryString:(id)arg1 calendars:(id)arg2;
+ (id)managedCalendarItemsMatchingMDQueryString:(id)arg1 calendars:(id)arg2 context:(id)arg3;
+ (id)mdQueryStringForIndexSearchElement:(id)arg1;

@end
