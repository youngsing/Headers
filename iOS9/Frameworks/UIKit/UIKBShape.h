//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying>
{
    UIKBGeometry *m_geometry;
    struct CGRect m_frame;
    struct CGRect m_paddedFrame;
    int m_concaveCorner;
    struct CGSize m_concaveCornerOffset;
    unsigned long long m_uid;
    _Bool m_scaled;
    UIKBShape *m_originalShape;
}

+ (id)shapeByCombining:(id)arg1 withShape:(id)arg2;
+ (id)shape;
@property(retain, nonatomic) UIKBShape *originalShape; // @synthesize originalShape=m_originalShape;
@property(nonatomic) _Bool scaled; // @synthesize scaled=m_scaled;
@property(readonly, nonatomic) unsigned long long uid; // @synthesize uid=m_uid;
@property(nonatomic) struct CGSize concaveCornerOffset; // @synthesize concaveCornerOffset=m_concaveCornerOffset;
@property(nonatomic) int concaveCorner; // @synthesize concaveCorner=m_concaveCorner;
@property(nonatomic) struct CGRect paddedFrame; // @synthesize paddedFrame=m_paddedFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=m_frame;
@property(retain, nonatomic) UIKBGeometry *geometry; // @synthesize geometry=m_geometry;
- (void)scaleIfNeeded:(double)arg1 onlyYAxis:(_Bool)arg2;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 inYAxis:(_Bool)arg2;
- (void)scaleWidth:(double)arg1;
- (void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(_Bool)arg6;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5;
- (void)addRectFrom:(id)arg1;
- (id)description;
- (_Bool)shouldUseGeometry;
- (_Bool)isEmpty;
- (void)setConcaveCornerSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)makeLikeOther:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3 concaveCorner:(int)arg4 concaveCornerOffset:(struct CGSize)arg5;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3;
- (id)init;

@end
