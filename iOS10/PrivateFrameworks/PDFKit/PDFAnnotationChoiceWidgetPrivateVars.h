//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PDFAppearanceCharacteristics, UIColor, UIFont;

@interface PDFAnnotationChoiceWidgetPrivateVars : NSObject
{
    NSArray *options;
    NSArray *values;
    unsigned long long fieldFlags;
    NSString *userName;
    NSString *fieldName;
    NSString *stringValue;
    NSString *defaultStringValue;
    UIFont *font;
    UIColor *fontColor;
    PDFAppearanceCharacteristics *appearanceChars;
    _Bool isList;
    struct __CFDictionary *dictionary;
}

- (void).cxx_destruct;

@end

