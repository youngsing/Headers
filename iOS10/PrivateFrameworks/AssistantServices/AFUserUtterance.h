//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface AFUserUtterance : NSObject
{
    NSMutableArray *_phrases;
    NSMutableArray *_tokens;
    NSString *_text;
    long long _sentenceConfidence;
    NSMutableArray *_utterances;
    NSDictionary *_correctionIdentifier;
}

@property(readonly, nonatomic) NSDictionary *correctionIdentifier; // @synthesize correctionIdentifier=_correctionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)streamingTokens;
@property(readonly, nonatomic) NSArray *dictationResult;
- (id)updateDictationResult:(id)arg1 withAlternativeUtteranceAtIndex:(unsigned long long)arg2;
- (void)_updateUtteranceswithAlternativeUtteranceAtIndex:(unsigned long long)arg1 swapIndices:(id)arg2;
- (void)_updatePhraseswithSwapIndices:(id)arg1;
- (struct NSDictionary *)allRecognitionStringsAndScores;
- (id)interpretationOfUtteranceAtIndex:(unsigned long long)arg1;
- (id)textOfUtteranceAtIndex:(unsigned long long)arg1;
- (id)rangeListOfDifferingTextFromTargetTokenList:(id)arg1 comparedToBaseTokenList:(id)arg2;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseTokenList:(id)arg2;
- (id)rangeListOfDifferingTextFromSpeechInterpretation:(id)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2;
- (id)longestCommonSubsequenceBetweenList:(id)arg1 andList:(id)arg2;
- (id)speechTokensForUtteranceAtIndex:(unsigned long long)arg1;
- (id)rangeListOfDifferingTextFromUtteranceAtIndex:(unsigned long long)arg1 comparedToBaseUtteranceAtIndex:(unsigned long long)arg2;
- (id)bestTextInterpretation;
- (long long)numberOfAlternativeUtterances;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithPhrases:(id)arg1 sentenceConfidence:(long long)arg2 utterances:(id)arg3 correctionIdentifier:(id)arg4;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;

@end
