//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol StandardMovieUIInterface
- (void)setStatusMessage:(NSString *)arg1;
- (unsigned int)chapterIndex;
- (void)setChapterIndex:(unsigned int)arg1;
- (void)setChapterList:(NSArray *)arg1;
- (BOOL)isEditable;
- (BOOL)isEnabled;
- (void)setEditable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)volumeMuted;
- (void)setVolumeMuted:(BOOL)arg1;
- (double)volumeLevel;
- (void)setVolumeLevel:(double)arg1;
- (void)getSelectionStart:(double *)arg1 duration:(double *)arg2;
- (void)deselect;
- (void)setSelectionStart:(double)arg1 duration:(double)arg2;
- (void)updateResolution;
- (void)setPlaying:(BOOL)arg1;
- (double)loadedPercentage;
- (void)setLoadedPercentage:(double)arg1;
- (void)setDuration:(double)arg1;
- (double)playHeadUpdateInterval;
- (double)playHeadPosition;
- (void)setPlayHeadPosition:(double)arg1;
- (id)uiController;
- (void)setUIController:(id)arg1;
@end

