//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TVSStoreArtworkVariant : NSObject
{
    NSURL *_artworkURL;
    struct CGSize _artworkSize;
}

@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
