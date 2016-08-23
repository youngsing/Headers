//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSIBObjectDataAuxilary, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface NSIBObjectData : NSObject <NSCoding>
{
    id rootObject;
    NSMapTable *objectTable;
    NSMapTable *nameTable;
    NSMutableSet *visibleWindows;
    NSMutableArray *connections;
    id firstResponder;
    id fontManager;
    NSMapTable *oidTable;
    unsigned long long nextOid;
    NSMapTable *classTable;
    NSMapTable *instantiatedObjectTable;
    NSString *targetFramework;
    id _document;
    NSIBObjectDataAuxilary *_objectDataAuxilary;
}

+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_removeEarlyDecodingObjectConnectionsFromConnections:(id)arg1;
- (void)_addEarlyDecodingObjectsFromObjectList:(id)arg1 toConnections:(id)arg2;
- (void)nibInstantiateWithOwner:(id)arg1 options:(id)arg2 topLevelObjects:(id)arg3;
- (void)nibInstantiateWithOwner:(id)arg1 topLevelObjects:(id)arg2;
- (void)nibInstantiateWithOwner:(id)arg1;
- (id)instantiateObject:(id)arg1;
- (void)setShouldEncodeDesigntimeData:(BOOL)arg1;
- (BOOL)shouldEncodeDesigntimeData;
- (id)classTable;
- (id)oidTable;
- (id)nameTable;
- (id)objectTable;
- (void)setRootObject:(id)arg1;
- (id)rootObject;
- (void)setFirstResponder:(id)arg1;
- (id)firstResponder;
- (void)setNextObjectID:(unsigned long long)arg1;
- (long long)nextObjectID;
- (void)setTargetFramework:(id)arg1;
- (id)targetFramework;
- (void)setConnections:(id)arg1;
- (id)connections;
- (void)setVisibleWindows:(id)arg1;
- (id)visibleWindows;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_assignObjectIds;
- (void)_readVersion0:(id)arg1;
- (void)_encodeMapTable:(id)arg1 forTypes:(const char *)arg2 withCoder:(id)arg3;
- (void)_encodeIntValuedMapTable:(id)arg1 withCoder:(id)arg2;
- (void)_encodeObjectValuedMapTable:(id)arg1 withCoder:(id)arg2;

@end
