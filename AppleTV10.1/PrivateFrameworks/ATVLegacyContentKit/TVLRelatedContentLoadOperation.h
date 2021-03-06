//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, TVLVideoPlayerElement, TVRelatedContent;
@protocol TVSMediaItem, TVSPlayback;

@interface TVLRelatedContentLoadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    id <TVSPlayback> _player;
    TVLVideoPlayerElement *_videoPlayerElement;
    NSObject<TVSMediaItem> *_mediaItem;
    TVRelatedContent *_relatedContent;
}

@property(retain, nonatomic) TVRelatedContent *relatedContent; // @synthesize relatedContent=_relatedContent;
@property(readonly, nonatomic) NSObject<TVSMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) TVLVideoPlayerElement *videoPlayerElement; // @synthesize videoPlayerElement=_videoPlayerElement;
@property(readonly, nonatomic) id <TVSPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)start;
- (_Bool)isAsynchronous;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)_endExecuting;
- (void)_beginExecuting;
- (void)_loadRelatedContentForMediaItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_containsOptions:(id)arg1;
- (id)_upNextJSParamterFromVideoAsset:(id)arg1 context:(struct OpaqueJSContext *)arg2;
- (id)init;
- (id)initWithPlayer:(id)arg1 videoPlayerElement:(id)arg2 mediaItem:(id)arg3;

@end

