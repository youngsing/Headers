//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@class NCNotificationAction, NCNotificationContent, NCNotificationOptions, NCNotificationSound, NSArray, NSDate, NSDictionary, NSSet, NSString, UNNotification;

@interface NCMutableNotificationRequest : NCNotificationRequest
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *sourceInfo; // @dynamic sourceInfo;
@property(nonatomic) unsigned long long collapsedNotificationsCount; // @dynamic collapsedNotificationsCount;
@property(nonatomic) _Bool isCollapsedNotification; // @dynamic isCollapsedNotification;
@property(retain, nonatomic) UNNotification *userNotification; // @dynamic userNotification;
@property(copy, nonatomic) NSDictionary *supplementaryActions; // @dynamic supplementaryActions;
@property(retain, nonatomic) NCNotificationAction *silenceAction; // @dynamic silenceAction;
@property(retain, nonatomic) NCNotificationAction *defaultAction; // @dynamic defaultAction;
@property(retain, nonatomic) NCNotificationAction *closeAction; // @dynamic closeAction;
@property(retain, nonatomic) NCNotificationAction *clearAction; // @dynamic clearAction;
@property(retain, nonatomic) NCNotificationSound *sound; // @dynamic sound;
@property(copy, nonatomic) NSSet *settingsSections; // @dynamic settingsSections;
@property(copy, nonatomic) NSDictionary *context; // @dynamic context;
@property(retain, nonatomic) NCNotificationOptions *options; // @dynamic options;
@property(retain, nonatomic) NCNotificationContent *content; // @dynamic content;
@property(copy, nonatomic) NSSet *requestDestinations; // @dynamic requestDestinations;
@property(retain, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *parentSectionIdentifier; // @dynamic parentSectionIdentifier;
@property(copy, nonatomic) NSArray *peopleIdentifiers; // @dynamic peopleIdentifiers;
@property(copy, nonatomic) NSSet *subSectionIdentifiers; // @dynamic subSectionIdentifiers;
@property(copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;
@property(copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property(copy, nonatomic) NSString *notificationIdentifier; // @dynamic notificationIdentifier;
@property(copy, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;

@end

