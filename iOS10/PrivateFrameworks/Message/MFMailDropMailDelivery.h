//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOutgoingMessageDelivery.h>

@class MFMailDropMetadata, NSArray;

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery
{
    NSArray *_attachments;
    MFMailDropMetadata *_imageArchiveMetadata;
    long long _mailDropState;
}

+ (id)_mailDropZone;
@property(nonatomic) long long mailDropState; // @synthesize mailDropState=_mailDropState;
@property(retain, nonatomic) MFMailDropMetadata *imageArchiveMetadata; // @synthesize imageArchiveMetadata=_imageArchiveMetadata;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6;
- (id)_publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(_Bool)arg5;
- (long long)_processAttachments;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)_attachmentManager;
- (void)dealloc;
- (_Bool)updateMessageWithAttachmentsSynchronously;
- (id)scaledImages:(id)arg1;

@end
