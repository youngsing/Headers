//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class CAAnimation, NSString, SCNNode;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying>
{
    CAAnimation *_animation;
    long long _inputMode;
    double _inputScale;
    double _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
    id _c3dAnimation;
}

+ (BOOL)supportsSecureCoding;
+ (id)controllerWithAnimation:(id)arg1;
+ (id)particlePropertyControllerWithAnimation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNParticlePropertyController:(id)arg1;
- (void)_customEncodingOfSCNParticlePropertyController:(id)arg1;
@property(copy, nonatomic) NSString *inputProperty;
@property(nonatomic) __weak SCNNode *inputOrigin;
@property(nonatomic) double inputBias;
@property(nonatomic) double inputScale;
@property(nonatomic) long long inputMode;
@property(retain, nonatomic) CAAnimation *animation;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)c3dAnimation;
- (void)setC3dAnimation:(id)arg1;
- (id)init;

@end

