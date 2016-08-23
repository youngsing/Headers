//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/_AMSystemEventsItem.h>

@class NSString, _AMSystemEventsDocument;

@interface _AMSystemEventsWindow : _AMSystemEventsItem
{
}

@property BOOL zoomed;
@property(readonly) BOOL zoomable;
@property BOOL visible;
@property(readonly) BOOL titled;
@property(readonly) BOOL resizable;
@property(copy) NSString *name;
@property(readonly) BOOL modal;
@property BOOL miniaturized;
@property(readonly) BOOL miniaturizable;
@property long long index;
- (long long)id;
@property(readonly) BOOL floating;
@property(readonly, copy) _AMSystemEventsDocument *document;
@property(readonly) BOOL closeable;
@property struct CGRect bounds;
- (id)UIElements;
- (id)toolBars;
- (id)textFields;
- (id)textAreas;
- (id)tables;
- (id)tabGroups;
- (id)staticTexts;
- (id)splitterGroups;
- (id)splitters;
- (id)sliders;
- (id)sheets;
- (id)scrollBars;
- (id)scrollAreas;
- (id)relevanceIndicators;
- (id)radioGroups;
- (id)radioButtons;
- (id)progressIndicators;
- (id)popUpButtons;
- (id)outlines;
- (id)menuButtons;
- (id)lists;
- (id)incrementors;
- (id)images;
- (id)growAreas;
- (id)groups;
- (id)drawers;
- (id)comboBoxes;
- (id)colorWells;
- (id)checkboxes;
- (id)buttons;
- (id)busyIndicators;
- (id)browsers;

@end

