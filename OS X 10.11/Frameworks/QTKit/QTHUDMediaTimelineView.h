//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSSet, QTHUDMediaTimelineTracksView;
@protocol QTHUDMediaTimelineViewDelegate;

@interface QTHUDMediaTimelineView : NSView
{
    CDStruct_900afa40 _mediaDuration;
    CDStruct_900afa40 _mediaTimeOffset;
    double _minimumPointsPerSecond;
    QTHUDMediaTimelineTracksView *_tracksView;
    BOOL _hasEnclosingScrollView;
    BOOL _pinAtMinimumPointsPerSecond;
    BOOL _mutatingTracksViewTimes;
    id <QTHUDMediaTimelineViewDelegate> _delegate;
}

+ (CDStruct_900afa40)mediaTimeForPosition:(double)arg1 outOfMediaDuration:(CDStruct_900afa40)arg2 timeOffset:(CDStruct_900afa40)arg3 inViewWithWidth:(double)arg4;
+ (double)positionForMediaTime:(CDStruct_900afa40)arg1 outOfMediaDuration:(CDStruct_900afa40)arg2 timeOffset:(CDStruct_900afa40)arg3 inViewWithWidth:(double)arg4;
@property(nonatomic) id <QTHUDMediaTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)rescalePointsPerSecond;
@property(readonly, nonatomic) BOOL canChangePointsPerSecond; // @dynamic canChangePointsPerSecond;
@property(readonly, nonatomic) double maximumPointsPerSecond; // @dynamic maximumPointsPerSecond;
@property(readonly, nonatomic) double minimumPointsPerSecond; // @dynamic minimumPointsPerSecond;
@property double pointsPerSecond; // @dynamic pointsPerSecond;
@property(nonatomic) BOOL showsRangeMarkers; // @dynamic showsRangeMarkers;
@property(copy, nonatomic) NSSet *rangeMarkers; // @dynamic rangeMarkers;
@property(nonatomic) CDStruct_900afa40 currentMediaTime; // @dynamic currentMediaTime;
@property(nonatomic) BOOL usesSelectionDetents; // @dynamic usesSelectionDetents;
@property(copy, nonatomic) NSArray *selectionDetents; // @dynamic selectionDetents;
@property(nonatomic) CDStruct_900afa40 maximumSelectionDuration; // @dynamic maximumSelectionDuration;
@property(nonatomic) CDStruct_900afa40 minimumSelectionDuration; // @dynamic minimumSelectionDuration;
@property(nonatomic) CDStruct_900afa40 selectionEnd; // @dynamic selectionEnd;
@property(nonatomic) CDStruct_900afa40 selectionStart; // @dynamic selectionStart;
@property(nonatomic) CDStruct_900afa40 mediaTimeOffset; // @dynamic mediaTimeOffset;
@property(nonatomic) CDStruct_900afa40 mediaDuration; // @dynamic mediaDuration;
@property(nonatomic) BOOL showsTrackPreviews; // @dynamic showsTrackPreviews;
- (void)removeObjectFromTimelineTracksAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inTimelineTracksAtIndex:(unsigned long long)arg2;
- (id)timelineTracks;
- (unsigned long long)countForTimelineTracks;
- (void)superviewFrameDidChange:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

