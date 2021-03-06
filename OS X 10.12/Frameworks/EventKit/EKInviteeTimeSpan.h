//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSDate, NSMutableArray;

@interface EKInviteeTimeSpan : NSObject <NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSMutableArray *_conflictedParticipants;
}

@property(retain, nonatomic) NSMutableArray *conflictedParticipants; // @synthesize conflictedParticipants=_conflictedParticipants;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

