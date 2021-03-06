//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICNFIMAPCompoundDownload.h>

@class ICNFMCMimePart;
@protocol ICNFIMAPMessage;

@interface ICNFIMAPMessageDownload : ICNFIMAPCompoundDownload
{
    id <ICNFIMAPMessage> _message;
    unsigned int _usingPartialDownloads:1;
    unsigned int _startedFetch:1;
    unsigned int _fetchingBodyText:1;
    unsigned int _doneAddingSubdownloads:1;
    BOOL _allowsPartialDownloads;
    BOOL _writesCacheFile;
    ICNFMCMimePart *_topLevelPart;
}

@property BOOL writesCacheFile; // @synthesize writesCacheFile=_writesCacheFile;
@property BOOL allowsPartialDownloads; // @synthesize allowsPartialDownloads=_allowsPartialDownloads;
@property(retain) ICNFMCMimePart *topLevelPart; // @synthesize topLevelPart=_topLevelPart;
- (void).cxx_destruct;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)_addMimeSubdownloadsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (BOOL)isComplete;
- (id)data;
@property(retain) id <ICNFIMAPMessage> message;
- (id)createCopy;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;

@end

