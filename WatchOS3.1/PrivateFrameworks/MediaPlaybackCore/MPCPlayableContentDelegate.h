//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPPlayableContentDelegate-Protocol.h>

@class MPCMediaPlayerLegacyPlayer, NSString;

@interface MPCPlayableContentDelegate : NSObject <MPPlayableContentDelegate>
{
    MPCMediaPlayerLegacyPlayer *_player;
}

- (void).cxx_destruct;
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithContentItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

