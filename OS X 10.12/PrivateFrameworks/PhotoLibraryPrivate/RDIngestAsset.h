//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface RDIngestAsset : NSObject
{
    NSURL *_assetURL;
    NSDictionary *_metadataProperties;
}

@property(readonly) NSDictionary *metadataProperties; // @synthesize metadataProperties=_metadataProperties;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (id)initWithAssetURL:(id)arg1 metadataProperties:(id)arg2;

@end

