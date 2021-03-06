//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject
{
    _IDSDataChannelLinkContext *_internal;
    unsigned int _maxBitrate;
}

@property(readonly) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setMTU:(unsigned short)arg1;
- (void)setRATType:(unsigned long long)arg1;
@property(readonly) unsigned long long remoteRATType;
@property(readonly) long long remoteConnectionType;
@property(readonly) unsigned char remoteNetworkType;
@property(readonly) unsigned short maxMTU;
@property(readonly) unsigned long long RATType;
@property(readonly) long long connectionType;
@property(readonly) unsigned char networkType;
@property(readonly) unsigned char flags;
@property(readonly) BOOL linkID;
- (id)description;
- (id)initWithLinkID:(BOOL)arg1 flags:(unsigned char)arg2 networkType:(unsigned char)arg3 connectionType:(long long)arg4 RATType:(unsigned long long)arg5 MTU:(unsigned short)arg6 remoteNetworkType:(unsigned char)arg7 remoteConnectionType:(long long)arg8 remoteRATType:(unsigned long long)arg9 maxBitrate:(unsigned int)arg10;
- (id)initWithDummyInformation;

@end

