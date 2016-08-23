//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSDictionary, SCNNode, SCNScene;

@protocol SCNRendererJSExport <JSExport>
+ (id)rendererWithContext:(void *)arg1 options:(NSDictionary *)arg2;
@property(nonatomic) id delegate;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL loops;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(nonatomic) BOOL jitteringEnabled;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) double nextFrameTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)renderAtTime:(double)arg1;
- (void)render;
@end

