//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScriptingBridge/SBApplication.h>

@class NSString, SBObject, _AMiTunes7EQPreset, _AMiTunes7Encoder, _AMiTunes7Playlist, _AMiTunes7Track, _AMiTunes7Visual;

@interface _AMiTunes7Application : SBApplication
{
}

+ (id)application;
- (void)openLocation:(id)arg1;
- (void)updatePodcast;
- (void)updateAllPodcasts;
- (void)subscribe:(id)arg1;
- (void)eject;
- (void)update;
- (void)stop;
- (void)rewind;
- (void)resume;
- (void)previousTrack;
- (void)playpause;
- (void)playOnce:(BOOL)arg1;
- (void)pause;
- (void)nextTrack;
- (void)fastForward;
- (id)convert:(id)arg1;
- (void)backTrack;
- (id)add:(id)arg1 to:(id)arg2;
- (void)quit;
- (void)run;
- (void)printPrintDialog:(BOOL)arg1 withProperties:(id)arg2 kind:(int)arg3 theme:(id)arg4;
@property int visualSize;
@property BOOL visualsEnabled;
@property(readonly, copy) NSString *version;
@property long long soundVolume;
@property(readonly, copy) SBObject *selection;
@property(readonly) int playerState;
@property long long playerPosition;
@property BOOL mute;
@property(readonly, copy) NSString *name;
@property BOOL fullScreen;
@property BOOL frontmost;
@property BOOL fixedIndexing;
@property BOOL EQEnabled;
@property(copy) _AMiTunes7Visual *currentVisual;
@property(readonly, copy) _AMiTunes7Track *currentTrack;
@property(readonly, copy) NSString *currentStreamURL;
@property(readonly, copy) NSString *currentStreamTitle;
@property(readonly, copy) _AMiTunes7Playlist *currentPlaylist;
@property(copy) _AMiTunes7EQPreset *currentEQPreset;
@property(copy) _AMiTunes7Encoder *currentEncoder;
- (id)windows;
- (id)visuals;
- (id)sources;
- (id)playlistWindows;
- (id)EQWindows;
- (id)EQPresets;
- (id)encoders;
- (id)browserWindows;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;

@end

