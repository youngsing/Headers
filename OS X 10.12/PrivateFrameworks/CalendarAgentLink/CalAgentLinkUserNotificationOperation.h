//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSArray, NSString;

@interface CalAgentLinkUserNotificationOperation : CalAgentLinkOneWayOperation
{
    NSString *_action;
    NSArray *_objectIDs;
    BOOL _updatedPreferenceValue;
}

@property(nonatomic) BOOL updatedPreferenceValue; // @synthesize updatedPreferenceValue=_updatedPreferenceValue;
@property(retain, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (id)inputPayload;
- (id)description;
- (void)dealloc;
- (id)initWithAction:(id)arg1;
- (id)init;

@end

