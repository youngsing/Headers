//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingServices/TVHSSBaseSettings.h>

@class TVHSSMediaCategorySettings;

@interface TVHSSApplicationSettings : TVHSSBaseSettings
{
    _Bool _showPlaylistsInAllMediaCategories;
    _Bool _allowDAAPServerDiscovery;
    long long _mediaRepeatMode;
    TVHSSMediaCategorySettings *_moviesSettings;
    TVHSSMediaCategorySettings *_homeVideosSettings;
    TVHSSMediaCategorySettings *_TVShowsSettings;
    TVHSSMediaCategorySettings *_podcastsSettings;
    TVHSSMediaCategorySettings *_iTunesUSettings;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TVHSSMediaCategorySettings *iTunesUSettings; // @synthesize iTunesUSettings=_iTunesUSettings;
@property(retain, nonatomic) TVHSSMediaCategorySettings *podcastsSettings; // @synthesize podcastsSettings=_podcastsSettings;
@property(retain, nonatomic) TVHSSMediaCategorySettings *TVShowsSettings; // @synthesize TVShowsSettings=_TVShowsSettings;
@property(retain, nonatomic) TVHSSMediaCategorySettings *homeVideosSettings; // @synthesize homeVideosSettings=_homeVideosSettings;
@property(retain, nonatomic) TVHSSMediaCategorySettings *moviesSettings; // @synthesize moviesSettings=_moviesSettings;
@property(nonatomic) long long mediaRepeatMode; // @synthesize mediaRepeatMode=_mediaRepeatMode;
@property(nonatomic) _Bool allowDAAPServerDiscovery; // @synthesize allowDAAPServerDiscovery=_allowDAAPServerDiscovery;
@property(nonatomic) _Bool showPlaylistsInAllMediaCategories; // @synthesize showPlaylistsInAllMediaCategories=_showPlaylistsInAllMediaCategories;
- (void).cxx_destruct;
- (void)_refreshSettingsFromPreferencesAndShouldNotify:(_Bool)arg1;
- (id)_init;
- (id)init;

@end

