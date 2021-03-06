//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface TVSChapterCollection : NSObject
{
    _Bool _shouldStartPlaybackFromStartDate;
    _Bool _shouldDisplayChapterMarkers;
    _Bool _shouldShowDescriptionOnChapterSkip;
    NSString *_name;
    NSArray *_chapters;
    long long _type;
    id _backingData;
    NSDate *_startDate;
    double _refreshInterval;
    NSURL *_refreshURL;
}

@property(copy, nonatomic) NSURL *refreshURL; // @synthesize refreshURL=_refreshURL;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) _Bool shouldShowDescriptionOnChapterSkip; // @synthesize shouldShowDescriptionOnChapterSkip=_shouldShowDescriptionOnChapterSkip;
@property(nonatomic) _Bool shouldDisplayChapterMarkers; // @synthesize shouldDisplayChapterMarkers=_shouldDisplayChapterMarkers;
@property(nonatomic) _Bool shouldStartPlaybackFromStartDate; // @synthesize shouldStartPlaybackFromStartDate=_shouldStartPlaybackFromStartDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) id backingData; // @synthesize backingData=_backingData;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)nearestChapterForDate:(id)arg1;
- (id)chapterForDate:(id)arg1;
- (id)nearestChapterForTime:(double)arg1;
- (id)chapterForTime:(double)arg1;
- (id)init;

@end

