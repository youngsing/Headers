//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TPPageIndexPath, TPSection, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TPPageLayoutState : NSObject
{
    TPPageIndexPath *_pageIndexPath;
    unsigned long long _documentPageIndex;
    TSWPStorage *_bodyStorage;
    void *_bodyLayoutState;
    unsigned long long _bodyCharIndex;
    unsigned long long _footnoteIndex;
    _Bool _doingLayout;
    _Bool _allowParagraphMetrics;
    _Bool _onLastSection;
    unsigned long long _lastLaidOutSectionIndex;
}

@property(readonly, nonatomic) unsigned long long lastLaidOutSectionIndex; // @synthesize lastLaidOutSectionIndex=_lastLaidOutSectionIndex;
@property(nonatomic) _Bool allowParagraphMetrics; // @synthesize allowParagraphMetrics=_allowParagraphMetrics;
@property(nonatomic) _Bool doingLayout; // @synthesize doingLayout=_doingLayout;
@property(nonatomic) unsigned long long footnoteIndex; // @synthesize footnoteIndex=_footnoteIndex;
@property(nonatomic) unsigned long long bodyCharIndex; // @synthesize bodyCharIndex=_bodyCharIndex;
@property(nonatomic) void *bodyLayoutState; // @synthesize bodyLayoutState=_bodyLayoutState;
@property(readonly, nonatomic) unsigned long long documentPageIndex; // @synthesize documentPageIndex=_documentPageIndex;
@property(readonly, nonatomic) TPPageIndexPath *pageIndexPath; // @synthesize pageIndexPath=_pageIndexPath;
- (void)setDocumentPageIndex:(unsigned long long)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)advanceSectionIndex;
- (void)advancePageIndex;
- (void)backUpPageIndex;
- (void)restartLayoutFromFirstPage;
- (void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (_Bool)isLayoutCompleteUpToDocumentPageIndex:(unsigned long long)arg1;
- (_Bool)isLayoutCompleteThroughDocumentPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isLayoutComplete;
@property(readonly, nonatomic) _Bool onLastSection;
@property(readonly, nonatomic) struct _NSRange sectionCharRange;
@property(readonly, nonatomic) TPSection *section;
@property(readonly, nonatomic) unsigned long long lastLaidOutDocumentPageIndex;
@property(readonly, nonatomic) unsigned long long pageIndex;
@property(readonly, nonatomic) unsigned long long sectionIndex;
- (void)dealloc;
- (id)init;
- (id)initWithBodyStorage:(id)arg1;

@end

