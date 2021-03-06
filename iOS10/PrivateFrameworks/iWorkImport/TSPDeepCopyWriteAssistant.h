//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPEncoderWriteCoordinatorDelegate-Protocol.h>

@class NSString, TSPDeepCopyObjectMap, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate>
{
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    _Bool _resetObjectUUIDs;
}

- (void).cxx_destruct;
- (_Bool)skipMetadataObjectSerialization;
- (id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 archivedObjects:(id)arg3 componentObjectUUIDMap:(id)arg4 externalReferences:(id)arg5 weakExternalReferences:(id)arg6 lazyReferences:(id)arg7 dataReferences:(id)arg8 error:(id *)arg9;
- (long long)componentWriterMode;
- (unsigned long long)objectTargetType;
- (void)encodeDeepCopyOfObject:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 objectMap:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

