//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol SpotlightLearningProtocol
- (void)classifyResultsForQueryString:(NSString *)arg1 featureVector:(NSArray *)arg2 withResponse:(void (^)(NSArray *))arg3;
- (void)trainModelWithTrainingDBFile:(NSString *)arg1 modelDBFile:(NSString *)arg2;
@end
