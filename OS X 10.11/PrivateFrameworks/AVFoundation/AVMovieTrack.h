//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrack.h>

@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack
{
    AVMovieTrackInternal *_movieTrackInternal;
}

- (id)description;
@property(readonly, nonatomic) long long alternateGroupID;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaDecodeTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaPresentationTimeRange;
- (id)mediaDataStorage;

@end
