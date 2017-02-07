//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVBInterface, NSString;
@protocol OS_dispatch_queue;

@interface AVBMSRPDomain : NSObject
{
    unsigned int service;
    struct IONotificationPort *notificationPort;
    NSObject<OS_dispatch_queue> *notificationsQueue;
    unsigned int notification;
    NSString *interfaceName;
    AVBInterface *interface;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
@property AVBInterface *interface; // @synthesize interface;
- (void)dealloc;
- (void)finalize;
- (id)msrpDomainInformation;
- (unsigned short)vlanIDForTrafficClass:(unsigned char)arg1;
- (unsigned char)priorityForTrafficClass:(unsigned char)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)commonInit;

@end
