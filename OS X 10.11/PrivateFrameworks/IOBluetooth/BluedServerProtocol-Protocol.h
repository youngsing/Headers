//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IOBluetoothDeviceInquiry, NSData, NSDictionary, NSString;

@protocol BluedServerProtocol
- (int)secureBluetooth:(BOOL)arg1 withAuthorization:(const CDStruct_7a08cd8d *)arg2;
- (BOOL)setInquiryParameters:(in bycopy NSDictionary *)arg1 forRemoteObject:(in id)arg2;
- (BOOL)hasRemoteObjectJoinedInquiry:(in id)arg1;
- (int)unjoinInquiryForRemoteObject:(in IOBluetoothDeviceInquiry *)arg1;
- (int)joinInquiryWithRemoteObject:(in IOBluetoothDeviceInquiry *)arg1 withAttributes:(in bycopy NSData *)arg2 withParameters:(in NSDictionary *)arg3;
- (int)getConfiguredTypes:(in bycopy NSString *)arg1 types:(inout unsigned int *)arg2;
- (int)removeConfiguredDevice:(in bycopy NSString *)arg1;
- (void)unregisterHIDDevice:(in bycopy NSString *)arg1;
- (void)configureHIDDevice:(in bycopy NSString *)arg1;
- (BOOL)isConfiguredHIDDevice:(in bycopy NSString *)arg1;
- (void)removeIgnoredHIDDevice:(in bycopy NSString *)arg1;
- (void)ignoreHIDDevice:(in bycopy NSString *)arg1;
- (int)allowRoleSwitchForDevice:(in bycopy NSString *)arg1;
- (int)disallowRoleSwitchForDevice:(in bycopy NSString *)arg1;
- (int)removeLinkKeyForDevice:(in bycopy NSString *)arg1;
- (id)findServerDevice:(in bycopy NSString *)arg1;
- (int)removeServiceWithRecordHandle:(unsigned int)arg1;
- (bycopy NSDictionary *)addServiceDict:(in bycopy NSDictionary *)arg1 clientObject:(in byref id)arg2;
- (bycopy NSDictionary *)getLocalServices;
- (int)removePINCodeHandlerForAddress:(in bycopy NSString *)arg1;
- (int)handlePINRequestForAddress:(in bycopy NSString *)arg1 withResponder:(id)arg2;
- (int)clearDaemonCacheValues:(unsigned int)arg1;
- (int)removeDaemonCachedValue:(unsigned int)arg1 forKey:(in NSString *)arg2;
- (NSDictionary *)getBluetoothPortDictionary;
- (int)modifySerialPort:(NSDictionary *)arg1;
- (int)removeSerialPort:(NSDictionary *)arg1;
- (int)addSerialPort:(NSDictionary *)arg1 vendingService:(NSDictionary *)arg2;
- (int)addSerialPort:(NSDictionary *)arg1;
@end
