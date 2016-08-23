//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDocumentConflictPanelController, NSFileVersion, NSImage;

__attribute__((visibility("hidden")))
@interface _NSDocumentConflict : NSObject
{
    NSDocumentConflictPanelController *_controller;
    NSFileVersion *_version;
    BOOL _selected;
    struct __QLThumbnail *_thumbnail;
    NSImage *_thumbnailImage;
    BOOL _showName;
}

@property BOOL showName; // @synthesize showName=_showName;
@property(copy) NSImage *thumbnail; // @synthesize thumbnail=_thumbnailImage;
@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain) NSFileVersion *version; // @synthesize version=_version;
@property NSDocumentConflictPanelController *controller; // @synthesize controller=_controller;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)dealloc;
- (void)startLoadingDocumentThumbnailWithSize:(struct CGSize)arg1 scaleFactor:(double)arg2 force:(BOOL)arg3;
- (id)nameAndDateText;
- (id)originText;
- (BOOL)isEqual:(id)arg1;

@end

