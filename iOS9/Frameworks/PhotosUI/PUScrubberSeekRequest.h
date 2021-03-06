//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, NSDate;

__attribute__((visibility("hidden")))
@interface PUScrubberSeekRequest : NSObject
{
    NSDate *_dateCreated;
    double _seekTime;
    AVPlayer *_avPlayer;
}

@property(nonatomic) __weak AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void).cxx_destruct;
- (id)initWithAvPlayer:(id)arg1 seekTime:(double)arg2;
- (id)init;

@end

