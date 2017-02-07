//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class FUAirport, FUStepTime, NSNumber, NSString;

@interface FUFlightStep : NSObject <NSSecureCoding>
{
    FUAirport *_airport;
    NSString *_gate;
    NSString *_terminal;
    long long _legStatus;
    NSNumber *_delayFromSchedule;
    FUStepTime *_actualTime;
    FUStepTime *_scheduledTime;
    FUStepTime *_plannedTime;
    FUStepTime *_estimatedTime;
}

+ (BOOL)supportsSecureCoding;
@property(retain) FUStepTime *estimatedTime; // @synthesize estimatedTime=_estimatedTime;
@property(retain) FUStepTime *plannedTime; // @synthesize plannedTime=_plannedTime;
@property(retain) FUStepTime *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
@property(retain) FUStepTime *actualTime; // @synthesize actualTime=_actualTime;
@property(retain, nonatomic) NSNumber *delayFromSchedule; // @synthesize delayFromSchedule=_delayFromSchedule;
@property long long legStatus; // @synthesize legStatus=_legStatus;
@property(retain) NSString *terminal; // @synthesize terminal=_terminal;
@property(retain) NSString *gate; // @synthesize gate=_gate;
@property(retain) FUAirport *airport; // @synthesize airport=_airport;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly) FUStepTime *time;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end
