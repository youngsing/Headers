//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider
{
    int _notifyToken;
    NSXPCConnection *_connection;
}

@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)requiresProxyingAVAudioSessionState;
- (id)hostProtocolDelegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

