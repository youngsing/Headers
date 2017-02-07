//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerSchedulerDelegate-Protocol.h>
#import <Navigation/MNTracePlayerTimelineStreamDelegate-Protocol.h>

@class GEOETAUpdater, MNLocation, MNTrace, MNTracePlayerETAUpdater, MNTracePlayerScheduler, MNTracePlayerTimelineStream, NSData, NSDate, NSHashTable, NSString;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTracePlayerTimelineStreamDelegate>
{
    MNTrace *_trace;
    NSHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    _Bool _isPlaying;
    _Bool _isPaused;
    double _duration;
    int _mainTransportType;
    double _speedMultiplier;
    _Bool _forceDirectionsResponsesFromTrace;
    MNTracePlayerTimelineStream *_directionsStream;
    _Bool _shouldPlayETARequests;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
}

@property(nonatomic) _Bool forceDirectionsResponsesFromTrace; // @synthesize forceDirectionsResponsesFromTrace=_forceDirectionsResponsesFromTrace;
@property(readonly, nonatomic) GEOETAUpdater *etaUpdater; // @synthesize etaUpdater=_etaUpdater;
@property(nonatomic) _Bool shouldPlayETARequests; // @synthesize shouldPlayETARequests=_shouldPlayETARequests;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(readonly, nonatomic) int mainTransportType; // @synthesize mainTransportType=_mainTransportType;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(unsigned long long)arg1;
- (void)_createTimelineStreams;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;
@property(readonly, nonatomic) unsigned long long selectedRouteIndex;
@property(readonly, nonatomic) NSData *selectedRouteID;
@property(readonly, nonatomic) NSDate *currentLocationDate;
@property(readonly, nonatomic) double position;
- (void)jumpToBookmarkAtIndex:(unsigned long long)arg1;
- (void)skipByTimeInterval:(double)arg1;
- (void)jumpToLocationAtIndex:(unsigned long long)arg1;
- (void)jumpToTime:(double)arg1;
- (_Bool)requestDirectionsNearTimestamp:(double)arg1 withHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (_Bool)requestDirectionsWithHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startAtLocationIndex:(unsigned long long)arg1;
- (void)start;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithTrace:(id)arg1;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
