//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

@class NSString;

@interface CalDAVCalendarQueueableOperation : CalDAVPersistentQueueableOperation
{
    NSString *_sourceUID;
}

@property(readonly, copy) NSString *sourceUID; // @synthesize sourceUID=_sourceUID;
- (void)dealloc;
- (void)configureOperationDependencies;
- (id)initWithChangeRequest:(id)arg1 andSession:(id)arg2;
- (id)initWithChangeRequest:(id)arg1 sourceUID:(id)arg2 andSession:(id)arg3;

@end

