//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADClient : NSObject
{
}

+ (id)sharedClient;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)determineAppInstallationAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
