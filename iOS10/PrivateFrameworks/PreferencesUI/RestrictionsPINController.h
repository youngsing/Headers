//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/DevicePINController.h>

@interface RestrictionsPINController : DevicePINController
{
}

+ (void)initialize;
- (_Bool)isNumericPIN;
- (_Bool)simplePIN;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)defaultsID;
- (id)pinInstructionsPromptFont;
- (void)performActionAfterPINSet;
- (void)performActionAfterPINRemove;
- (void)delegateUpdateToggleState;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)setPIN:(id)arg1;
- (id)stringsTable;
- (_Bool)validatePIN:(id)arg1;
- (int)pinLength;

@end

