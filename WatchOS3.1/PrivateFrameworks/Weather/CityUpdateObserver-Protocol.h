//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Weather/NSObject-Protocol.h>

@class City;

@protocol CityUpdateObserver <NSObject>

@optional
- (void)cityDidFinishWeatherUpdate:(City *)arg1;
- (void)cityDidStartWeatherUpdate:(City *)arg1;
@end
