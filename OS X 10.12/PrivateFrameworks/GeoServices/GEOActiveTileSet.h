//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOActiveTileSet : PBCodable <NSCopying>
{
    struct GEOTileSetRegion *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    NSString *_baseURL;
    int _checksumType;
    NSMutableArray *_countryRegionWhitelists;
    NSString *_localizationURL;
    int _scale;
    NSMutableArray *_sentinelTiles;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    unsigned int _timeToLiveSeconds;
    int _updateBehavior;
    unsigned int _version;
    struct {
        unsigned int checksumType:1;
        unsigned int timeToLiveSeconds:1;
        unsigned int updateBehavior:1;
    } _has;
}

+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)sentinelTileType;
+ (id)buildDisputedBordersQueryStringForCountry:(id)arg1 region:(id)arg2;
@property(retain, nonatomic) NSMutableArray *countryRegionWhitelists; // @synthesize countryRegionWhitelists=_countryRegionWhitelists;
@property(retain, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(retain, nonatomic) NSMutableArray *sentinelTiles; // @synthesize sentinelTiles=_sentinelTiles;
@property(nonatomic) unsigned int timeToLiveSeconds; // @synthesize timeToLiveSeconds=_timeToLiveSeconds;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsChecksumType:(id)arg1;
- (id)checksumTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasChecksumType;
@property(nonatomic) int checksumType; // @synthesize checksumType=_checksumType;
- (id)countryRegionWhitelistAtIndex:(unsigned long long)arg1;
- (unsigned long long)countryRegionWhitelistsCount;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)clearCountryRegionWhitelists;
- (int)StringAsUpdateBehavior:(id)arg1;
- (id)updateBehaviorAsString:(int)arg1;
@property(nonatomic) BOOL hasUpdateBehavior;
@property(nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedLanguagesCount;
- (void)addSupportedLanguage:(id)arg1;
- (void)clearSupportedLanguages;
@property(readonly, nonatomic) BOOL hasLocalizationURL;
- (id)sentinelTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)sentinelTilesCount;
- (void)addSentinelTile:(id)arg1;
- (void)clearSentinelTiles;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)clearAvailableTiles;
@property(readonly, nonatomic) struct GEOTileSetRegion *availableTiles;
@property(readonly, nonatomic) unsigned long long availableTilesCount;
@property(nonatomic) BOOL hasTimeToLiveSeconds;
- (int)StringAsSize:(id)arg1;
- (id)sizeAsString:(int)arg1;
- (int)StringAsScale:(id)arg1;
- (id)scaleAsString:(int)arg1;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(readonly, nonatomic) BOOL hasBaseURL;
- (void)dealloc;
- (void)_resetBestLanguage;
- (BOOL)isEquivalentTileSet:(id)arg1;
- (id)disputedBordersQueryStringForCountry:(id)arg1 region:(id)arg2;
- (BOOL)isDisputedBordersWhitelistedForCountry:(id)arg1 region:(id)arg2;
- (id)_bestCountryRegionWhitelistMatchForCountry:(id)arg1 region:(id)arg2;
- (id)_bestLanguageWithOverrideLocale:(id)arg1;
- (id)dataForGenericTileType:(int)arg1 configuration:(id)arg2;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(CDStruct_90e2a262)arg2;
- (unsigned int)maximumZoomLevelForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)maximumZoomLevelInRect:(CDStruct_90e2a262)arg1;
- (unsigned int)minimumZoomLevelInRect:(CDStruct_90e2a262)arg1;

@end
