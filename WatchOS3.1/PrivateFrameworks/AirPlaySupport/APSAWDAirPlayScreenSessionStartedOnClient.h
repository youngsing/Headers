//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    int _awdlCCA;
    int _awdlRSSI;
    unsigned int _bonjourMs;
    unsigned int _configMs;
    unsigned int _connectMs;
    int _infraCCA;
    int _infraRSSI;
    int _infraSNR;
    unsigned int _prepareMs;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    _Bool _didFallbackToInfraToAvoidP2POverDFS;
    struct {
        unsigned int timestamp:1;
        unsigned int audioCompressionType:1;
        unsigned int awdlCCA:1;
        unsigned int awdlRSSI:1;
        unsigned int bonjourMs:1;
        unsigned int configMs:1;
        unsigned int connectMs:1;
        unsigned int infraCCA:1;
        unsigned int infraRSSI:1;
        unsigned int infraSNR:1;
        unsigned int prepareMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int didFallbackToInfraToAvoidP2POverDFS:1;
    } _has;
}

@property(nonatomic) int infraSNR; // @synthesize infraSNR=_infraSNR;
@property(nonatomic) int infraCCA; // @synthesize infraCCA=_infraCCA;
@property(nonatomic) int awdlCCA; // @synthesize awdlCCA=_awdlCCA;
@property(nonatomic) int infraRSSI; // @synthesize infraRSSI=_infraRSSI;
@property(nonatomic) int awdlRSSI; // @synthesize awdlRSSI=_awdlRSSI;
@property(nonatomic) _Bool didFallbackToInfraToAvoidP2POverDFS; // @synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) unsigned int configMs; // @synthesize configMs=_configMs;
@property(nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property(nonatomic) unsigned int bonjourMs; // @synthesize bonjourMs=_bonjourMs;
@property(nonatomic) unsigned int prepareMs; // @synthesize prepareMs=_prepareMs;
@property(nonatomic) unsigned int audioCompressionType; // @synthesize audioCompressionType=_audioCompressionType;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasInfraSNR;
@property(nonatomic) _Bool hasInfraCCA;
@property(nonatomic) _Bool hasAwdlCCA;
@property(nonatomic) _Bool hasInfraRSSI;
@property(nonatomic) _Bool hasAwdlRSSI;
@property(nonatomic) _Bool hasDidFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) _Bool hasConfigMs;
@property(nonatomic) _Bool hasConnectMs;
@property(nonatomic) _Bool hasBonjourMs;
@property(nonatomic) _Bool hasPrepareMs;
@property(nonatomic) _Bool hasAudioCompressionType;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

