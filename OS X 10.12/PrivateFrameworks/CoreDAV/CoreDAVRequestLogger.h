//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject
{
    id <CoreDAVAccountInfoProvider> _provider;
    NSArray *_headerSortDescriptors;
    int _snippetsLogged;
}

@property(retain, nonatomic) NSArray *headerSortDescriptors; // @synthesize headerSortDescriptors=_headerSortDescriptors;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(BOOL)arg3;
- (void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)logCoreDAVResponseSnippet:(id)arg1;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(long long)arg2 withTaskIdentifier:(id)arg3;
- (void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2;
- (id)_inflateRequestBody:(id)arg1;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end

