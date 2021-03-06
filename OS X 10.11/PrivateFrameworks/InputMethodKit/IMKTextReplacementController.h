//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/TextReplacementServiceNotifyProtocol-Protocol.h>

@class IMKTextReplacementControllerContext, NSArray;

@interface IMKTextReplacementController : NSObject <TextReplacementServiceNotifyProtocol>
{
    IMKTextReplacementControllerContext *_context;
}

@property(retain) IMKTextReplacementControllerContext *context; // @synthesize context=_context;
- (id)convertToPhraseShortcutPairs:(id)arg1;
- (id)convertPhraseShortcutPairs:(id)arg1;
- (void)entriesDidChange:(id)arg1;
- (void)cancelPendingTransactions;
- (void)performTransactions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType phraseShortcutPairsDidChangeHandler;
@property(copy) CDUnknownBlockType entriesDidChangeHandler;
@property(readonly, copy) NSArray *phraseShortcutPairs;
@property(readonly, copy) NSArray *entries;
- (void)dealloc;
- (id)init;

@end

