//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PSIBitmapWrapper : NSObject
{
    struct CGContext *_bitmap;
    NSData *_pixelData;
    BOOL _freeData;
}

- (id)compressedData;
- (id)pixelData;
- (struct CGContext *)bitmapContext;
- (void)finalize;
- (void)dealloc;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;

@end

