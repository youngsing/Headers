//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIEvent.h>

@class NSHashTable, NSMutableSet, NSSet, UIPress;

@interface UIPressesEvent : UIEvent
{
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
    UIPress *_triggeringPhysicalButton;
}

@property(retain, nonatomic) UIPress *_triggeringPhysicalButton; // @synthesize _triggeringPhysicalButton;
- (void).cxx_destruct;
- (id)_terminalRegistrantsForPressType:(long long)arg1;
- (void)_unregisterForTerminalEvent:(id)arg1;
- (void)_registerForTerminalEvent:(id)arg1;
- (id)description;
- (id)_directionalPressWithStrongestForce;
- (void)_removePhysicalButton:(id)arg1;
- (void)_addGesturesForPress:(id)arg1;
- (void)_addPress:(id)arg1 forDelayedDelivery:(_Bool)arg2;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (id)physicalButtonsForWindow:(id)arg1;
- (id)_allPresses;
- (id)_windows;
- (id)pressesForGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) NSSet *allPresses;
- (id)_cloneEvent;
- (long long)subtype;
- (long long)type;
- (id)_init;

@end

