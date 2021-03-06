//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying>
{
    double _duration;
    double _releaseDate;
    NSString *_albumArtistName;
    NSString *_albumName;
    NSData *_artworkData;
    NSString *_directorName;
    int _episodeNumber;
    NSString *_localizedContentRating;
    int _playCount;
    float _playbackProgress;
    int _playlistType;
    int _radioStationType;
    int _seasonNumber;
    NSString *_subtitle;
    NSString *_title;
    NSString *_trackArtistName;
    _Bool _isContainer;
    _Bool _isExplicitItem;
    _Bool _isPlayable;
    struct {
        unsigned int duration:1;
        unsigned int releaseDate:1;
        unsigned int episodeNumber:1;
        unsigned int playCount:1;
        unsigned int playbackProgress:1;
        unsigned int playlistType:1;
        unsigned int radioStationType:1;
        unsigned int seasonNumber:1;
        unsigned int isContainer:1;
        unsigned int isExplicitItem:1;
        unsigned int isPlayable:1;
    } _has;
}

@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(nonatomic) int radioStationType; // @synthesize radioStationType=_radioStationType;
@property(nonatomic) int playlistType; // @synthesize playlistType=_playlistType;
@property(nonatomic) _Bool isExplicitItem; // @synthesize isExplicitItem=_isExplicitItem;
@property(retain, nonatomic) NSString *localizedContentRating; // @synthesize localizedContentRating=_localizedContentRating;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) double releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) NSString *directorName; // @synthesize directorName=_directorName;
@property(retain, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property(retain, nonatomic) NSString *trackArtistName; // @synthesize trackArtistName=_trackArtistName;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) float playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) _Bool isContainer; // @synthesize isContainer=_isContainer;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasArtworkData;
@property(nonatomic) _Bool hasRadioStationType;
@property(nonatomic) _Bool hasPlaylistType;
@property(nonatomic) _Bool hasIsExplicitItem;
@property(readonly, nonatomic) _Bool hasLocalizedContentRating;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasPlayCount;
@property(nonatomic) _Bool hasReleaseDate;
@property(nonatomic) _Bool hasEpisodeNumber;
@property(nonatomic) _Bool hasSeasonNumber;
@property(readonly, nonatomic) _Bool hasDirectorName;
@property(readonly, nonatomic) _Bool hasAlbumArtistName;
@property(readonly, nonatomic) _Bool hasTrackArtistName;
@property(readonly, nonatomic) _Bool hasAlbumName;
@property(nonatomic) _Bool hasPlaybackProgress;
@property(nonatomic) _Bool hasIsPlayable;
@property(nonatomic) _Bool hasIsContainer;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
- (void)dealloc;

@end

