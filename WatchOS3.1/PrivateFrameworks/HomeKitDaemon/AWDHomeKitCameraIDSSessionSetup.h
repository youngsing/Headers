//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying>
{
    unsigned long long _idsSessionInvitationReceived;
    unsigned long long _idsSessionInvitationSent;
    unsigned long long _idsSessionStartedOnReceiver;
    unsigned long long _idsSessionStartedOnResident;
    struct {
        unsigned int idsSessionInvitationReceived:1;
        unsigned int idsSessionInvitationSent:1;
        unsigned int idsSessionStartedOnReceiver:1;
        unsigned int idsSessionStartedOnResident:1;
    } _has;
}

@property(nonatomic) unsigned long long idsSessionStartedOnReceiver; // @synthesize idsSessionStartedOnReceiver=_idsSessionStartedOnReceiver;
@property(nonatomic) unsigned long long idsSessionStartedOnResident; // @synthesize idsSessionStartedOnResident=_idsSessionStartedOnResident;
@property(nonatomic) unsigned long long idsSessionInvitationReceived; // @synthesize idsSessionInvitationReceived=_idsSessionInvitationReceived;
@property(nonatomic) unsigned long long idsSessionInvitationSent; // @synthesize idsSessionInvitationSent=_idsSessionInvitationSent;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIdsSessionStartedOnReceiver;
@property(nonatomic) _Bool hasIdsSessionStartedOnResident;
@property(nonatomic) _Bool hasIdsSessionInvitationReceived;
@property(nonatomic) _Bool hasIdsSessionInvitationSent;

@end

