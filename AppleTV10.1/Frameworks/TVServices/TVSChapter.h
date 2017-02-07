//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVSDateRange, TVSImageProxy, TVSTimeRange;

@interface TVSChapter : NSObject
{
    TVSTimeRange *_timeRange;
    TVSImageProxy *_imageProxy;
    NSString *_localizedName;
    NSString *_chapterDescription;
    TVSDateRange *_dateRange;
}

@property(retain, nonatomic) TVSImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) TVSDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) TVSTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSString *chapterDescription; // @synthesize chapterDescription=_chapterDescription;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;

@end
