//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;

@protocol RPPublishingAgentDelegate
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(NSError *)arg2;
- (void)publishingAgentDidBeginPublishing:(id)arg1;
- (void)publishingAgentCancelButtonClicked:(id)arg1;
- (void)publishingAgentDoneButtonClicked:(id)arg1;
- (void)publishingAgentWillBeDisplayed:(id)arg1;

@optional
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(id)arg1;
@end

