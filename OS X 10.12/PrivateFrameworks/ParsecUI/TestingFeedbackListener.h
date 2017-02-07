//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ParsecUI/SFFeedbackListener-Protocol.h>

@class NSString;

@interface TestingFeedbackListener : NSObject <SFFeedbackListener>
{
}

- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
