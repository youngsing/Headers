//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSUUID;

@interface HMDLogEvent : NSObject
{
    _Bool _submitted;
    NSUUID *_eventType;
    NSError *_eventError;
    double _startTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSError *eventError; // @synthesize eventError=_eventError;
@property(readonly, nonatomic) NSUUID *eventType; // @synthesize eventType=_eventType;
@property(nonatomic, getter=isSubmitted) _Bool submitted; // @synthesize submitted=_submitted;
- (void).cxx_destruct;
@property(readonly) double durationInMilliseconds;
- (void)submitAtTime:(double)arg1 error:(id)arg2;
- (id)initWithEventType:(id)arg1;
- (id)init;

@end
