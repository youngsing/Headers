//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAirQualityRequest : WFTask
{
    _Bool _attachRawAPIData;
    NSLocale *_locale;
    WFLocation *_location;
    CDUnknownBlockType _completionHandler;
}

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool attachRawAPIData; // @synthesize attachRawAPIData=_attachRawAPIData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) WFLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (void)cleanup;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (id)options;
- (id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

