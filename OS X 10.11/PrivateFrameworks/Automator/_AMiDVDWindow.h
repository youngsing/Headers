//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/_AMiDVDItem.h>

@class NSString, _AMiDVDDocument;

@interface _AMiDVDWindow : _AMiDVDItem
{
}

@property BOOL zoomed;
@property(readonly) BOOL zoomable;
@property BOOL visible;
@property(readonly) BOOL titled;
@property(readonly) BOOL resizable;
@property(copy) NSString *name;
@property(readonly) BOOL modal;
@property BOOL miniaturized;
@property(readonly) BOOL miniaturizable;
@property long long index;
- (long long)id;
@property(readonly) BOOL floating;
@property(readonly, copy) _AMiDVDDocument *document;
@property(readonly) BOOL closeable;
@property struct CGRect bounds;

@end

