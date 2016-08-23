//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDPersistenceContext, CNCDRecordSaveCache, CNSaveRequest, NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface CNCDSaveContext : NSObject
{
    CNSaveRequest *_saveRequest;
    CNCDPersistenceContext *_persistenceContext;
    NSManagedObjectContext *_context;
    CNCDRecordSaveCache *_contactCache;
    CNCDRecordSaveCache *_groupCache;
}

@property(readonly) CNCDRecordSaveCache *groupCache; // @synthesize groupCache=_groupCache;
@property(readonly) CNCDRecordSaveCache *contactCache; // @synthesize contactCache=_contactCache;
@property(readonly) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly) CNCDPersistenceContext *persistenceContext; // @synthesize persistenceContext=_persistenceContext;
@property(readonly) CNSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void)dealloc;
- (id)initWithSaveRequest:(id)arg1 persistenceContext:(id)arg2 context:(id)arg3;

@end
