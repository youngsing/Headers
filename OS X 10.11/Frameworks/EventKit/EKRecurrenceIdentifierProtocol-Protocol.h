//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/NSCopying-Protocol.h>
#import <EventKit/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol EKRecurrenceIdentifierProtocol <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *identifierString;
@property(readonly) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly) NSString *localUID;
@end

