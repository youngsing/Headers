//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalDAV/NSObject-Protocol.h>

@class CoreDAVAction, NSArray, NSDictionary, NSError, NSSet, NSString, NSTimeZone, NSURL;
@protocol CalDAVPrincipal;

@protocol CalDAVCalendar <NSObject>
@property(readonly, nonatomic) NSSet *allItemURLs;
@property(readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property(readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property(readonly, nonatomic) NSArray *shareeActions;
@property(readonly, nonatomic) NSArray *syncActions;
@property(readonly, nonatomic) BOOL needsPublishUpdate;
@property(retain, nonatomic) NSString *syncToken;
@property(retain, nonatomic) NSString *ctag;
@property(nonatomic) BOOL needsResync;
@property(nonatomic) BOOL wasModifiedLocally;
@property(nonatomic) BOOL isMarkedImmutableSharees;
@property(nonatomic) BOOL isMarkedUndeletable;
@property(nonatomic) BOOL isFamilyCalendar;
@property(nonatomic) BOOL canBeShared;
@property(nonatomic) BOOL canBePublished;
@property(nonatomic) BOOL isAffectingAvailability;
@property(nonatomic) BOOL isPublished;
@property(nonatomic) BOOL isEnabled;
@property(nonatomic) BOOL isRenameable;
@property(nonatomic) BOOL isEditable;
@property(nonatomic) BOOL isPoll;
@property(nonatomic) BOOL isNotification;
@property(nonatomic) BOOL isScheduleOutbox;
@property(nonatomic) BOOL isScheduleInbox;
@property(nonatomic) BOOL isManagedByServer;
@property(nonatomic) BOOL isSubscribed;
@property(nonatomic) BOOL isEventContainer;
@property(nonatomic) BOOL isTaskContainer;
@property(retain, nonatomic) NSSet *sharees;
@property(nonatomic) int sharingStatus;
@property(nonatomic) int order;
@property(retain, nonatomic) NSDictionary *bulkRequests;
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) NSURL *prePublishURL;
@property(retain, nonatomic) NSURL *publishURL;
@property(retain, nonatomic) NSSet *calendarUserAddresses;
@property(retain, nonatomic) NSString *ownerDisplayName;
@property(retain, nonatomic) NSURL *owner;
@property(retain, nonatomic) NSString *pushKey;
@property(retain, nonatomic) NSString *symbolicColorName;
@property(retain, nonatomic) NSString *color;
@property(retain, nonatomic) NSString *notes;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSURL *calendarURL;
@property(retain, nonatomic) NSString *guid;
@property(readonly, nonatomic) id <CalDAVPrincipal> principal;
- (BOOL)hasCalendarUserAddressEquivalentToURL:(NSURL *)arg1;
- (BOOL)deleteResourcesAtURLs:(NSSet *)arg1;
- (BOOL)updateResourcesFromServer:(NSSet *)arg1;
- (BOOL)setURL:(NSURL *)arg1 forResourceWithUUID:(NSString *)arg2;
- (BOOL)setScheduleTag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (BOOL)setEtag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (NSDictionary *)etagsForItemURLs:(NSArray *)arg1;

@optional
- (void)deleteAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)putAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)syncDidFinishWithError:(NSError *)arg1;
- (void)clearShareeActions;
- (void)prepareMergeSyncActionsWithCompletionBlock:(void (^)(id <CalDAVCalendar>))arg1;
- (Class)appSpecificCalendarItemClass;
@end
