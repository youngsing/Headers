//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, NSMenu, NSMutableArray, NSPanel, NSPasteboard, QTIMAVManagerImageConsumer;

__attribute__((visibility("hidden")))
@interface QTMovieViewInternal : NSObject
{
    long long buttonsForcedShown;
    long long buttonsForcedHidden;
    unsigned int mouseDownViewID;
    NSMutableArray *eventlist;
    NSPasteboard *draggingPasteboard;
    NSMenu *contextualMenu;
    NSPanel *dragHighlightOverlayPanel;
    BOOL needToSetMovieSizeWhenDoneLiveResizing;
    QTIMAVManagerImageConsumer *qtIMAVManagerImageConsumer;
    CIImage *lastCIImageVendedToDelegate;
}

@end
