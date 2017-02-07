//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, NSString;

@interface GEODeviceState : PBCodable <NSCopying>
{
    GEOCarInfo *_carInfo;
    int _deviceBatteryState;
    NSString *_deviceCarrierName;
    int _deviceConnectivity;
    NSString *_deviceCountryCode;
    NSString *_deviceInputLocale;
    int _deviceInterfaceOrientation;
    NSString *_deviceLocale;
    NSString *_deviceOutputLocale;
    struct {
        unsigned int deviceBatteryState:1;
        unsigned int deviceConnectivity:1;
        unsigned int deviceInterfaceOrientation:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceCarrierName; // @synthesize deviceCarrierName=_deviceCarrierName;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property(retain, nonatomic) GEOCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property(retain, nonatomic) NSString *deviceOutputLocale; // @synthesize deviceOutputLocale=_deviceOutputLocale;
@property(retain, nonatomic) NSString *deviceInputLocale; // @synthesize deviceInputLocale=_deviceInputLocale;
@property(retain, nonatomic) NSString *deviceLocale; // @synthesize deviceLocale=_deviceLocale;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDeviceCarrierName;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState; // @synthesize deviceBatteryState=_deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation; // @synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation;
@property(readonly, nonatomic) BOOL hasCarInfo;
- (int)StringAsDeviceConnectivity:(id)arg1;
- (id)deviceConnectivityAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceConnectivity;
@property(nonatomic) int deviceConnectivity; // @synthesize deviceConnectivity=_deviceConnectivity;
@property(readonly, nonatomic) BOOL hasDeviceOutputLocale;
@property(readonly, nonatomic) BOOL hasDeviceInputLocale;
@property(readonly, nonatomic) BOOL hasDeviceLocale;
- (void)dealloc;

@end
