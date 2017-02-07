//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryQuery, PBUnknownFields;

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntryAddress *_address;
    GEOPDAutocompleteEntryBusiness *_business;
    GEOPDAutocompleteEntryCategory *_category;
    GEOPDAutocompleteEntryHighlightLine *_highlightExtra;
    GEOPDAutocompleteEntryHighlightLine *_highlightMain;
    GEOPDAutocompleteEntryQuery *_query;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) GEOPDAutocompleteEntryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) GEOPDAutocompleteEntryAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) GEOPDAutocompleteEntryBusiness *business; // @synthesize business=_business;
@property(retain, nonatomic) GEOPDAutocompleteEntryQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightExtra; // @synthesize highlightExtra=_highlightExtra;
@property(retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightMain; // @synthesize highlightMain=_highlightMain;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCategory;
@property(readonly, nonatomic) BOOL hasAddress;
@property(readonly, nonatomic) BOOL hasBusiness;
@property(readonly, nonatomic) BOOL hasQuery;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasHighlightExtra;
@property(readonly, nonatomic) BOOL hasHighlightMain;
- (void)dealloc;

@end
