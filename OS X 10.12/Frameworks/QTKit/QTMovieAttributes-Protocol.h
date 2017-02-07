//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAffineTransform, NSArray, NSColor, NSDate, NSDictionary, NSError, NSSet, NSString, NSURL, QTDataReference;

@protocol QTMovieAttributes
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)limitReadAhead;
- (void)_setBlocksAllWiredActions:(BOOL)arg1;
- (BOOL)_blocksAllWiredActions;
- (struct MatrixRecord)originalMovieMatrix;
- (NSSet *)imageConsumers;
- (void)setUseHardwareVideoDecoderIfAvailable:(BOOL)arg1;
- (BOOL)useHardwareVideoDecoderIfAvailable;
- (BOOL)usesHardwareVideoDecoder;
- (BOOL)hasWiredActions;
- (void)executeWiredActionsAtTime:(CDStruct_900afa40)arg1;
- (void)executeFrameLoadedActionsAtTime:(CDStruct_900afa40)arg1;
- (NSAffineTransform *)preferredTransform;
- (void)setCurrentTime:(CDStruct_900afa40)arg1 inRange:(CDStruct_977f9211)arg2;
- (BOOL)wouldUseVisualContext;
- (BOOL)visualMovieBoxIsOpaque;
- (void)setVisualDrawsMovieBoxBackgroundColor:(BOOL)arg1;
- (BOOL)visualDrawsMovieBoxBackgroundColor;
- (void)setVisualMovieBoxBackgroundColor:(NSColor *)arg1;
- (NSColor *)visualMovieBoxBackgroundColor;
- (void)setVisualBackgroundColor:(NSColor *)arg1;
- (NSColor *)visualBackgroundColor;
- (unsigned int)compositingMode;
- (void)setTimeScale:(long long)arg1;
- (long long)timeScale;
- (void)setCurrentSize:(struct CGSize)arg1;
- (struct CGSize)currentSize;
- (void)setHotspotsVisible:(BOOL)arg1;
- (BOOL)hotspotsVisible;
- (void)setFieldOfView:(float)arg1;
- (float)fieldOfView;
- (void)setZoomRate:(float)arg1;
- (float)zoomRate;
- (void)setTiltAngle:(float)arg1;
- (float)tiltAngle;
- (void)setPanTiltSpeed:(float)arg1;
- (float)panTiltSpeed;
- (void)setPanAngle:(float)arg1;
- (float)panAngle;
- (int)hotspotCount;
- (int)nodeCount;
- (BOOL)isVRMovie;
- (NSArray *)missingComponentsWithOptions:(NSDictionary *)arg1;
- (NSArray *)interactivityFeatures;
- (NSString *)MIMEType;
- (void)setCanDRMInteractWithUser:(BOOL)arg1;
- (BOOL)canDRMInteractWithUser;
- (BOOL)isDRMAuthorized;
- (BOOL)isDRMProtected;
- (void)setApertureMode:(NSString *)arg1;
- (NSString *)apertureMode;
- (BOOL)hasApertureModeDimensions;
- (void)setTreble:(float)arg1;
- (float)treble;
- (void)setGain:(float)arg1;
- (float)gain;
- (void)setBass:(float)arg1;
- (float)bass;
- (void)setBalance:(float)arg1;
- (float)balance;
- (void)setPreviewRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)previewRange;
- (void)setPreviewMode:(BOOL)arg1;
- (BOOL)previewMode;
- (void)setUsesPreferredLanguage:(BOOL)arg1;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setPreferredRate:(float)arg1;
- (float)preferredRate;
- (void)setPreferredMuted:(BOOL)arg1;
- (BOOL)preferredMuted;
- (NSArray *)chapterList;
- (NSString *)controllerType;
- (void)setPosterTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)posterTime;
- (BOOL)isSteppable;
- (BOOL)isLinear;
- (BOOL)isInteractive;
- (BOOL)hasVideo;
- (BOOL)hasDuration;
- (BOOL)hasAudio;
- (void)setPlaysSelectionOnly:(BOOL)arg1;
- (BOOL)playsSelectionOnly;
- (void)setPlaysAllFrames:(BOOL)arg1;
- (BOOL)playsAllFrames;
- (CDStruct_977f9211)selection;
- (BOOL)rateChangePreservesPitch;
- (unsigned long long)dataSize;
- (NSDate *)modificationTime;
- (NSDate *)creationTime;
- (void)setDisplayName:(NSString *)arg1;
- (NSString *)displayName;
- (void)setCopyright:(NSString *)arg1;
- (NSString *)copyright;
- (void)setAutoAlternates:(BOOL)arg1;
- (BOOL)autoAlternates;
- (void)setActiveSegment:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)activeSegment;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (void)setEditable:(BOOL)arg1;
- (BOOL)editable;
- (BOOL)isMuted;
- (void)setLoopsBackAndForth:(BOOL)arg1;
- (BOOL)loopsBackAndForth;
- (void)setLoops:(BOOL)arg1;
- (BOOL)loops;
- (NSArray *)loadedRanges;
- (NSArray *)availableRanges;
- (struct CGSize)naturalSize;
- (CDStruct_900afa40)duration;
- (NSError *)loadStateError;
- (long long)loadState;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)getDefaultDataLocatorAttributeKey:(id *)arg1 andValue:(id *)arg2;
- (QTDataReference *)initialDataReference;
- (NSURL *)URL;
- (NSString *)fileName;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setSelection:(CDStruct_977f9211)arg1;
- (void)setRate:(float)arg1;
- (float)rate;
- (void)setMuted:(BOOL)arg1;
- (void)setCurrentTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)currentTime;
@end
