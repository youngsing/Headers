//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCFileWrapper, NSArray, NSData, NSImage, NSMutableArray, NSString, NSView;
@protocol MCStationeryCompositeImageView;

@interface MCStationeryCompositeImage : NSObject
{
    NSData *_baseImageData;
    NSData *_overlayImageData;
    NSMutableArray *_userImages;
    BOOL _isReadOnly;
    NSArray *_masks;
    NSView<MCStationeryCompositeImageView> *_view;
    NSString *_contentID;
    NSString *_preferredFilename;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(copy, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) __weak NSView<MCStationeryCompositeImageView> *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *masks; // @synthesize masks=_masks;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCFileWrapper *fileWrapper;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) long long approximateSize;
@property(readonly, copy, nonatomic) NSString *filenameForCompositedImage;
@property(readonly, copy, nonatomic) NSString *mimeTypeForCompositedImage;
@property(readonly, copy, nonatomic) NSData *dataForCompositedImage;
@property(readonly, nonatomic) unsigned long long numberOfDropZones;
@property(readonly, copy, nonatomic) NSArray *userImagesToSave;
@property(readonly, copy, nonatomic) NSArray *userImages;
- (void)addUserImage:(id)arg1;
@property(readonly, copy, nonatomic) NSImage *overlayImage;
- (void)setOverlayImageData:(id)arg1;
@property(readonly, copy, nonatomic) NSImage *baseImage;
- (void)setBaseImageData:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)init;

@end
