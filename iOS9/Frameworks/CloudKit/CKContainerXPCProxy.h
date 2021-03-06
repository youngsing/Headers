//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKBXPCClient-Protocol.h>

@class CKContainer, NSString;

__attribute__((visibility("hidden")))
@interface CKContainerXPCProxy : NSObject <CKBXPCClient>
{
    CKContainer *_container;
}

@property(nonatomic) __weak CKContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)openFileWithOpenInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

