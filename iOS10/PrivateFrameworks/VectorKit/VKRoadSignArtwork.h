//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRoadSignArtwork : NSObject
{
    struct __CTLine *_line;
    struct RoadSignMetrics _signMetrics;
    struct RoadSignTextMetrics _textMetrics;
    struct RoadSignGeneratedMetrics _generatedMetrics;
    struct RoadSignColoring _signColoring;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Box_3fb92e00)localCollisionBounds;
- (Box_3fb92e00)localRenderBounds;
- (Matrix_8746f91e)offsetPixelForPixel:(Matrix_8746f91e)arg1;
- (id)image;
- (void)dealloc;
- (id)initWithString:(id)arg1 signMetrics:(struct RoadSignMetrics)arg2 textMetrics:(struct RoadSignTextMetrics)arg3 signColoring:(struct RoadSignColoring)arg4;

@end
