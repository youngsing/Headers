//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class NCMaterialLayer;

@interface NCTexturedView : NSVisualEffectView
{
    NCMaterialLayer *_materialLayer;
    _Bool _textureVisible;
}

@property(nonatomic) _Bool textureVisible; // @synthesize textureVisible=_textureVisible;
- (void).cxx_destruct;
- (BOOL)_shouldAutoFlattenLayerTree;
- (void)layout;
- (void)_createBackdropLayers;
- (void)_setupAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
