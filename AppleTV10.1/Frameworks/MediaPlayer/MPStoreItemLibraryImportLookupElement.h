//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreItemLibraryImportElement.h>

@class NSDictionary, SSLookupItem;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement
{
    SSLookupItem *_storeItem;
    NSDictionary *_lookupDictionary;
}

@property(readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
- (void).cxx_destruct;
- (id)storeItem;
- (id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2;

@end

