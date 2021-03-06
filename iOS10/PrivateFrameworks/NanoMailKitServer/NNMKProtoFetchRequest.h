//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NNMKProtoFetchRequest : PBRequest <NSCopying>
{
    NSString *_conversationId;
    NSData *_currentDateForRequestingMoreMessages;
    NSData *_currentMessageIdsAndStatus;
    unsigned int _fullSyncVersion;
    _Bool _wantsBatchedResponse;
    _Bool _willTrimDatabaseAfterResults;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int wantsBatchedResponse:1;
        unsigned int willTrimDatabaseAfterResults:1;
    } _has;
}

@property(nonatomic) _Bool willTrimDatabaseAfterResults; // @synthesize willTrimDatabaseAfterResults=_willTrimDatabaseAfterResults;
@property(retain, nonatomic) NSData *currentDateForRequestingMoreMessages; // @synthesize currentDateForRequestingMoreMessages=_currentDateForRequestingMoreMessages;
@property(retain, nonatomic) NSData *currentMessageIdsAndStatus; // @synthesize currentMessageIdsAndStatus=_currentMessageIdsAndStatus;
@property(nonatomic) _Bool wantsBatchedResponse; // @synthesize wantsBatchedResponse=_wantsBatchedResponse;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasWillTrimDatabaseAfterResults;
@property(readonly, nonatomic) _Bool hasCurrentDateForRequestingMoreMessages;
@property(readonly, nonatomic) _Bool hasCurrentMessageIdsAndStatus;
@property(nonatomic) _Bool hasWantsBatchedResponse;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

