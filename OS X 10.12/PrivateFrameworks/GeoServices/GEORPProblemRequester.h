//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface GEORPProblemRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;
+ (unsigned long long)_urlType;
- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
