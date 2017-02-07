//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CABackdropLayer, NSString;

@interface NCSelectionMaterialLayer : CALayer
{
    CABackdropLayer *_backdropLayer;
    CALayer *_branch;
    CALayer *_soft;
    CALayer *_normal;
    _Bool _reduceTransparency;
    NSString *_groupName;
}

@property(nonatomic) _Bool reduceTransparency; // @synthesize reduceTransparency=_reduceTransparency;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)_setupForReducedTransparency;
- (void)_buildLayerTree;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithGroupName:(id)arg1;

@end
