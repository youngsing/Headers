//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFAppearanceCharacteristics, PDFView, UIColor, UIFont;

@interface PDFAnnotationButtonWidgetPrivateVars : NSObject
{
    long long controlType;
    unsigned long long fieldFlags;
    NSString *fieldName;
    NSString *onState;
    NSString *tooltipString;
    NSString *stringValue;
    unsigned int parentID;
    int state;
    _Bool highlight;
    UIFont *font;
    UIColor *fontColor;
    PDFAppearanceCharacteristics *appearanceChars;
    struct __CFDictionary *dictionary;
    PDFView *pdfView;
}

- (void).cxx_destruct;

@end

