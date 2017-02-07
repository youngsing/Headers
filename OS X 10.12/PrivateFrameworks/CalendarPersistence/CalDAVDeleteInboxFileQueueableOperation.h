//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

#import <CalendarPersistence/CoreDAVDeleteTaskDelegate-Protocol.h>

@class NSString;

@interface CalDAVDeleteInboxFileQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVDeleteTaskDelegate>
{
    NSString *_filename;
    NSString *_inboxPath;
}

- (void)handleRemovalCleanup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)useCoreDAV;
- (void)performOperation;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 inboxPath:(id)arg2 filename:(id)arg3 forSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
