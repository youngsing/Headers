//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerFoundation/NSCoding-Protocol.h>
#import <ServerFoundation/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, XSWebMainHost, XSWebVirtualHost;

@interface XSWebConfig : NSObject <NSCoding, NSCopying>
{
    XSWebMainHost *_mainHost;
    XSWebVirtualHost *_defaultVirtualHost;
    XSWebVirtualHost *_defaultSecureVirtualHost;
    NSMutableArray *_customVirtualHosts;
    NSArray *_definedWebApps;
}

@property(retain) NSArray *definedWebApps; // @synthesize definedWebApps=_definedWebApps;
@property(retain) NSMutableArray *customVirtualHosts; // @synthesize customVirtualHosts=_customVirtualHosts;
@property(retain) XSWebVirtualHost *defaultSecureVirtualHost; // @synthesize defaultSecureVirtualHost=_defaultSecureVirtualHost;
@property(retain) XSWebVirtualHost *defaultVirtualHost; // @synthesize defaultVirtualHost=_defaultVirtualHost;
@property(retain) XSWebMainHost *mainHost; // @synthesize mainHost=_mainHost;
- (id)definedWebAppWithName:(id)arg1;
- (id)virtualHostsWithServerName:(id)arg1;
- (BOOL)restoreFactorySettingsAndReturnError:(id *)arg1;
- (BOOL)synchronizeAndReturnError:(id *)arg1;
- (BOOL)readAndReturnError:(id *)arg1;
- (id)settings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

