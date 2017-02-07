//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class IMAPDownloadCache, NSArray;
@protocol IMAPGetAttachmentsDownloadsOperationDelegate;

@interface IMAPGetAttachmentsDownloadsOperation : IMAPPersistenceTaskOperation
{
    NSArray *_messages;
    id <IMAPGetAttachmentsDownloadsOperationDelegate> _delegate;
    IMAPDownloadCache *_downloadCache;
}

@property(retain, nonatomic) IMAPDownloadCache *downloadCache; // @synthesize downloadCache=_downloadCache;
@property(readonly, nonatomic) __weak id <IMAPGetAttachmentsDownloadsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithMessages:(id)arg1 dataSource:(id)arg2 downloadCache:(id)arg3 delegate:(id)arg4;

@end
