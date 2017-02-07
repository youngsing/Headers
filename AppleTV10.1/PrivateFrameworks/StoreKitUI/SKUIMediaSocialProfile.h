//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface SKUIMediaSocialProfile : NSObject <NSCopying>
{
    NSURL *_backgroundImageURL;
    NSString *_bio;
    NSString *_handle;
    NSString *_identifier;
    NSString *_name;
    NSString *_profileType;
    NSURL *_profileImageURL;
}

@property(copy, nonatomic) NSString *profileType; // @synthesize profileType=_profileType;
@property(copy, nonatomic) NSURL *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(copy, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfileDictionary:(id)arg1;

@end
