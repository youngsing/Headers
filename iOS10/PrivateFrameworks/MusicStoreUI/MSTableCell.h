//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUTableCell.h>

@class MSAudioProgressView, SUPlayerStatus, UIImageView, UIView;

@interface MSTableCell : SUTableCell
{
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
    SUPlayerStatus *_previewStatus;
}

@property(retain, nonatomic) SUPlayerStatus *previewStatus; // @synthesize previewStatus=_previewStatus;
- (void)_flipToPreviewProgressView;
- (void)_flipFromPreviewProgressView;
- (void)_destroyPreviewProgressView;
- (void)setPreviewStatus:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end

