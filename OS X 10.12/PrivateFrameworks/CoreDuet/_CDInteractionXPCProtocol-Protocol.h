//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDate, NSPredicate, NSString, _CDInteractionAdvisorSettings;
@protocol _CDInteractionXPCHeartBeatProtocol;

@protocol _CDInteractionXPCProtocol
- (void)tuneSocialAdvisorUsingSettings:(_CDInteractionAdvisorSettings *)arg1 heartBeatHandler:(id <_CDInteractionXPCHeartBeatProtocol>)arg2 reply:(void (^)(void))arg3;
- (void)adviseInteractionsForKeywordsInString:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseSocialInteractionsForDate:(NSDate *)arg1 andSeedContacts:(NSArray *)arg2 usingSettings:(_CDInteractionAdvisorSettings *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)adviseInteractionsForLocation:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseInteractionsForDate:(NSDate *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseInteractionsUsingSettings:(_CDInteractionAdvisorSettings *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)rankCandidateContacts:(NSArray *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(unsigned long long, NSError *))arg4;
- (void)countContactsUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)countInteractionsUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)recordInteractions:(NSArray *)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3 reply:(void (^)(BOOL))arg4;
@end
