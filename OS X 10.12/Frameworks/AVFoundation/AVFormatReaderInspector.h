//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector
{
    struct OpaqueFigFormatReader *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (CDStruct_1b6d18a9)overallDurationHint;
- (BOOL)containsFragments;
- (BOOL)canContainFragments;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)_hasQTSaveRestriction;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)trackReferences;
- (id)alternateTrackGroups;
- (long long)trackCount;
- (BOOL)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;
- (CDStruct_1b6d18a9)duration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
@property(retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader *formatReader;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg1;

@end

