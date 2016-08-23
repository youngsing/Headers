//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString, NSURL, NSUUID, UAUserActivity;
@protocol NSUserActivityDelegate;

@interface NSUserActivity : NSObject
{
    id _internal;
    id _delegate;
    id _frameworkDelegate;
}

+ (BOOL)_supportsUserActivityAppLinks;
+ (BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_currentUserActivityUUID;
+ (void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;
@property(readonly, retain) UAUserActivity *_internalUserActivity; // @synthesize _internalUserActivity=_internal;
- (void)setWebPageURL:(id)arg1;
- (id)webPageURL;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)typeIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing;
@property(getter=isEligibleForSearch) BOOL eligibleForSearch;
@property(getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property(copy) NSSet *keywords;
@property(copy) NSDate *expirationDate;
@property(copy) NSSet *requiredUserInfoKeys;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)resignCurrent;
- (void)becomeCurrent;
@property BOOL supportsContinuationStreams; // @dynamic supportsContinuationStreams;
@property __weak id <NSUserActivityDelegate> delegate; // @dynamic delegate;
- (void)setContentUserAction:(id)arg1;
- (id)contentUserAction;
- (void)setContentAttributes:(id)arg1;
- (id)contentAttributes;
- (void)setContentType:(id)arg1;
- (id)contentType;
@property(copy) NSURL *webpageURL; // @dynamic webpageURL;
@property BOOL needsSave;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
@property(copy) NSDictionary *userInfo; // @dynamic userInfo;
@property(copy) NSString *title; // @dynamic title;
@property(readonly, copy) NSString *activityType; // @dynamic activityType;
- (void)dealloc;
- (id)initWithActivityType:(id)arg1;
- (id)init;
- (id)initWithInternalUserActivity:(id)arg1;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeActivity;
- (void)willSynchronizeActivity;
@property(getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:) BOOL _eligibleForUserActivityPublicIndexing;
@property(getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:) BOOL _eligibleForUserActivityReminders;
@property(getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:) BOOL _eligibleForUserActivityIndexing;
@property(getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:) BOOL _eligibleForUserActivityHandoff;
- (void)_setParentUserActivity:(id)arg1;
- (id)_parentUserActivity;
- (void)_addKeywordsFromArray:(id)arg1;
@property(copy, setter=_setKeywords:) NSSet *_keywords;
@property(copy, setter=_setExpirationDate:) NSDate *_expirationDate;
@property(copy, setter=_setContentAttributes:) NSDictionary *_contentAttributes;
@property(copy, setter=_setContentIdentifier:) NSString *_contentIdentifier;
@property(copy, setter=_setContentUserAction:) NSString *_contentUserAction;
@property(copy, setter=_setContentType:) NSString *_contentType;
@property(copy, setter=_setMinimalRequiredUserInfoKeys:) NSSet *_minimalRequiredUserInfoKeys;
@property(copy, setter=_setSubtitle:) NSString *_subtitle;
- (BOOL)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)_initWithUserActivityData:(id)arg1;
- (void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1;
@property(readonly, copy) NSString *_teamIdentifier;
- (void)_resignCurrent;
@property(setter=_setFrameworkDelegate:) __weak id <NSUserActivityDelegate> _frameworkDelegate; // @dynamic _frameworkDelegate;
@property(copy, setter=_setOptions:) NSDictionary *_options; // @dynamic _options;
- (void)_setLastActivityDate:(id)arg1;
@property(readonly, copy) NSDate *_lastActivityDate; // @dynamic _lastActivityDate;
@property(readonly) long long _suggestedActionType; // @dynamic _suggestedActionType;
@property(readonly, retain) NSUUID *_uniqueIdentifier; // @dynamic _uniqueIdentifier;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
@property(copy, setter=_setFrameworkPayload:) NSDictionary *_frameworkPayload; // @dynamic _frameworkPayload;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3;
- (void)setContentAttributeSet:(id)arg1;
- (id)contentAttributeSet;

@end

