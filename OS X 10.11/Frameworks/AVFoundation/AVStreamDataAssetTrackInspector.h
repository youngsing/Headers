//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector
{
    AVWeakReference *_weakReferenceToAsset;
    int _trackID;
}

- (id)mediaCharacteristics;
- (id)formatDescriptions;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (CDStruct_e83c9415)timeRange;
- (BOOL)isEnabled;
- (id)mediaType;
- (unsigned int)figMediaType;
- (int)trackID;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

