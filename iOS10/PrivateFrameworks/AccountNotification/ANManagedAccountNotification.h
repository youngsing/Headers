//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ANManagedNotificationAction, NSDate, NSString;

@interface ANManagedAccountNotification : NSManagedObject
{
}

- (void)takeValuesFromAccountNotification:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *accountTypeID; // @dynamic accountTypeID;
@property(retain, nonatomic) ANManagedNotificationAction *activateAction; // @dynamic activateAction;
@property(retain, nonatomic) NSString *activateButtonTitle; // @dynamic activateButtonTitle;
@property(retain, nonatomic) NSString *callbackMachServiceName; // @dynamic callbackMachServiceName;
@property(retain, nonatomic) ANManagedNotificationAction *clearAction; // @dynamic clearAction;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) ANManagedNotificationAction *dismissAction; // @dynamic dismissAction;
@property(retain, nonatomic) NSString *dismissButtonTitle; // @dynamic dismissButtonTitle;
@property(retain, nonatomic) NSString *eventID; // @dynamic eventID;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) id userInfo; // @dynamic userInfo;

@end

