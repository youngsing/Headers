//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MFLibraryMessage, NSObject;
@protocol MFMessageIterationFilter;

@protocol MFSearchResultHandler
- (void)endResult;
- (void)setResultUnread:(_Bool)arg1;
- (void)setResultDateRecieved:(double)arg1;
- (void)setResultSender:(char *)arg1;
- (void)setResultSubject:(char *)arg1;
- (void)beginResult:(unsigned int)arg1;

@optional
- (NSObject<MFMessageIterationFilter> *)filter;
- (void)handleMessage:(MFLibraryMessage *)arg1;
- (void)setResultSummary:(char *)arg1;
@end
