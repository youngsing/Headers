//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKQuadTrie : NSObject
{
    unsigned int _maxItems;
    CDStruct_8caa76fc _minSize;
    CDStruct_02837cd9 _initialRegion;
    void *__root;
}

- (id)itemDescriptions;
- (id)description;
- (id)breadthFirstDescription;
- (id)depthFirstDescription;
- (void)clearAllItemsPerforming:(CDUnknownBlockType)arg1;
- (id)allItems;
- (unsigned long long)count;
- (void)foreach:(CDUnknownBlockType)arg1;
- (id)itemsPassingRectTest:(CDUnknownBlockType)arg1 coordinateTest:(CDUnknownBlockType)arg2;
- (id)itemsInMapRect:(CDStruct_02837cd9)arg1;
- (id)_itemsInMapRect:(CDStruct_02837cd9)arg1;
- (BOOL)contains:(id)arg1;
- (BOOL)remove:(id)arg1;
- (void)insert:(id)arg1;
- (void)dealloc;
- (id)initWithInitialRegion:(CDStruct_02837cd9)arg1 minimumSize:(CDStruct_c3b9c2ee)arg2 maximumItems:(unsigned int)arg3;

@end

