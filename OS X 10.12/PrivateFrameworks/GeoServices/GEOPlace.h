//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOBusiness, GEOLatLng, GEOMapRegion, GEOStructuredAddress, GEOTimezone, NSMutableArray, NSString;

@interface GEOPlace : PBCodable <GEOURLSerializable, NSCopying>
{
    double _area;
    long long _geoId;
    long long _uID;
    GEOAddress *_address;
    int _addressGeocodeAccuracy;
    NSMutableArray *_business;
    GEOLatLng *_center;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_entryPoints;
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSString *_name;
    GEOAddress *_phoneticAddress;
    NSString *_phoneticLocaleIdentifier;
    NSString *_phoneticName;
    int _referenceFrame;
    NSMutableArray *_roadAccessPoints;
    NSString *_spokenAddress;
    NSString *_spokenName;
    GEOStructuredAddress *_spokenStructuredAddress;
    GEOTimezone *_timezone;
    int _type;
    BOOL _isDisputed;
    struct {
        unsigned int area:1;
        unsigned int geoId:1;
        unsigned int uID:1;
        unsigned int addressGeocodeAccuracy:1;
        unsigned int localSearchProviderID:1;
        unsigned int referenceFrame:1;
        unsigned int type:1;
        unsigned int isDisputed:1;
    } _has;
}

+ (Class)roadAccessPointsType;
+ (Class)entryPointType;
+ (Class)businessType;
+ (id)_placesFromURL:(id)arg1 hasCurrentLocation:(char *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_placesFromDirectionsAction:(id)arg1 hasCurrentLocation:(char *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_placesFromShowAction:(id)arg1 hasCurrentLocation:(char *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_placesFromPresentAction:(id)arg1 hasCurrentLocation:(char *)arg2 currentLocationIndex:(unsigned long long *)arg3 options:(id *)arg4;
+ (id)_urlForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 options:(id)arg3;
+ (id)_urlToShowCurrentLocationWithOptions:(id)arg1;
+ (id)_urlToShowCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3;
+ (id)_urlToShowPlaces:(id)arg1 options:(id)arg2;
+ (id)_urlToShowURLRepresentations:(id)arg1 options:(id)arg2;
+ (id)_urlForAction:(id)arg1 rison:(id)arg2;
+ (id)_urlRepresentationForCurrentLocation;
+ (id)placeForPlaceData:(id)arg1;
@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;
@property(retain, nonatomic) NSMutableArray *roadAccessPoints; // @synthesize roadAccessPoints=_roadAccessPoints;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) GEOStructuredAddress *spokenStructuredAddress; // @synthesize spokenStructuredAddress=_spokenStructuredAddress;
@property(nonatomic) double area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *spokenAddress; // @synthesize spokenAddress=_spokenAddress;
@property(retain, nonatomic) NSString *spokenName; // @synthesize spokenName=_spokenName;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) NSMutableArray *entryPoints; // @synthesize entryPoints=_entryPoints;
@property(retain, nonatomic) NSMutableArray *business; // @synthesize business=_business;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) GEOAddress *phoneticAddress; // @synthesize phoneticAddress=_phoneticAddress;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long uID; // @synthesize uID=_uID;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasGeoId;
- (id)roadAccessPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)addRoadAccessPoints:(id)arg1;
- (void)clearRoadAccessPoints;
@property(readonly, nonatomic) BOOL hasDisplayMapRegion;
@property(readonly, nonatomic) BOOL hasTimezone;
@property(readonly, nonatomic) BOOL hasSpokenStructuredAddress;
@property(nonatomic) BOOL hasArea;
@property(readonly, nonatomic) BOOL hasSpokenAddress;
@property(readonly, nonatomic) BOOL hasSpokenName;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(nonatomic) BOOL hasIsDisputed;
@property(nonatomic) BOOL isDisputed; // @synthesize isDisputed=_isDisputed;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)entryPointsCount;
- (void)addEntryPoint:(id)arg1;
- (void)clearEntryPoints;
- (int)StringAsAddressGeocodeAccuracy:(id)arg1;
- (id)addressGeocodeAccuracyAsString:(int)arg1;
@property(nonatomic) BOOL hasAddressGeocodeAccuracy;
@property(nonatomic) int addressGeocodeAccuracy; // @synthesize addressGeocodeAccuracy=_addressGeocodeAccuracy;
- (id)businessAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessCount;
- (void)addBusiness:(id)arg1;
- (void)clearBusiness;
@property(readonly, nonatomic) BOOL hasCenter;
@property(readonly, nonatomic) BOOL hasPhoneticAddress;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(readonly, nonatomic) BOOL hasAddress;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(readonly, nonatomic) BOOL hasName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL hasUID;
- (void)dealloc;
- (int)StringAsReferenceFrame:(id)arg1;
- (id)referenceFrameAsString:(int)arg1;
@property(nonatomic) BOOL hasReferenceFrame;
@property(nonatomic) int referenceFrame;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
- (id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg1;
- (id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg1;
- (id)_urlForDirectionsFromPlace:(id)arg1 options:(id)arg2;
- (id)_urlForDirectionsToPlace:(id)arg1 options:(id)arg2;
- (id)_urlToShowWithOptions:(id)arg1;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)initWithPlaceInfo:(id)arg1 entity:(id)arg2 addressObject:(id)arg3 bounds:(id)arg4 roadAccessInfo:(id)arg5;
- (void)setNSTimeZone:(id)arg1;
- (id)bestName;
- (id)arrivalMapRegionForTransportType:(int)arg1;
- (id)arrivalMapRegion;
- (double)radialDistance;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)coordinate;
- (id)addressDictionary;
@property(readonly, nonatomic) GEOBusiness *firstBusiness;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 addressDictionary:(id)arg3;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 muid:(unsigned long long)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned int)arg8 normalizedUserRatingScore:(float)arg9;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)geoMapItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

