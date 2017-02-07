//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface IACastleIconView : NSView
{
    NSImage *_icon;
    BOOL _enabled;
}

@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end
