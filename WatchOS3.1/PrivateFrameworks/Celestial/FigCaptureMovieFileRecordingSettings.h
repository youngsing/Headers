//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureRecordingSettings.h>

@class NSArray, NSDictionary;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings
{
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    _Bool _videoMirrored;
    int _videoOrientation;
    _Bool _recordVideoOrientationAndMirroringChanges;
    CDStruct_1b6d18a9 _movieFragmentInterval;
    NSArray *_movieLevelMetadata;
    _Bool _sendPreviewIOSurface;
    _Bool _irisRecording;
    int _bravoCameraSelectionBehavior;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int bravoCameraSelectionBehavior; // @synthesize bravoCameraSelectionBehavior=_bravoCameraSelectionBehavior;
@property(nonatomic, getter=isIrisRecording) _Bool irisRecording; // @synthesize irisRecording=_irisRecording;
@property(nonatomic) _Bool sendPreviewIOSurface; // @synthesize sendPreviewIOSurface=_sendPreviewIOSurface;
@property(copy, nonatomic) NSArray *movieLevelMetadata; // @synthesize movieLevelMetadata=_movieLevelMetadata;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;
@property(nonatomic) _Bool recordVideoOrientationAndMirroringChanges; // @synthesize recordVideoOrientationAndMirroringChanges=_recordVideoOrientationAndMirroringChanges;
@property(nonatomic) int videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) _Bool videoMirrored; // @synthesize videoMirrored=_videoMirrored;
@property(copy, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(copy, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

