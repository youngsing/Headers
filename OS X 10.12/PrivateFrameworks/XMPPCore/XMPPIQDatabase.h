//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface XMPPIQDatabase : NSObject
{
    NSMutableDictionary *_idToEntryMap;
    NSMutableDictionary *_typeAndNamespaceToEntryMap;
}

- (void)removeEntryForID:(id)arg1;
- (void)addEntry:(id)arg1 forType:(int)arg2 xmlns:(id)arg3;
- (void)addEntry:(id)arg1 forID:(id)arg2;
- (id)entryForType:(int)arg1 xmlns:(id)arg2;
- (void)removeEntriesForTarget:(id)arg1;
- (id)entryForID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
