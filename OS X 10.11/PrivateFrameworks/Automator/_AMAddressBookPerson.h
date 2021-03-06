//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/_AMAddressBookEntry.h>

@class NSDate, NSString;

@interface _AMAddressBookPerson : _AMAddressBookEntry
{
}

@property(copy) NSString *firstName;
@property(copy) NSString *lastName;
@property(copy) NSString *jobTitle;
@property(copy) NSString *phoneticFirstName;
@property(copy) NSString *middleName;
@property BOOL company;
@property(copy) NSString *note;
@property(readonly, copy) NSString *name;
@property(copy) NSString *image;
@property(copy) NSString *department;
@property(copy) NSString *phoneticMiddleName;
@property(copy) NSString *title;
@property(copy) NSString *phoneticLastName;
@property(copy) NSDate *birthDate;
@property(copy) NSString *homePage;
@property(readonly, copy) NSString *vcard;
@property(copy) NSString *suffix;
@property(copy) NSString *maidenName;
@property(copy) NSString *organization;
@property(copy) NSString *nickname;
- (id)emails;
- (id)relatedNames;
- (id)ICQHandles;
- (id)YahooHandles;
- (id)AIMHandles;
- (id)customDates;
- (id)groups;
- (id)JabberHandles;
- (id)phones;
- (id)addresses;
- (id)urls;
- (id)MSNHandles;

@end

