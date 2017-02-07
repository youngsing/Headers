//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MPAnimationManager : NSObject
{
    NSMutableDictionary *mAnimations;
    NSMutableDictionary *mAnimationSets;
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
+ (void)loadAnimationManagerWithPaths:(id)arg1;
- (id)animationDescriptionForAnimationID:(id)arg1;
- (id)animationDescriptionForAnimationSetID:(id)arg1;
- (void)dealloc;
- (id)initWithPaths:(id)arg1;

@end
