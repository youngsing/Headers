//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreWiFi/CoreWiFiIE.h>

@class NSData;

@interface CoreWiFiAppleiOSIE : CoreWiFiIE
{
    BOOL supportsWow;
    NSData *bluetoothMac;
}

@property(retain, nonatomic) NSData *bluetoothMac; // @synthesize bluetoothMac;
@property(nonatomic) BOOL supportsWow; // @synthesize supportsWow;
- (BOOL)parseIE:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIE:(id)arg1;
- (id)init;

@end
