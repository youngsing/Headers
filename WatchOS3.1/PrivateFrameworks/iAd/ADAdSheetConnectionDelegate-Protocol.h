//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSString, NSXPCConnection;

@protocol ADAdSheetConnectionDelegate <NSObject>
- (void)configureConnection:(NSXPCConnection *)arg1;
- (NSString *)adSheetMachServiceName;

@optional
- (void)adSheetConnectionLost;
- (void)adSheetConnectionEstablished;
- (_Bool)shouldConnectToAdSheet;
@end
