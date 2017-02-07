//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL, SAConnectionPolicyRoute;

@interface SiriCoreSiriConnectionInfo : NSObject
{
    _Bool _prefersWWAN;
    _Bool _skipPeer;
    _Bool _skipEdge;
    _Bool _imposePolicyBan;
    NSURL *_url;
    SAConnectionPolicyRoute *_connectionPolicyRoute;
    NSString *_aceHost;
    NSString *_languageCode;
    NSError *_skipPeerErrorReason;
    double _timeout;
    NSString *_assistantIdentifier;
    NSString *_peerAssistantIdentifier;
    NSString *_connectionId;
}

@property(nonatomic) _Bool imposePolicyBan; // @synthesize imposePolicyBan=_imposePolicyBan;
@property(copy, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(copy, nonatomic) NSString *peerAssistantIdentifier; // @synthesize peerAssistantIdentifier=_peerAssistantIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSError *skipPeerErrorReason; // @synthesize skipPeerErrorReason=_skipPeerErrorReason;
@property(nonatomic) _Bool skipEdge; // @synthesize skipEdge=_skipEdge;
@property(nonatomic) _Bool skipPeer; // @synthesize skipPeer=_skipPeer;
@property(nonatomic) _Bool prefersWWAN; // @synthesize prefersWWAN=_prefersWWAN;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property(copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute; // @synthesize connectionPolicyRoute=_connectionPolicyRoute;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (void)_appendPotentiallyNilString:(id)arg1 toMutableString:(id)arg2;

@end
