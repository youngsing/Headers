//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMCacheLocationEntry, NSArray, NSBundle, NSDate, NSDictionary, NSImage, NSMutableDictionary, NSNumber, NSString;

@interface AMProxyAction : NSObject
{
    NSMutableDictionary *_cacheDictionary;
    id _realObject;
    AMCacheLocationEntry *_cacheLocationEntry;
    NSImage *_icon;
    NSString *_bundleIdentifier;
    NSString *_iconPath;
    long long _conversionLabel;
    NSArray *_conversionPath;
}

@property(retain) NSArray *conversionPath; // @synthesize conversionPath=_conversionPath;
@property long long conversionLabel; // @synthesize conversionLabel=_conversionLabel;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
@property(retain) AMCacheLocationEntry *cacheLocationEntry; // @synthesize cacheLocationEntry=_cacheLocationEntry;
- (void)clearConversionPath;
- (void)addToConversionPath:(id)arg1;
- (id)_descriptionViewItem;
- (BOOL)canIgnoreInput;
- (id)_providesTypes;
- (id)_acceptsTypes;
- (BOOL)_isPassThroughAction;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)deprecatedReplacementActionsStringAsHTML:(BOOL)arg1;
@property(readonly, retain) NSImage *largeIcon;
@property(readonly, retain) NSImage *icon;
@property(readonly) unsigned long long useCount;
@property(readonly, retain) NSDate *dateAdded;
- (BOOL)isCustomAction;
- (BOOL)isAMAction__;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (BOOL)handlesKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)fault;
@property(readonly, copy) NSBundle *bundle;
- (void)dealloc;
@property(readonly, retain) NSNumber *deprecatedNumber;
- (id)useCountNumber;
- (id)keywords;
@property(readonly, retain) NSArray *applications;
- (id)categories;
@property(readonly) BOOL isGenericAction;
@property(readonly) BOOL isDeprecated;
@property(readonly, retain) NSString *iconPath;
@property(readonly, retain) NSString *bundleVersion;
@property(readonly, retain) NSArray *replacementActions;
@property(readonly, retain) NSString *copyrightString;
@property(readonly, retain) NSDictionary *descriptionDictionary;
@property(readonly, retain) NSString *iconName;
@property(readonly, retain) NSDictionary *parameters;
@property(readonly, retain) NSString *version;
@property(readonly, retain) NSDictionary *warningDictionary;
@property(readonly, retain) NSArray *unlocalizedApplications;
@property(readonly, retain) NSArray *requiredResources;
@property(readonly, retain) NSDictionary *providesDictionary;
@property(readonly, retain) NSDictionary *acceptsDictionary;
@property(readonly, retain) NSString *bundlePath;
@property(readonly, retain) NSString *name;
- (id)initWithCacheLocationEntry:(id)arg1 bundleID:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAction:(id)arg1;
- (BOOL)isAMProxyAction__;

@end

