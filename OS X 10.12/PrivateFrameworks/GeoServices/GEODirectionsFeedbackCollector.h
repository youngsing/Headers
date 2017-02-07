//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableSet;

@interface GEODirectionsFeedbackCollector : NSObject
{
    GEODirectionsFeedback *_currentDirectionsFeedback;
    GEODirectionsFeedbackLogMessage *_currentFeedbackLogMessage;
    NSMutableSet *_routeIDs;
    double _currentDirectionsNavigationStartTime;
    double _currentDirectionsNavigationEndTime;
}

@property(retain, nonatomic) NSMutableSet *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback; // @synthesize currentDirectionsFeedback=_currentDirectionsFeedback;
@property(retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage; // @synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage;
- (id)description;
- (void)endFeedbackSession;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback *)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(BOOL)arg4;
- (void)setupFeedbackSessionWithResponseID:(id)arg1;
- (void)startFeedbackSessionForResponseID:(id)arg1;
- (void)startFeedbackSession;
- (void)_updateFeedbackSessionWithResponseID:(id)arg1;
- (void)reset;
- (void)dealloc;

@end
