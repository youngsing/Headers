//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputSettingsAssistantBaseSettingsProvider-Protocol.h>

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider>
{
    NSDictionary *_exportSettings;
}

@property(readonly, nonatomic) NSDictionary *baseVideoSettings;
@property(readonly, nonatomic) NSDictionary *baseAudioSettings;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

