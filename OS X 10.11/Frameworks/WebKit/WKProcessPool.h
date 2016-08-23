//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, _WKProcessPoolConfiguration;
@protocol _WKDownloadDelegate;

@interface WKProcessPool : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebProcessPool> _processPool;
    struct WeakObjCPtr<id<_WKDownloadDelegate>> _downloadDelegate;
}

+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)_initWithConfiguration:(id)arg1;
@property(nonatomic, setter=_setDownloadDelegate:) __weak id <_WKDownloadDelegate> _downloadDelegate;
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;
- (id)_objectForBundleParameter:(id)arg1;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

