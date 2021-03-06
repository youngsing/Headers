//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class LPSpecializationMetadata, LPiTunesMediaLookupTask, NSMutableSet, NSString, NSURLSession;
@protocol LPiTunesMediaUnresolvedMetadata;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    NSString *_identifier;
    NSString *_storefrontIdentifier;
    NSString *_storefrontCountryCode;
    NSURLSession *_session;
    _Bool _canceled;
    long long _type;
    LPiTunesMediaLookupTask *_lookupTask;
    LPSpecializationMetadata *_resolvedMetadata;
    id <LPiTunesMediaUnresolvedMetadata> _unresolvedMetadata;
    NSMutableSet *_assetsStillResolving;
}

+ (id)extractOffers:(id)arg1;
+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (id)assetArrayFromScreenshotArray:(id)arg1;
+ (id)assetArrayScreenshotArray:(id)arg1;
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;
+ (id)specializedMetadataProviderForURL:(id)arg1;
- (void).cxx_destruct;
- (void)done;
- (void)fail;
- (void)cancel;
- (void)start;
- (void)resolve;
- (id)processResponseDictionary:(id)arg1;
- (id)schema;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 storefrontCountryCode:(id)arg3 forURL:(id)arg4;

@end

