//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDKeyedRemoteArchiver : NSObject
{
    NSKeyedArchiver *_archiver;
    NSString *_transportType;
}

@property(retain, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (void).cxx_destruct;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(_Bool)arg2 remoteGateway:(_Bool)arg3 remoteUserIsAdministrator:(_Bool)arg4;

@end
