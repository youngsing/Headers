//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNLocation, NSDate, NSTimer;
@protocol MNTunnelLocationProjectorDelegate;

__attribute__((visibility("hidden")))
@interface MNTunnelLocationProjector : NSObject
{
    id <MNTunnelLocationProjectorDelegate> _delegate;
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    double _locationOverdueTimeoutForTunnel;
    double _locationOverdueTimeoutForNotTunnel;
    double _locationOverdueTimeoutForUnknown;
    BOOL _isProjecting;
}

@property(readonly, nonatomic) BOOL isProjecting; // @synthesize isProjecting=_isProjecting;
@property(nonatomic) __weak id <MNTunnelLocationProjectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_approximateMaxSpeedForRoad:(CDStruct_072d3dd3 *)arg1;
- (id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2;
- (double)_locationOverdueTimeoutForLocation:(id)arg1;
- (void)_locationUpdateOverdueTimerFired:(id)arg1;
- (void)_resetLocationUpdateOverdueWithTimeout:(double)arg1;
- (BOOL)_locationIsGoodEnoughToEndProjection:(id)arg1;
- (void)stop;
- (void)updateLocation:(id)arg1;
- (void)dealloc;
- (id)init;

@end
