//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Lookup/DDActionsManagerDelegateProtocol-Protocol.h>
#import <Lookup/NSPopoverDelegate-Protocol.h>

@class LUSearchTermIndicator, NSAttributedString, NSPopover, NSString;

@interface LUPresenter : NSObject <NSPopoverDelegate, DDActionsManagerDelegateProtocol>
{
    LUSearchTermIndicator *_searchTermIndicator;
    NSPopover *_resultsPopover;
    NSAttributedString *_displayedTerm;
    struct CGPoint _displayedTermOrigin;
}

+ (id)animationControllerForTerm:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 options:(id)arg4;
+ (id)animationControllerForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 options:(id)arg3;
+ (id)addressInString:(id)arg1 range:(struct _NSRange)arg2;
+ (void)positioningView:(id *)arg1 andRect:(struct CGRect *)arg2 forTerm:(id)arg3 atLocation:(struct CGPoint)arg4 options:(id)arg5;
+ (BOOL)windowIsPopover:(id)arg1;
+ (BOOL)windowIsKey:(id)arg1;
+ (BOOL)windowIsMain:(id)arg1;
+ (id)windowAtScreenLocation:(struct CGPoint)arg1;
+ (id)sharedPresenter;
+ (void)initialize;
@property struct CGPoint displayedTermOrigin; // @synthesize displayedTermOrigin=_displayedTermOrigin;
@property(retain) NSAttributedString *displayedTerm; // @synthesize displayedTerm=_displayedTerm;
@property(retain) NSPopover *resultsPopover; // @synthesize resultsPopover=_resultsPopover;
@property(retain) LUSearchTermIndicator *searchTermIndicator; // @synthesize searchTermIndicator=_searchTermIndicator;
- (void)dataDetectorsUIActionWillStart;
- (void)dataDetectorsUIActionDidEnd;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (id)resultsViewController;
- (void)hideDefinition;
- (void)implicitHideDefinition;
- (unsigned long long)preferredEdgeOfPopover:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)showDefinitionForTerm:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 options:(id)arg4;
- (void)showDefinitionForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 options:(id)arg3;
- (id)animationControllerForTerm:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3 options:(id)arg4;
- (void)postPopoverWillCloseNotification;
- (void)commonLUPresenterTeardown;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
