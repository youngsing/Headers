//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol HKGraphSeriesDataSourceDelegate;

@interface HKGraphSeriesDataSource : NSObject
{
    id <HKGraphSeriesDataSourceDelegate> _delegate;
    long long _minimumZoom;
    long long _maximumZoom;
    NSDate *_firstBlockStartDate;
}

@property(readonly, nonatomic) NSDate *firstBlockStartDate; // @synthesize firstBlockStartDate=_firstBlockStartDate;
@property(nonatomic) long long maximumZoom; // @synthesize maximumZoom=_maximumZoom;
@property(nonatomic) long long minimumZoom; // @synthesize minimumZoom=_minimumZoom;
@property(nonatomic) __weak id <HKGraphSeriesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1;
- (id)init;

@end

