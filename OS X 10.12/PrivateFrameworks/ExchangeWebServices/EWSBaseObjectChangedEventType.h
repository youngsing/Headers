//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseNotificationEventType.h>

@class EWSFolderIdType, NSDateComponents;

@interface EWSBaseObjectChangedEventType : EWSBaseNotificationEventType
{
    NSDateComponents *_TimeStamp;
    id _ItemOrFolderId;
    EWSFolderIdType *_ParentFolderId;
}

+ (id)definition;
@property(retain, nonatomic) EWSFolderIdType *ParentFolderId; // @synthesize ParentFolderId=_ParentFolderId;
@property(retain, nonatomic) id ItemOrFolderId; // @synthesize ItemOrFolderId=_ItemOrFolderId;
@property(retain, nonatomic) NSDateComponents *TimeStamp; // @synthesize TimeStamp=_TimeStamp;
- (void).cxx_destruct;

@end

