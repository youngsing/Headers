//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLCloudDownloadBatchDetails : NSObject
{
    _Bool _hasResourceChanges;
    long long _numberOfPhotos;
    long long _numberOfVideos;
}

@property(nonatomic) long long numberOfVideos; // @synthesize numberOfVideos=_numberOfVideos;
@property(nonatomic) long long numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property(nonatomic) _Bool hasResourceChanges; // @synthesize hasResourceChanges=_hasResourceChanges;
- (void)unionBatchDetails:(id)arg1;

@end
