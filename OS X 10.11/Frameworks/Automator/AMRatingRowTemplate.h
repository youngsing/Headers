//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class AMApplicationDefinition, AMLevelIndicator, NSPopUpButton;

@interface AMRatingRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *leftExpressionPopup;
    NSPopUpButton *predicateOperatorTypePopup;
    AMLevelIndicator *levelIndicator;
    AMApplicationDefinition *_applicationDefinition;
    BOOL hasCreatedViews;
}

- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (void)setApplicationDefinition:(id)arg1;
- (void)dealloc;

@end

