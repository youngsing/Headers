//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, ILMediaObject, NSError, NSMutableDictionary, NSString;

@interface ILMediaBrowserImageManagerLoadAttributesRequest : NSObject
{
    NSString *_path;
    ILMediaObject *_mediaObject;
    AVAsset *_asset;
    NSError *_error;
    BOOL _doneWithMovieLoading;
    NSMutableDictionary *_cacheInfo;
}

@property BOOL doneWithMovieLoading; // @synthesize doneWithMovieLoading=_doneWithMovieLoading;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSMutableDictionary *cacheInfo; // @synthesize cacheInfo=_cacheInfo;
@property(retain) ILMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)init;

@end
