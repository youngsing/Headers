//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKPredicate.h>

@class NSString;

@interface EKPredicateCalendarItem : EKPredicate
{
    BOOL _disableBackingStoreUpdate;
    int _sortOrder;
    NSString *_title;
    NSString *_calendarTitle;
    unsigned long long _maxResults;
    NSString *_searchTerm;
}

+ (BOOL)string:(id)arg1 containsSubstring:(id)arg2;
+ (id)predicateWithCalendars:(id)arg1;
@property(nonatomic) BOOL disableBackingStoreUpdate; // @synthesize disableBackingStoreUpdate=_disableBackingStoreUpdate;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)mdQueryString;
- (Class)entityClass;
- (BOOL)isEventQuery;
- (BOOL)_includeCalendarTitleInSearchTerm;
- (id)initWithCalendars:(id)arg1;

@end

