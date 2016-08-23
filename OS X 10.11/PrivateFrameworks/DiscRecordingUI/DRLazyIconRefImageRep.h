//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

__attribute__((visibility("hidden")))
@interface DRLazyIconRefImageRep : NSImageRep
{
    void *_iconRef;
    long long _availableSizesMask;
    short _iconTransform;
    void *_private;
    unsigned long long _reserved;
}

+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_isValid;
- (long long)_uncachedSize;
- (BOOL)_drawFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 alpha:(float)arg4 compositing:(BOOL)arg5 flipped:(BOOL)arg6;
- (BOOL)draw;
- (BOOL)drawAtPoint:(struct CGPoint)arg1;
- (BOOL)drawInRect:(struct CGRect)arg1;
- (void)setIconTransform:(short)arg1;
- (short)iconTransform;
- (long long)pixelsHigh;
- (void)setPixelsHigh:(long long)arg1;
- (long long)pixelsWide;
- (void)setPixelsWide:(long long)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (unsigned long long)availableSizesMask;
- (void *)iconRef;
- (BOOL)_loadIconRef;
- (void)finalize;
- (void)dealloc;
- (id)initWithSystemIcon:(long long)arg1;
- (id)init;

@end

