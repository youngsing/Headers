//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, UIWebPDFSearchOperation;

@protocol UIWebPDFSearchOperationDelegate
- (void)search:(UIWebPDFSearchOperation *)arg1 hasPartialResults:(NSArray *)arg2;
- (void)searchDidFinish:(UIWebPDFSearchOperation *)arg1;
- (void)searchLimitHit:(UIWebPDFSearchOperation *)arg1;
- (void)searchWasCancelled:(UIWebPDFSearchOperation *)arg1;
- (void)searchDidTimeOut:(UIWebPDFSearchOperation *)arg1;
- (void)searchDidBegin:(UIWebPDFSearchOperation *)arg1;
@end
