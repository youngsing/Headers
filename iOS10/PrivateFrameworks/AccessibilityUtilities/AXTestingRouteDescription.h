//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioSessionRouteDescription.h>

@class NSArray;

@interface AXTestingRouteDescription : AVAudioSessionRouteDescription
{
    NSArray *outputs;
    NSArray *inputs;
}

@property(retain) NSArray *inputs; // @synthesize inputs;
@property(retain) NSArray *outputs; // @synthesize outputs;
- (void)dealloc;

@end

