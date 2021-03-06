//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKCloudPlayer, NSArray, NSDate, NSMutableDictionary, NSString;

@interface GKGameSession : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    GKCloudPlayer *_owner;
    NSArray *_players;
    NSDate *_lastModifiedDate;
    GKCloudPlayer *_lastModifiedPlayer;
    long long _maxNumberOfConnectedPlayers;
    NSString *_serverChangeTag;
    NSMutableDictionary *_playerStates;
}

+ (_Bool)supportsSecureCoding;
+ (void)removeSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadSessionsInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)postSession:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
+ (void)postSession:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
+ (void)postSession:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
+ (void)postSession:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
+ (void)postSession:(id)arg1 didRemovePlayer:(id)arg2;
+ (void)postSession:(id)arg1 didAddPlayer:(id)arg2;
+ (void)removeEventListener:(id)arg1;
+ (void)addEventListener:(id)arg1;
+ (id)gk_sessionEventListeners;
+ (void)getSessionsForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSString *serverChangeTag; // @synthesize serverChangeTag=_serverChangeTag;
@property(nonatomic) long long maxNumberOfConnectedPlayers; // @synthesize maxNumberOfConnectedPlayers=_maxNumberOfConnectedPlayers;
@property(retain, nonatomic) GKCloudPlayer *lastModifiedPlayer; // @synthesize lastModifiedPlayer=_lastModifiedPlayer;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *badgedPlayers;
- (void)clearBadgeForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)playersWithConnectionState:(long long)arg1;
- (void)setConnectionState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithSession:(id)arg1;
- (id)description;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)descriptionSubstitutionMap;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

