//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSArray, NSString;

@interface CHTextRecognitionResult : CHRecognitionResult
{
    BOOL _rare;
    NSString *_string;
    NSArray *_wordRanges;
    NSArray *_wordIDs;
}

@property(readonly) NSArray *wordIDs; // @synthesize wordIDs=_wordIDs;
@property(readonly) NSArray *wordRanges; // @synthesize wordRanges=_wordRanges;
@property(readonly) NSString *string; // @synthesize string=_string;
@property(readonly) BOOL rare; // @synthesize rare=_rare;
- (void)dealloc;
- (id)mecabraCandidate;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(BOOL)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;

@end
