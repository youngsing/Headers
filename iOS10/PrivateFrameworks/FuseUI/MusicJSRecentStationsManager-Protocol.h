//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/JSExport-Protocol.h>

@class JSValue, NSDictionary;

@protocol MusicJSRecentStationsManager <JSExport>
- (void)refreshRecentStations:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getRecentStationGroups:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getRecentStations:(NSDictionary *)arg1:(JSValue *)arg2;
@end
