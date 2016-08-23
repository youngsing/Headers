//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface CJKCandidateData : NSObject
{
    NSArray *_keys;
    NSMutableDictionary *_keysToCandidates;
    NSArray *_candidates;
    BOOL _shouldShowGroups;
}

+ (id)candidateDataWithArray:(id)arg1;
@property(nonatomic) BOOL shouldShowGroups; // @synthesize shouldShowGroups=_shouldShowGroups;
@property(retain, nonatomic) NSMutableDictionary *keysToCandidates; // @synthesize keysToCandidates=_keysToCandidates;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) BOOL hasGroups;
@property(readonly, nonatomic) NSArray *candidates;
- (unsigned long long)keyCount;
- (unsigned long long)candidateCount;
- (id)candidatesForKey:(id)arg1;
- (void)setCandidates:(id)arg1 forKey:(id)arg2;
- (void)dealloc;

@end

