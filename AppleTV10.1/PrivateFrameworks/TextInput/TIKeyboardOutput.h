//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString, TIKeyboardCandidate;

@interface TIKeyboardOutput : NSObject <NSSecureCoding>
{
    _Bool _shouldSendCurrentLocation;
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_textToCommit;
    unsigned long long _deletionCount;
    NSString *_insertionText;
    unsigned long long _forwardDeletionCount;
    NSString *_insertionTextAfterSelection;
    TIKeyboardCandidate *_shortcutConversion;
    NSIndexSet *_handwritingStrokesToDelete;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldSendCurrentLocation; // @synthesize shouldSendCurrentLocation=_shouldSendCurrentLocation;
@property(copy, nonatomic) NSIndexSet *handwritingStrokesToDelete; // @synthesize handwritingStrokesToDelete=_handwritingStrokesToDelete;
@property(retain, nonatomic) TIKeyboardCandidate *shortcutConversion; // @synthesize shortcutConversion=_shortcutConversion;
@property(copy, nonatomic) NSString *insertionTextAfterSelection; // @synthesize insertionTextAfterSelection=_insertionTextAfterSelection;
@property(nonatomic) unsigned long long forwardDeletionCount; // @synthesize forwardDeletionCount=_forwardDeletionCount;
@property(copy, nonatomic) NSString *insertionText; // @synthesize insertionText=_insertionText;
@property(nonatomic) unsigned long long deletionCount; // @synthesize deletionCount=_deletionCount;
@property(copy, nonatomic) NSString *textToCommit; // @synthesize textToCommit=_textToCommit;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
- (void)deleteForward;
- (void)deleteForward:(unsigned long long)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)deleteBackward;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
