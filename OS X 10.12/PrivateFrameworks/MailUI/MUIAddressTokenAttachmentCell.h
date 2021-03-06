//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTokenAttachmentCell.h>

@class NSColor;

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _displayAsExternal;
    BOOL _neverShowSeparator;
    NSColor *_foregroundColor;
}

+ (id)colorForExternalDomain;
@property(retain, nonatomic) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property BOOL neverShowSeparator; // @synthesize neverShowSeparator=_neverShowSeparator;
@property(nonatomic) BOOL displayAsExternal; // @synthesize displayAsExternal=_displayAsExternal;
- (void).cxx_destruct;
- (id)_textAttributes;
- (BOOL)_finalizeStyleTextOptions:(id)arg1;
- (id)tokenTintColor;

@end

