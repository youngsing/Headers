//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PDFDocument, PDFDocumentView;

@interface PDFScrollViewPrivate : NSObject
{
    PDFDocument *document;
    PDFDocumentView *documentView;
    double oldMagnification;
    // Error parsing type: AB, name: hasQueuedUpdate
    _Bool allowScrolling;
    _Bool allowUpdates;
    _Bool allowBoundsUpdates;
    _Bool isZooming;
    _Bool scheduledPageSync;
    NSDate *pageSyncDate;
    _Bool forcesTopAlignment;
}

- (void).cxx_destruct;

@end
