//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/NSCoding-Protocol.h>
#import <Slideshows/NSCopying-Protocol.h>

@class MCAnimationKeyframe, MPAnimationPath, NSMutableDictionary;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_attributes;
    MPAnimationPath *_parentPath;
    MCAnimationKeyframe *_keyframe;
    double _time;
    unsigned long long _offsetType;
    double _preControl;
    double _postControl;
}

@property(nonatomic) unsigned long long offsetType; // @synthesize offsetType=_offsetType;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double postControl; // @synthesize postControl=_postControl;
@property(nonatomic) double preControl; // @synthesize preControl=_preControl;
- (id)parentPath;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)fullDebugLog;
- (void)dump;
- (long long)relativeTimeCompare:(id)arg1;
- (void)copyVars:(id)arg1;
- (void)setKeyframe:(id)arg1;
- (id)parentDocument;
- (void)setParentPath:(id)arg1;
- (id)objectSpecifier;

@end

