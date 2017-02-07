//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionID;
    double _durationInOldState;
    double _sessionRelativeTimestamp;
    NSMutableArray *_stateTransitions;
    struct {
        unsigned int sessionID:1;
        unsigned int durationInOldState:1;
        unsigned int sessionRelativeTimestamp:1;
    } _has;
}

+ (Class)stateTransitionType;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
@property(retain, nonatomic) NSMutableArray *stateTransitions; // @synthesize stateTransitions=_stateTransitions;
@property(nonatomic) struct GEOSessionID sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) BOOL hasDurationInOldState;
- (id)stateTransitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)stateTransitionsCount;
- (void)addStateTransition:(id)arg1;
- (void)clearStateTransitions;
@property(nonatomic) BOOL hasSessionID;
- (void)dealloc;

@end
