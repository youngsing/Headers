//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CIWhitePointAdjust : CIFilter
{
    CIImage *inputImage;
    CIColor *inputColor;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;
- (id)_kernel;

@end
