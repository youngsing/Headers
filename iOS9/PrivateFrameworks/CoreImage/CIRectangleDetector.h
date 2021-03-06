//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIRectangleDetector : CIDetector
{
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
    struct OpaqueVTPixelTransferSession *pixelTransferSession;
    struct __CVBuffer *interimScaleBuffer;
    struct __CVBuffer *scaleBuffer;
    float *perMeshPtr;
    void *_internalBuffer;
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)featuresInImageUsingCCRect:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

