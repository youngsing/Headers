//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying>
{
    long long _albumID;
    RadioArtworkCollection *_artworkCollection;
    _Bool _isSeed;
    RadioSeedMetadata *_seedMetadata;
    long long _storeID;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
@property(readonly, copy, nonatomic) RadioSeedMetadata *seedMetadata; // @synthesize seedMetadata=_seedMetadata;
@property(readonly, nonatomic) _Bool isSeed; // @synthesize isSeed=_isSeed;
@property(readonly, nonatomic) RadioArtworkCollection *artworkCollection; // @synthesize artworkCollection=_artworkCollection;
@property(readonly, nonatomic) long long albumID; // @synthesize albumID=_albumID;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithItemDictionary:(id)arg1;
- (id)init;

@end

