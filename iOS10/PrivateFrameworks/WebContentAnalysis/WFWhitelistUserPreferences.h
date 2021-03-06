//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WFWhitelistSiteBuffer;

__attribute__((visibility("hidden")))
@interface WFWhitelistUserPreferences : NSObject
{
    WFWhitelistSiteBuffer *filterWhitelist;
    WFWhitelistSiteBuffer *filterBlacklist;
    WFWhitelistSiteBuffer *webWhitelist;
    _Bool filterEnabled;
    _Bool whitelistEnabled;
    _Bool alwaysAllowHTTPS;
    NSString *username;
}

+ (id)defaultWhitelistForUser:(id)arg1;
+ (id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2;
+ (id)_modificationDateForFileAtPath:(id)arg1;
+ (id)whitelistForUser:(id)arg1;
+ (id)whitelistWithPreferences:(id)arg1;
+ (_Bool)_isURLMetasite:(id)arg1;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)_metasiteDomainNamesArray;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
+ (id)preferencesPathForUsername:(id)arg1;
@property(readonly) WFWhitelistSiteBuffer *webWhitelist; // @synthesize webWhitelist;
@property(readonly) WFWhitelistSiteBuffer *filterBlacklist; // @synthesize filterBlacklist;
@property(readonly) WFWhitelistSiteBuffer *filterWhitelist; // @synthesize filterWhitelist;
@property(retain) NSString *username; // @synthesize username;
@property _Bool alwaysAllowHTTPS; // @synthesize alwaysAllowHTTPS;
@property _Bool whitelistEnabled; // @synthesize whitelistEnabled;
@property _Bool filterEnabled; // @synthesize filterEnabled;
- (id)description;
- (_Bool)isURL:(id)arg1 onList:(id)arg2;
- (id)pronounceOnPageURLString:(id)arg1 shouldFilter:(_Bool *)arg2;
- (_Bool)isURLAllowed:(id)arg1 reason:(id *)arg2 shouldFilter:(_Bool *)arg3 foundOnList:(_Bool *)arg4;
- (_Bool)isURLAllowed:(id)arg1;
- (void)dealloc;
- (id)initWithPreferences:(id)arg1;
- (id)init;

@end

