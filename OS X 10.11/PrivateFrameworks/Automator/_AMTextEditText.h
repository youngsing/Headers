//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/_AMTextEditItem.h>

@class NSColor, NSString;

@interface _AMTextEditText : _AMTextEditItem
{
}

@property long long size;
@property(copy) NSString *font;
@property(copy) NSColor *color;
- (id)words;
- (id)paragraphs;
- (id)characters;
- (id)attributeRuns;
- (id)attachments;

@end
