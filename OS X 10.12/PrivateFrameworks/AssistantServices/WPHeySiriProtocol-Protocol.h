//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSError, NSUUID, WPHeySiri;

@protocol WPHeySiriProtocol <NSObject>
- (void)heySiri:(WPHeySiri *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSData *)arg3;
- (void)heySiriDidUpdateState:(WPHeySiri *)arg1;

@optional
- (void)heySiri:(WPHeySiri *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)heySiriStoppedScanning:(WPHeySiri *)arg1;
- (void)heySiriStartedScanning:(WPHeySiri *)arg1;
- (void)heySiri:(WPHeySiri *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)heySiriStoppedAdvertising:(WPHeySiri *)arg1;
- (void)heySiriAdvertisingPending:(WPHeySiri *)arg1;
- (void)heySiriStartedAdvertising:(WPHeySiri *)arg1;
@end
