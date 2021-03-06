//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassBackFaceImageSet : PKPassImageSet
{
    PKImage *_faceImage;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;
@property(retain, nonatomic) PKImage *faceImage; // @synthesize faceImage=_faceImage;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

