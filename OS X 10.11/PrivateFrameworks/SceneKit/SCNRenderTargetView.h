//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNView.h>

@class NSOpenGLContext, SCNPlane;

__attribute__((visibility("hidden")))
@interface SCNRenderTargetView : SCNView
{
    struct __C3DTexture *_texture;
    int _filterChannel;
    SCNPlane *_plane;
    NSOpenGLContext *_sourceContext;
}

@property(retain, nonatomic) NSOpenGLContext *sourceContext; // @synthesize sourceContext=_sourceContext;
- (void)setFilterChannel:(id)arg1;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)dealloc;
- (void)setTexture:(struct __C3DTexture *)arg1;
- (void)awakeFromNib;

@end

