//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityMockUIElement.h>

@interface NSAccessibilityTextLink : NSAccessibilityMockUIElement
{
    struct _NSRange _characterRange;
}

+ (id)linkWithCharacterRange:(struct _NSRange)arg1 parent:(id)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsURLAttributeSettable;
- (id)accessibilityURLAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityTitleAttribute;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct _NSRange)characterRange;
- (id)initWithCharacterRange:(struct _NSRange)arg1 parent:(id)arg2;

@end

