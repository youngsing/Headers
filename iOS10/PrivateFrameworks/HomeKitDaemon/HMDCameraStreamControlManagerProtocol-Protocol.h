//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraStreamMetrics, NSDictionary, NSError, NSString;

@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
- (void)remoteSetup:(NSString *)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)stopStream:(NSError *)arg1;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)startStream:(NSDictionary *)arg1;
- (void)negotiateStream;
@end
