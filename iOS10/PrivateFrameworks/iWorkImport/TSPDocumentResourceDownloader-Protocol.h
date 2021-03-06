//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSUDownloadSession;
@protocol TSUDownloadSessionDelegate;

@protocol TSPDocumentResourceDownloader <NSObject>
@property(readonly, nonatomic) _Bool isEstimatedDownloadSizePrecise;
@property(readonly, nonatomic) long long estimatedDownloadSize;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)cancelDownloads;
- (TSUDownloadSession *)downloadWithDelegate:(id <TSUDownloadSessionDelegate>)arg1 description:(NSString *)arg2;
@end

