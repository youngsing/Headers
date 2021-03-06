//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDAffineGeometry, GQDFilteredImage, GQDImageBinary, GQDPath, NSString;

__attribute__((visibility("hidden")))
@interface GQDMedia : GQDGraphic <GQDNameMappable>
{
    GQDFilteredImage *mFilteredImage;
    GQDAffineGeometry *mCropGeometry;
    GQDImageBinary *mOriginalImageBinary;
    GQDPath *mMaskingShapePath;
    struct CGPath *mAlphaMaskBezier;
}

+ (const struct StateSpec *)stateForReading;
- (struct CGPath *)alphaMaskBezier;
- (id)maskingShapePath;
- (id)cropGeometry;
- (id)imageBinary;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

