//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SVCNetworkInterface : NSObject
{
}

+ (id)reservedNetworkInterfaceBSDNamesWithNetworkSharingSettings:(id)arg1;
+ (id)reservedNetworkInterfaceBSDNamesWithDynamicStoreRef:(struct __SCDynamicStore *)arg1;
+ (BOOL)SCNetworkInterfaceIsPhysicalEthernet:(struct __SCNetworkInterface *)arg1;
+ (struct __SCNetworkInterface *)SCNetworkInterfaceCreateWithBSDName:(id)arg1;
+ (id)reservedNetworkInterfaceBSDNames;
+ (id)interfaceBSDNameForBridgeBSDName:(id)arg1;
+ (id)allNetworkInterfaceBSDNames;

@end

