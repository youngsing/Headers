//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet, NSTableRowView;

__attribute__((visibility("hidden")))
@interface _NSTableGroupRowSupport : NSObject
{
    NSMutableIndexSet *_groupRowIndexes;
    long long _floatingGroupRow;
    NSTableRowView *_floatingGroupRowView;
    NSMutableDictionary *_groupViewBackgrounds;
}

@property(retain) NSMutableDictionary *groupViewBackgrounds; // @synthesize groupViewBackgrounds=_groupViewBackgrounds;
@property(retain) NSTableRowView *floatingGroupRowView; // @synthesize floatingGroupRowView=_floatingGroupRowView;
@property(nonatomic) long long floatingGroupRow; // @synthesize floatingGroupRow=_floatingGroupRow;
@property(retain) NSMutableIndexSet *groupRowIndexes; // @synthesize groupRowIndexes=_groupRowIndexes;
- (void)dealloc;
- (id)init;

@end

