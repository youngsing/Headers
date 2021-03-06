//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class FBSSceneClientIdentity, FBSSceneIdentity, FBSSceneSpecification, NSString;

@interface FBSSceneDefinition : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    FBSSceneIdentity *_identity;
    FBSSceneClientIdentity *_clientIdentity;
    FBSSceneSpecification *_specification;
}

+ (id)definition;
@property(copy, nonatomic) FBSSceneSpecification *specification; // @synthesize specification=_specification;
@property(copy, nonatomic) FBSSceneClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(copy, nonatomic) FBSSceneIdentity *identity; // @synthesize identity=_identity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

