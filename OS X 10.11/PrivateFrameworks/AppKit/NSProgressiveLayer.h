//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOverdrawableTileLayer.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NSProgressiveLayer : NSOverdrawableTileLayer
{
    NSData *_compressedContents;
    long long _currentCompressingContentsDrawCount;
    long long _drawCount;
    unsigned int _readingContents:1;
    unsigned int _contentsNeedToBeRedrawn:1;
    unsigned int _allowSetNeedsDisplay:1;
    unsigned int _compressedContentsAreValid:1;
}

+ (struct dispatch_queue_s *)_sharedCompressionQueue;
- (void)NS_dropPrefetchedContentsIfNecessary;
- (unsigned long long)NS_prefetchedMemoryLength;
- (BOOL)NS_hasPrefetchedContents;
- (void)NS_prefetchContentsIfNecessary;
- (void)NS_showPrefetchedContentsIfNecessaryInRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)_dropCompressedContents;
- (void)_releaseCompressedContents;
- (void)setContentsScale:(double)arg1;
- (void)_asyncCompressContentsIfNecessary;
- (void)_displayCompressedContentsIfAvailable;
- (void)_fastSetCompressedContents:(id)arg1;
- (void)_compressContentsAtDrawCount:(long long)arg1;
- (id)_imageCompressionUTIType;
- (void)display;
- (void)setBounds:(struct CGRect)arg1;
- (void)visibleTileStateChanged;
- (id)_compressedContents;
- (void)_setCompressedContents:(id)arg1;
@property(readonly) long long compressedDataLength;
@property(readonly) BOOL hasCompressedContents;
- (id)init;

@end

