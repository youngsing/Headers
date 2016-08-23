//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKProtocolAlarm-Protocol.h>
#import <EventKit/EKProtocolMutableObject-Protocol.h>

@class NSDate, NSString, NSURL;
@protocol EKProtocolMutableStructuredLocation;

@protocol EKProtocolMutableAlarm <EKProtocolAlarm, EKProtocolMutableObject>
@property(copy, nonatomic) id <EKProtocolMutableStructuredLocation> structuredLocation;
@property(nonatomic) BOOL isTimeToLeaveAlarm;
@property(nonatomic) BOOL notRelativeToTravelTime;
@property(copy, nonatomic) NSString *proximityString;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *soundName;
@property(copy, nonatomic) NSString *emailAddress;
@property(copy, nonatomic) NSString *actionString;
@property(copy, nonatomic) NSDate *acknowledgedDate;
@property(nonatomic) double relativeOffset;
@property(copy, nonatomic) NSDate *absoluteDate;
@end

