//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CITileFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CITile2Filter : CITileFilter
{
    NSNumber *inputAcuteAngle;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputAcuteAngle; // @synthesize inputAcuteAngle;
- (id)outputImage;
- (id)_singlePixelImage;
- (struct vec2)_roiCenter;
- (float)_roiArea;
- (struct CGRect)_roiRect;

@end

