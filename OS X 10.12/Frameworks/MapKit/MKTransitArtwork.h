//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOTransitArtworkDataSource-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource>
{
    NSString *_accessibilityText;
    BOOL _hasRoutingIncidentBadge;
    long long _artworkSourceType;
    id <GEOTransitShieldDataSource> _shieldDataSource;
    id <GEOTransitIconDataSource> _iconDataSource;
    long long _artworkUseType;
    id <GEOTransitShieldDataSource> _iconFallbackShieldDataSource;
}

+ (id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2;
@property(readonly, nonatomic) BOOL hasRoutingIncidentBadge; // @synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource; // @synthesize iconFallbackShieldDataSource=_iconFallbackShieldDataSource;
@property(readonly, nonatomic) long long artworkUseType; // @synthesize artworkUseType=_artworkUseType;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource; // @synthesize iconDataSource=_iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource; // @synthesize shieldDataSource=_shieldDataSource;
@property(readonly, nonatomic) long long artworkSourceType; // @synthesize artworkSourceType=_artworkSourceType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityText;
- (id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3;
- (id)initWithIcon:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithShield:(id)arg1 accessibilityText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
