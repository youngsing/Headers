//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADColorTransform : NSObject <NSCopying>
{
    int mType;
}

+ (id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2;
+ (float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(_Bool)arg3;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1;
- (id)description;

@end
