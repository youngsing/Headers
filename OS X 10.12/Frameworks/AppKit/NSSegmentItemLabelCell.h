//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSegmentItemLabelCell : NSTextFieldCell
{
    NSString *_widgetName;
}

+ (id)_getParentSegmentedControlViewFromView:(id)arg1;
@property(retain, nonatomic) NSString *widgetName; // @synthesize widgetName=_widgetName;
- (void)dealloc;
- (BOOL)_shouldUseStyledTextInView:(id)arg1;
- (long long)interiorBackgroundStyle;
- (struct __CFString *)_coreUIWidgetName;

@end
