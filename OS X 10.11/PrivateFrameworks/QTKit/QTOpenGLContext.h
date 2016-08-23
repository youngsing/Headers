//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTGraphicsDevice;

__attribute__((visibility("hidden")))
@interface QTOpenGLContext : NSObject
{
    QTGraphicsDevice *_device;
    struct _CGLContextObject *_context;
    struct _CGLPixelFormatObject *_pixelFormat;
}

+ (id)openGLContextWithGraphicsDevice:(id)arg1 options:(id)arg2;
- (void)setSyncsToVBL:(BOOL)arg1;
- (BOOL)syncsToVBL;
- (CDStruct_bc20ce20)openGLCapabilities;
- (struct _CGLPixelFormatObject *)CGLPixelFormatObj;
- (struct _CGLContextObject *)CGLContextObj;
- (id)graphicsDevice;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithGraphicsDevice:(id)arg1 options:(id)arg2;
- (id)openGLTextureWithImageBuffer:(struct __CVBuffer *)arg1;

@end

