//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class NSNumber, NSString;

@protocol _IKJSDevice <JSExport>
@property(readonly, nonatomic) NSNumber *pixelRatio;
@property(readonly, nonatomic) NSString *vendorID;
@property(readonly, nonatomic) _Bool isInRetailDemoMode;
@property(readonly, nonatomic) double lastNetworkChangedTime;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic) _Bool isInAirplaneMode;
- (NSNumber *)capacity:(NSString *)arg1;
@end
