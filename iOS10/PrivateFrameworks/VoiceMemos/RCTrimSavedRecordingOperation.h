//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/RCTrimCompositionOperation.h>

@class RCSavedRecording;

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation
{
    RCSavedRecording *_sourceRecording;
    RCSavedRecording *_destinationRecording;
}

@property(readonly, nonatomic) RCSavedRecording *destinationRecording; // @synthesize destinationRecording=_destinationRecording;
@property(readonly, nonatomic) RCSavedRecording *sourceRecording; // @synthesize sourceRecording=_sourceRecording;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(CDStruct_73a5d3ca)arg3 trimMode:(long long)arg4;

@end

