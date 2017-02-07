//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VCPHoughTransform : NSObject
{
    float *_edgeMap;
    int _mapWidth;
    int _mapHeight;
    int *_accumulator;
    int _accWidth;
    int _accHeight;
    int _accHalfHeight;
    float _angleStep;
    _Bool _verbose;
}

- (void)Transform;
- (int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2;
- (void)dealloc;
- (id)initWithEdgeMap:(float *)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4;

@end
