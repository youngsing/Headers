//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface _MKInsettableDocumentView : NSView
{
    BOOL _updatingFrame;
    double _topInset;
    double _bottomInset;
    NSView *_contentView;
}

@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (void).cxx_destruct;
- (void)_updateFrame;
- (BOOL)isFlipped;
- (void)dealloc;

@end

