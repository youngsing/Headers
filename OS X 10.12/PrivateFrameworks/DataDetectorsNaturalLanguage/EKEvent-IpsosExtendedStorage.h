//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKEvent.h>

@class IPEventClassificationType;

@interface EKEvent (IpsosExtendedStorage)
- (id)ipsos_betterDescription;
@property(readonly) double ipsos_duration;
@property BOOL ipsos_allDayPreferred;
@property(retain) IPEventClassificationType *ipsos_eventClassificationType;
@property BOOL ipsos_isEventTimeOnlyAndReferrengingToSentDate;
@property BOOL ipsos_isDateTimeTenseDependent;
@property BOOL ipsos_usesDefaultClassificationTypeStartTime;
@property BOOL ipsos_isEndTimeApproximate;
@property BOOL ipsos_isTimeApproximate;
@end
