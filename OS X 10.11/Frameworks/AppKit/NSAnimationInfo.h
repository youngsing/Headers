//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSBitmapImageRep;

@interface NSAnimationInfo : NSObject <NSCopying>
{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    int _effect;
    struct CGRect _lastFrame;
    NSBitmapImageRep *_viewImage;
    struct CGRect _viewImageAlignmentRect;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

