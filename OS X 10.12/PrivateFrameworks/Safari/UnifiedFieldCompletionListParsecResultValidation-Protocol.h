//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class WBSParsecSearchResult;
@protocol WBSParsecSearchSession;

@protocol UnifiedFieldCompletionListParsecResultValidation <NSObject>
- (void)resetValidationState;
- (BOOL)validateParsecResult:(WBSParsecSearchResult *)arg1 withSession:(id <WBSParsecSearchSession>)arg2;
@end
