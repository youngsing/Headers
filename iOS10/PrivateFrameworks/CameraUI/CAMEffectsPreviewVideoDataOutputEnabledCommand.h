//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMEffectsPreviewVideoDataOutputEnabledCommand : CAMCaptureCommand
{
    _Bool __enabled;
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoDataOutputEnabled:(_Bool)arg1;

@end
