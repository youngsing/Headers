//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUVideoEditScrubberController;

@protocol PUVideoEditScrubberControllerDelegate <NSObject>

@optional
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 slomoRegionsDidChangeWithHandle:(unsigned long long)arg2;
- (void)scrubberControllerDidBeginEditingSlomoRegions:(PUVideoEditScrubberController *)arg1;
- (void)scrubberControllerDidEndEditingSlomoRegions:(PUVideoEditScrubberController *)arg1;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 editingEndValueDidChange:(double)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 editingStartValueDidChange:(double)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 valueDidChange:(double)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 didEndScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(PUVideoEditScrubberController *)arg1 didBeginScrubbingWithHandle:(unsigned long long)arg2;
@end
