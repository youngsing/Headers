//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HMAccessoryDelegate-Protocol.h>

@class HMAccessory, HMCharacteristic, HMService, NSString;

@protocol HFAccessoryObserver <HMAccessoryDelegate>

@optional
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareVersion:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
@end

