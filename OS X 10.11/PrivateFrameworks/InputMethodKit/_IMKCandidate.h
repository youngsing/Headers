//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _IMKCandidateController;

@interface _IMKCandidate : NSObject
{
    _IMKCandidateController *_controller;
    NSString *_text;
}

@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) _IMKCandidateController *controller; // @synthesize controller=_controller;
- (id)_multiColumnRowSeparatorColor;
- (id)_multiColumnBackgroundColor;
- (double)_measureCandidateTextWidth;
- (double)_measureCandidateNonTextWidth;
- (double)drawText:(id)arg1 withFrame:(struct CGRect)arg2 offset:(double)arg3 selected:(BOOL)arg4 inView:(id)arg5;
- (void)drawCellWithFrame:(struct CGRect)arg1 selected:(BOOL)arg2 inView:(id)arg3;
- (void)drawRowWithFrame:(struct CGRect)arg1 selected:(BOOL)arg2 inView:(id)arg3;
- (long long)column;
- (long long)row;
- (id)description;
- (void)_setParentControllerReferencePriv:(id)arg1;
- (id)axHelpString;
- (id)axValueString;
- (id)descriptionHTMLAndBaseURL:(id *)arg1;
- (BOOL)hasDefinition;
- (BOOL)hasNote;
- (double)drawText:(id)arg1 withFrame:(struct CGRect)arg2 offset:(double)arg3 atIndex:(long long)arg4 selected:(BOOL)arg5 inView:(id)arg6;
- (void)drawCellWithFrame:(struct CGRect)arg1 atIndex:(long long)arg2 selected:(BOOL)arg3 inView:(id)arg4;
- (void)drawRowWithFrame:(struct CGRect)arg1 atRow:(long long)arg2 selected:(BOOL)arg3 inView:(id)arg4;
- (void)drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)rowTrailingMargin;
- (double)groupLabelWidth;
- (double)trailingMargin;
- (double)noteIconWidth;
- (double)textTrailingMargin;
- (double)textLeadingMargin;
- (double)guideNumberWidth;
- (double)leadingMargin;
- (double)minCellWidth;
- (double)cellWidthForRowWidth:(double)arg1;
- (double)cellHeight;
- (void)dealloc;
- (id)initWithText:(id)arg1 controller:(id)arg2;

@end
