//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene *_scene;
    NSMutableDictionary *_touchMap;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)dealloc;
- (id)init;

@end

