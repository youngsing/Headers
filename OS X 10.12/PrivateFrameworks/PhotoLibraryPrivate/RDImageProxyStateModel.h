//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSNumber, NSString, RDImageProxyStateTable;

@interface RDImageProxyStateModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long segmentColorSpace;
@property(copy, nonatomic) NSNumber *microThumbnailWidth;
@property(copy, nonatomic) NSNumber *microThumbnailHeight;
@property(nonatomic) BOOL microThumbnailsCurrent;
@property(nonatomic) long long tinyThumbnailOrientation;
@property(nonatomic) long long miniThumbnailOrientation;
@property(nonatomic) long long thumbnailOrientation;
@property(nonatomic) long long previewJpegOrientation;
@property(nonatomic) long long microThumbnailOrientation;
@property(nonatomic) long long previewGenerationVersion;
@property(nonatomic) BOOL faceTilesCurrent;
@property(copy, nonatomic) NSNumber *tinyThumbnailWidth;
@property(copy, nonatomic) NSNumber *tinyThumbnailHeight;
@property(copy, nonatomic) NSNumber *miniThumbnailWidth;
@property(copy, nonatomic) NSNumber *miniThumbnailHeight;
@property(copy, nonatomic) NSNumber *thumbnailWidth;
@property(copy, nonatomic) NSNumber *thumbnailHeight;
@property(copy, nonatomic) NSNumber *previewJpegWidth;
@property(copy, nonatomic) NSNumber *previewJpegHeight;
@property(nonatomic) long long previewRendered;
@property(nonatomic) long long thumbnailRendered;
@property(nonatomic) long long thumbnailCacheIndex;
@property(nonatomic) BOOL fullSizePreviewUpToDate;
@property(nonatomic) BOOL tinyThumbnailsCurrent;
@property(nonatomic) BOOL miniThumbnailsCurrent;
@property(nonatomic) BOOL thumbnailsCurrent;
@property(copy, nonatomic) NSNumber *versionId;
@property(readonly, nonatomic) RDImageProxyStateTable *table;
@property(readonly, copy, nonatomic) NSString *faceTilePath;
@property(readonly, copy, nonatomic) NSString *miniThumbnailPath;
@property(readonly, copy, nonatomic) NSString *thumbnailPath;
@property(readonly, copy, nonatomic) NSString *fullSizePreviewPath;
@property(readonly, copy, nonatomic) NSString *versionUuid;

@end

