//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVTrimControlsTrackView.h>

@class AVAudioAmplitudeExtractionSession, AVDataPool, AVPlayerController, CALayer, CATiledLayer;

__attribute__((visibility("hidden")))
@interface AVTrimControlsAudioTrackView : AVTrimControlsTrackView
{
    AVPlayerController *_playerController;
    AVAudioAmplitudeExtractionSession *_audioAmplitudeExtractionSession;
    CATiledLayer *_waveformLayer;
    CALayer *_centerLineLayer;
    struct CGSize _lastPreviewLayerBoundsSize;
    AVDataPool *_rectListPool;
    struct CGRect _pendingDirtyRect;
}

+ (void)drawAudioWaveformLayer:(id)arg1 inContext:(struct CGContext *)arg2 withAudioAmplitudeExtractionSession:(id)arg3 duration:(CDStruct_1b6d18a9)arg4 rectListPool:(id)arg5;
- (void).cxx_destruct;
- (void)audioAmplitudeSamplesDidBecomeAvailable:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)viewDidEndLiveResize;
- (void)setAudioAmplitudeExtractionSession:(id)arg1;
- (id)audioAmplitudeExtractionSession;
- (void)setPlayerController:(id)arg1;
- (id)playerController;
- (void)dealloc;
- (id)init;

@end

