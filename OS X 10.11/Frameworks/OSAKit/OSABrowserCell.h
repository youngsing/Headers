//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBrowserCell.h>

@class NSDictionary, OSADefinition;

@interface OSABrowserCell : NSBrowserCell
{
    NSDictionary *_item;
    OSADefinition *_definition;
}

- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setDefinition:(id)arg1;
- (id)definition;
- (void)setItem:(id)arg1;
- (id)item;
- (void)dealloc;

@end

