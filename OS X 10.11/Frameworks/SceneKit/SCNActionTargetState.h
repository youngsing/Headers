//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNActionTargetState : NSObject
{
    BOOL usesEuler;
    float opacity;
    struct SCNVector3 position;
    struct SCNVector3 euler;
    struct SCNVector3 scale;
    struct SCNVector4 rotation;
}

@property(nonatomic) float opacity; // @synthesize opacity;
@property(nonatomic) BOOL usesEuler; // @synthesize usesEuler;
@property(nonatomic) struct SCNVector3 scale; // @synthesize scale;
@property(nonatomic) struct SCNVector4 rotation; // @synthesize rotation;
@property(nonatomic) struct SCNVector3 euler; // @synthesize euler;
@property(nonatomic) struct SCNVector3 position; // @synthesize position;

@end

