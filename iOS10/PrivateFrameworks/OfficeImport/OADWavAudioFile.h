//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

__attribute__((visibility("hidden")))
@interface OADWavAudioFile : OADEmbeddedMediaFile
{
    float mDuration;
    _Bool mHasDuration;
}

@property(nonatomic) _Bool hasDuration; // @synthesize hasDuration=mHasDuration;
@property(nonatomic) float duration; // @synthesize duration=mDuration;
- (_Bool)isAudioOnly;
- (void)setIsAudioOnly:(_Bool)arg1;

@end

