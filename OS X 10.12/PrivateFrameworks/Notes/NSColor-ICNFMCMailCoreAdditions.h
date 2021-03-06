//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSString;

@interface NSColor (ICNFMCMailCoreAdditions)
+ (id)scriptingRGBColorWithDescriptor:(id)arg1;
+ (id)stationeryPaneBackgroundColor;
+ (id)inactiveAlternateBackgroundColor;
+ (id)activeAlternateBackgroundColor;
+ (id)aquaBlueColor;
+ (id)subjectAdditionColor;
+ (id)splitterColor;
+ (id)activeLinkColor;
+ (id)visitedLinkColor;
+ (id)linkColor;
+ (id)junkMailColor;
+ (id)threadQuasiSelectedColor;
+ (id)lighterThreadChildBackgroundColor;
+ (id)threadChildBackgroundColor;
+ (id)threadBackgroundColor;
+ (void)clearThreadBackgroundColors;
+ (id)lighterThreadBackgroundColor;
+ (void)setThreadBackgroundColor:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithIntValue:(int)arg1;
+ (id)newSwatchForColor:(id)arg1;
+ (void)configureColorMenu:(id)arg1;
+ (id)colorForEnrichedValue:(id)arg1;
+ (id)colorForIdentifier:(id)arg1;
+ (id)identifierForColor:(id)arg1;
+ (int)intWithIdentifierColor:(id)arg1;
+ (id)colorPlist;
+ (id)colorForHighlightColorValue:(unsigned int)arg1;
+ (unsigned int)highlightColorValueForColor:(id)arg1;
+ (id)allHighlightColors;
+ (id)colorForQuoteLevel:(unsigned long long)arg1;
+ (void)setQuotingColorList:(id)arg1;
+ (id)quotingColorList;
+ (id)defaultQuotingColors;
+ (id)allQuotingColors;
@property(readonly, copy, nonatomic) NSString *cssColorString;
- (id)scriptingRGBColorDescriptor;
@property(readonly, copy, nonatomic) NSString *hexString;
@property(readonly, nonatomic) int intValue;
@end

