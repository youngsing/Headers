//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVMusicTableViewController.h>

@class TVSDataCollection;

@interface TVMusicArtistsTableViewController : TVMusicTableViewController
{
    TVSDataCollection *_genre;
}

@property(retain, nonatomic) TVSDataCollection *genre; // @synthesize genre=_genre;
- (void).cxx_destruct;
- (id)mediaItemsQueryForDataCollection:(id)arg1;
- (id)_focusedDataBaseItem;
- (id)_playbackViewController;
- (id)_previewViewControllerForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithDataClient:(id)arg1 genre:(id)arg2;
- (id)initWithDataClient:(id)arg1;

@end

