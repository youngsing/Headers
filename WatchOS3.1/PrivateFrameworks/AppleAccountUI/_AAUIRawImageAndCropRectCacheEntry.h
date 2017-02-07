//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

@interface _AAUIRawImageAndCropRectCacheEntry : NSObject
{
    UIImage *_rawImage;
    NSString *_serverCacheTag;
    NSDate *_expirationDate;
    struct CGRect _rawCropRect;
}

+ (id)entryWithRawImage:(id)arg1 rawCropRect:(struct CGRect)arg2 serverCacheTag:(id)arg3;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(readonly, nonatomic) struct CGRect rawCropRect; // @synthesize rawCropRect=_rawCropRect;
@property(readonly, nonatomic) UIImage *rawImage; // @synthesize rawImage=_rawImage;
- (void).cxx_destruct;
- (_Bool)valid;

@end
