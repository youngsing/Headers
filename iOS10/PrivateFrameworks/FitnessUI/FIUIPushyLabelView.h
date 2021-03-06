//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView
{
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id _pendingAttributedString;
    unsigned long long _pendingDirection;
    _Bool _pendingPushPerCharacter;
    double _currentAnimationFinishTime;
}

- (void).cxx_destruct;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(_Bool)arg2;
- (void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2;
- (void)_layoutForPushStartWithDirection:(unsigned long long)arg1;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (id)currentAttributedText;
- (void)_processPendingStringIfNeeded;
- (void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(_Bool)arg3;
- (void)setAttributedTextUnanimated:(id)arg1;
- (void)sizeToFitAttributedText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

