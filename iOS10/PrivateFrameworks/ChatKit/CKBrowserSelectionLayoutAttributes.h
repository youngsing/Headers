//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface CKBrowserSelectionLayoutAttributes : UICollectionViewLayoutAttributes
{
    _Bool _showingDeleteButton;
    _Bool _jittering;
    double _offsetX;
    double _offsetY;
    double _offsetFactorX;
    double _offsetFactorY;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double offsetFactorY; // @synthesize offsetFactorY=_offsetFactorY;
@property(nonatomic) double offsetFactorX; // @synthesize offsetFactorX=_offsetFactorX;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic, getter=isJittering) _Bool jittering; // @synthesize jittering=_jittering;
@property(nonatomic, getter=isShowingDeleteButton) _Bool showingDeleteButton; // @synthesize showingDeleteButton=_showingDeleteButton;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
