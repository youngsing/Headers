//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalKit/MTKTextureLoaderData.h>

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData
{
    struct CGImageBlockSet *_blockSet;
    struct __CFData *_cfData;
}

- (BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned int)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorModel:(int)arg4 isOptimized:(BOOL)arg5 options:(id)arg6;
- (BOOL)decodeCGImageDataProvider:(struct CGImage *)arg1 options:(id)arg2;
- (BOOL)decodeCGImageImageProvider:(struct CGImage *)arg1 CGImageProvider:(struct CGImageProvider *)arg2 options:(id)arg3;
- (BOOL)decodeCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)uploadDataWithOptions:(id)arg1;
- (BOOL)loadCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)loadData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)releaseData;

@end
