//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNLocationTracker.h>

@class GEORouteMatcher;

__attribute__((visibility("hidden")))
@interface MNSteppingLocationTracker : MNLocationTracker
{
    GEORouteMatcher *_routeMatcher;
}

- (void).cxx_destruct;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;

@end

