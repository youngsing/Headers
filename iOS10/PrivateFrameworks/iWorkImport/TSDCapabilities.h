//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDCapabilities : NSObject
{
    long long _platform;
    long long _deviceType;
    long long _device;
    long long _renderer;
}

+ (id)currentCapabilities;
@property(readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) struct CGSize maximumHardcodedTextureSize;
- (struct CGSize)maximumTextureSizeWithGLContext:(id)arg1;
@property(readonly, nonatomic) _Bool hasLightningPort;
@property(readonly, nonatomic) _Bool isRendererH5OrBelow;
@property(readonly, nonatomic) _Bool isRendererH4OrBelow;
@property(readonly, nonatomic) _Bool isRendererH3OrBelow;
- (id)init;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end

