//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol WBSFormAutoFillCorrectionsStore <NSObject>
- (void)removeAllLocalClassificationsWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)removeLocalClassificationsForDomain:(NSString *)arg1 recordedOnOrAfter:(NSDate *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)getClassificationForFieldWithFingerprint:(NSString *)arg1 onDomain:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)setCrowdsourcedClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)setLocalClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(NSArray *)arg1 retrievalURLString:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)setLastWhitelistRetrievalURLString:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)setDomain:(NSString *)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)getWhitelistStatusForDomain:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)replaceDomainWhitelistWithDomains:(NSArray *)arg1 retrievalURLString:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
@end

