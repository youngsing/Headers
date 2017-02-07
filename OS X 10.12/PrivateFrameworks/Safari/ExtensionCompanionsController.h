//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ExtensionCompanionsController : NSObject
{
    id _extensionMatchingContext;
    NSMutableDictionary *_companionExtensionsByBundleIdentifier;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_safariExtensionWasEnabled:(id)arg1;
- (void)_companionAppExtensionsDidChange:(id)arg1;
- (void)_connectCompanionExtensionToSafariExtension:(struct Extension *)arg1;
- (BOOL)_companionExtension:(id)arg1 hasSameTeamIdentifierAsSafariExtension:(struct Extension *)arg2;
- (void)cancelExtensionCompanionDiscovery;
- (void)startExtensionCompanionDiscovery;

@end
