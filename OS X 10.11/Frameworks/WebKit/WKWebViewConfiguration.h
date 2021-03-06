//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@class NSString, WKPreferences, WKProcessPool, WKUserContentController, WKWebView, WKWebsiteDataStore, _WKVisitedLinkProvider, _WKWebsiteDataStore;

@interface WKWebViewConfiguration : NSObject <NSCopying>
{
    struct LazyInitialized<WTF::RetainPtr<WKProcessPool>> _processPool;
    struct LazyInitialized<WTF::RetainPtr<WKPreferences>> _preferences;
    struct LazyInitialized<WTF::RetainPtr<WKUserContentController>> _userContentController;
    struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkProvider>> _visitedLinkProvider;
    struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>> _websiteDataStore;
    struct WeakObjCPtr<WKWebView> _relatedWebView;
    struct WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    BOOL _treatsSHA1SignedCertificatesAsInsecure;
    struct RetainPtr<NSString> _groupIdentifier;
    struct LazyInitialized<WTF::RetainPtr<NSString>> _applicationNameForUserAgent;
    BOOL _suppressesIncrementalRendering;
    BOOL _allowsAirPlayForMediaPlayback;
}

@property(nonatomic) BOOL allowsAirPlayForMediaPlayback; // @synthesize allowsAirPlayForMediaPlayback=_allowsAirPlayForMediaPlayback;
@property(nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_validate;
@property(retain, nonatomic, setter=_setWebsiteDataStore:) _WKWebsiteDataStore *_websiteDataStore;
@property(retain, nonatomic, setter=_setVisitedLinkProvider:) _WKVisitedLinkProvider *_visitedLinkProvider;
@property(copy, nonatomic) NSString *applicationNameForUserAgent;
@property(retain, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property(retain, nonatomic) WKUserContentController *userContentController;
@property(retain, nonatomic) WKPreferences *preferences;
@property(retain, nonatomic) WKProcessPool *processPool;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
@property(nonatomic, setter=_setTreatsSHA1SignedCertificatesAsInsecure:) BOOL _treatsSHA1SignedCertificatesAsInsecure;
@property(copy, nonatomic, setter=_setGroupIdentifier:) NSString *_groupIdentifier;
@property(nonatomic, setter=_setAlternateWebViewForNavigationGestures:) __weak WKWebView *_alternateWebViewForNavigationGestures;
@property(nonatomic, setter=_setRelatedWebView:) __weak WKWebView *_relatedWebView;

@end

