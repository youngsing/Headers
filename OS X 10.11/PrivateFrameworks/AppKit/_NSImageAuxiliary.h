//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImageRep, NSString;

@interface _NSImageAuxiliary : NSObject
{
    NSColor *backgroundColor;
    id imageDelegate;
    struct CGRect alignmentRectInNormalizedCoordinates;
    NSImageRep *cachedRep;
    NSString *accessibilityDescriptionBacking;
    struct NSEdgeInsets capInsets;
    long long resizingMode;
}

@property(retain) NSImageRep *cachedRep; // @synthesize cachedRep;

@end

