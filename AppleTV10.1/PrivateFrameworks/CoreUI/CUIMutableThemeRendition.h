//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface CUIMutableThemeRendition : CUIThemeRendition
{
    struct _renditionkeytoken *_renditionKey;
    struct CGImage *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (id)metrics;
- (id)sliceInformation;
- (struct CGImage *)unslicedImage;
- (const struct _renditionkeytoken *)key;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken *)arg3;

@end
