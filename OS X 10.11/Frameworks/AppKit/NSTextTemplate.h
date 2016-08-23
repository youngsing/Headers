//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewTemplate.h>

@class NSColor, NSFont;

@interface NSTextTemplate : NSViewTemplate
{
    id _contents;
    NSColor *_textColor;
    NSFont *_font;
    unsigned long long _alignment;
    NSColor *_backgroundColor;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    id _delegate;
    struct __ttFlags {
        unsigned int drawsBackground:1;
        unsigned int selectable:1;
        unsigned int editable:1;
        unsigned int richText:1;
        unsigned int importsGraphics:1;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int fieldEditor:1;
        unsigned int usesFontPanel:1;
        unsigned int rulerVisible:1;
        unsigned int allowsUndo:1;
        unsigned int _pad:21;
    } _ttFlags;
}

+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createRealObject;
- (void)dealloc;
- (id)initWithView:(id)arg1 className:(id)arg2;

@end

