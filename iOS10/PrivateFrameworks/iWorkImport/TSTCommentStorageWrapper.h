//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSString, TSDCommentStorage;

__attribute__((visibility("hidden")))
@interface TSTCommentStorageWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>
{
    TSDCommentStorage *_commentStorage;
}

+ (id)cellDiffProperties;
@property(readonly, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)applyToCell:(id)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)initWithCommentStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

