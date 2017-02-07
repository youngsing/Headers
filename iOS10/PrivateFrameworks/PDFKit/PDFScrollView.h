//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <PDFKit/UIScrollViewDelegate-Protocol.h>

@class NSString, PDFScrollViewPrivate;

@interface PDFScrollView : UIScrollView <UIScrollViewDelegate>
{
    PDFScrollViewPrivate *_private;
}

- (void).cxx_destruct;
- (void)_centerAlign;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setForcesTopAlignment:(_Bool)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)pdfDocumentView;
- (void)dealloc;
- (void)setDocument:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
