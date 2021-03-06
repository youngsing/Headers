//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlAuxiliaryView-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>
{
    long long _preferredContentAlignment;
    NSMutableArray *_mutableButtonViews;
    NSArray *_buttonConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSMutableArray *mutableButtonViews; // @synthesize mutableButtonViews=_mutableButtonViews;
@property(nonatomic) long long preferredContentAlignment; // @synthesize preferredContentAlignment=_preferredContentAlignment;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasCenteredContent;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)_clearButtonConstraints;
- (void)removeButtonView:(id)arg1;
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addButtonView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *buttonViews;
- (id)initWithButtonViews:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

