//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebsiteDataStore : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsiteDataStore> _websiteDataStore;
}

+ (id)allWebsiteDataTypes;
+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;
@property(readonly) struct Object *_apiObject;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
