//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTCGContextRenderer, QTMovie;

@interface QTVideoRendererWebKitOnly : NSObject
{
    QTMovie *_movie;
    QTCGContextRenderer *_renderer;
}

- (void)newImageAvailable;
- (void)drawInRect:(struct CGRect)arg1;
- (void)setMovie:(id)arg1;
- (id)movie;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

