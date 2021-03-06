//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVStackWrappingView : UIView
{
    UIImageView *_bgImageView;
    UIImage *_backgroundImage;
    NSArray *_headerSupplementaryViews;
    _TVCollectionView *_stackView;
    NSArray *_supplementaryCellLayoutAttributes;
}

@property(readonly, copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // @synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes;
@property(retain, nonatomic) _TVCollectionView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSArray *headerSupplementaryViews; // @synthesize headerSupplementaryViews=_headerSupplementaryViews;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets)arg1;

@end

