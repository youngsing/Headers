//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VUSocialUpload/FlickrRequest.h>

@class NSArray;
@protocol FlickrComposeOptionViewDelegate, FlickrPhotoSetTableDelegate;

@interface FlickrPhotoSetManager : FlickrRequest
{
    id <FlickrComposeOptionViewDelegate> _delegate;
    id <FlickrPhotoSetTableDelegate> _tableDelegate;
    NSArray *_photoSets;
}

@property(readonly, nonatomic) NSArray *photoSets; // @synthesize photoSets=_photoSets;
@property(nonatomic) __weak id <FlickrPhotoSetTableDelegate> tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(nonatomic) __weak id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshPhotoSets;

@end

