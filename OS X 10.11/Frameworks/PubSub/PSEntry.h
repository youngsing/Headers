//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSTimeZone, NSURL, NSXMLElement, PSContent, PSFeed;

@interface PSEntry : NSObject
{
    id _internal;
}

+ (void)setEntries:(id)arg1 read:(BOOL)arg2;
@property(readonly, retain) NSDate *localDateUpdated;
@property(readonly, retain) NSDate *localDateCreated;
@property(getter=isFlagged, setter=setFlagged:) BOOL flagged;
- (BOOL)flagged;
@property(getter=isRead, setter=setRead:) BOOL read;
- (BOOL)read;
@property(readonly, getter=isCurrent) BOOL current;
- (BOOL)current;
@property(readonly, retain) NSArray *enclosures;
@property(readonly, retain) NSArray *contributors;
@property(readonly, retain) NSArray *authors;
@property(readonly, retain) NSURL *alternateURL;
@property(readonly, retain) NSURL *baseURL;
@property(readonly, retain) NSDate *dateForDisplay;
@property(readonly, retain) NSTimeZone *timeZoneCreated;
@property(readonly, retain) NSDate *dateCreated;
@property(readonly, retain) NSTimeZone *timeZonePublished;
@property(readonly, retain) NSDate *datePublished;
@property(readonly, retain) NSTimeZone *timeZoneUpdated;
@property(readonly, retain) NSDate *dateUpdated;
@property(readonly, retain) PSContent *summary;
@property(readonly, retain) PSContent *content;
@property(readonly, retain) NSString *rights;
@property(readonly, retain) NSString *title;
@property(readonly, retain) NSString *identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct EntryCore *)_entryCore;
- (id)extensionXMLElementsUsingNamespace:(id)arg1;
@property(readonly) NSXMLElement *XMLRepresentation;
@property(readonly) NSString *authorsForDisplay;
@property(readonly) NSString *titleForDisplay;
- (void)_setTitleForDisplay:(id)arg1;
- (void)_setClient:(id)arg1;
- (void)_setFeed:(id)arg1;
@property(readonly) PSFeed *feed;
- (BOOL)isPersistent;
- (id)description;
- (void)dealloc;
- (id)_initWithCore:(struct EntryCore *)arg1;

@end

