//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKProtocolObject-Protocol.h>

@class NSNumber, NSString, NSURL;

@protocol EKProtocolAttachment <EKProtocolObject>
@property(readonly, retain) NSString *uuid;
@property(readonly, retain) NSNumber *isAutoArchivedNumber;
@property(readonly, retain) NSURL *urlOnServer;
@property(readonly, retain) NSString *filenameSuggestedByServer;
@property(readonly, retain) NSURL *urlOnDisk;
@property(readonly, retain) NSString *attachmentIDOnServer;
@property(readonly, retain) NSString *contentType;
@end

