//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMovie.h>

#import <AVFoundation/AVFragmentMinding-Protocol.h>

@class AVFragmentedMovieInternal, NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>
{
    AVFragmentedMovieInternal *_fragmentedMovie;
}

- (void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForMovieTracks;
- (BOOL)_needsLegacyChangeNotifications;
- (BOOL)_mindsFragments;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end

