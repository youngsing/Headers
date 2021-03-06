//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraTLVBase.h>

#import <HomeKitDaemon/HMDCameraTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDSRTPCryptoSuite, NSData;

@interface HMDSRTPParameters : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding>
{
    HMDSRTPCryptoSuite *_srtpCryptoSuite;
    NSData *_srtpMasterKey;
    NSData *_srtpMasterSalt;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *srtpMasterSalt; // @synthesize srtpMasterSalt=_srtpMasterSalt;
@property(readonly, copy, nonatomic) NSData *srtpMasterKey; // @synthesize srtpMasterKey=_srtpMasterKey;
@property(readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite; // @synthesize srtpCryptoSuite=_srtpCryptoSuite;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (_Bool)compatibleWithRemoteEndPoint:(id)arg1;
- (id)initWithCryptoSuite:(id)arg1 masterKey:(id)arg2 masterSalt:(id)arg3;

@end

