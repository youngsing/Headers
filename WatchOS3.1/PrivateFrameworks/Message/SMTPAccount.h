//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount
{
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long long _lastTimerSetTime;
    unsigned int _supportsPipelining:1;
    unsigned int _supportsOutboxCopy:1;
    unsigned int _useCellDataOnly:1;
}

+ (_Bool)isCommonPortNumber:(unsigned int)arg1;
+ (id)saslProfileName;
+ (unsigned int)defaultPortNumber;
+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)newDefaultInstance;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (void *)legacyKeychainProtocol;
+ (id)accountTypeString;
- (void)dealloc;
- (_Bool)canBeFallbackAccount;
- (_Bool)_isAppleServiceDeliveryHostname:(id)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (void)checkInConnection:(id)arg1;
- (void)setTimer;
- (void)connectionExpired:(id)arg1;
- (void)disconnect:(id)arg1;
- (id)authenticatedConnection:(_Bool)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setSupportsOutboxCopy:(_Bool)arg1;
- (_Bool)supportsOutboxCopy;
- (void)setSupportsPipelining:(_Bool)arg1;
- (_Bool)supportsPipelining;
- (id)errorForResponse:(id)arg1;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (_Bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (id)connectionSettingsForAuthentication:(_Bool)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(_Bool)arg2 directSSL:(_Bool)arg3;
- (Class)connectionClass;
- (id)serviceName;
- (void)setDeliveryClass:(Class)arg1;
- (Class)deliveryClass;
- (id)certUIService;

@end
