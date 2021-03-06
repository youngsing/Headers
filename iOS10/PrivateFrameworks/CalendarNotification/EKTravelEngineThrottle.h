//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface EKTravelEngineThrottle : NSObject
{
    _Bool _running;
    NSString *_eventExternalURL;
    CDUnknownBlockType _requestHypothesisRefreshBlock;
    CDUnknownBlockType _cancelHypothesisRequestRefreshBlock;
    CDUnknownBlockType _emissionBlock;
    NSString *_throttleIdentifier;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    NSDate *_nextEmissionDate;
    PCPersistentTimer *_emissionTimer;
}

+ (double)emissionThresholdTimeInterval;
+ (double)_requestHypothesisRefreshInterval;
@property(retain, nonatomic) PCPersistentTimer *emissionTimer; // @synthesize emissionTimer=_emissionTimer;
@property(retain, nonatomic) NSDate *nextEmissionDate; // @synthesize nextEmissionDate=_nextEmissionDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue; // @synthesize throttleQueue=_throttleQueue;
@property(retain, nonatomic) NSString *throttleIdentifier; // @synthesize throttleIdentifier=_throttleIdentifier;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(copy, nonatomic) CDUnknownBlockType emissionBlock; // @synthesize emissionBlock=_emissionBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelHypothesisRequestRefreshBlock; // @synthesize cancelHypothesisRequestRefreshBlock=_cancelHypothesisRequestRefreshBlock;
@property(copy, nonatomic) CDUnknownBlockType requestHypothesisRefreshBlock; // @synthesize requestHypothesisRefreshBlock=_requestHypothesisRefreshBlock;
@property(retain) NSString *eventExternalURL; // @synthesize eventExternalURL=_eventExternalURL;
- (void).cxx_destruct;
- (void)_significantTimeChangeNotificationReceived;
- (void)_unregisterForNotificationObservation;
- (void)_registerForNotificationObservation;
- (void)_emissionTimerFired:(id)arg1;
- (void)_uninstallEmissionTimer;
- (void)_createEmissionTimerWithDate:(id)arg1;
- (void)_fireEmissionBlock;
- (void)_updateEmissionDate:(id)arg1;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)btaJobName;
- (void)updatePredictedDepartureDate:(id)arg1;
- (void)tearDown;
- (id)description;
- (void)dealloc;
- (id)init;

@end

