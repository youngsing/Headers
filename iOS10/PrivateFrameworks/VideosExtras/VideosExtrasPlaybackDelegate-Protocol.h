//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosExtras/NSObject-Protocol.h>

@class MPPlaybackContext, NSArray;

@protocol VideosExtrasPlaybackDelegate <NSObject>
- (void)extrasRequestReloadWithContext:(MPPlaybackContext *)arg1;
- (void)extrasRequestsPlaybackStop;
- (void)extrasRequestsMediaPlayback:(NSArray *)arg1 isBackground:(_Bool)arg2;
@end
