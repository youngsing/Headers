//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ABContactSearching;

__attribute__((visibility("hidden")))
@interface ABGroupSearchingContext : NSObject
{
    id <ABContactSearching> _searchNode;
    NSString *_groupLabel;
    BOOL _canCreateGroups;
}

@property(readonly) BOOL canCreateGroups; // @synthesize canCreateGroups=_canCreateGroups;
@property(readonly, copy) NSString *groupLabel; // @synthesize groupLabel=_groupLabel;
@property(readonly, retain) id <ABContactSearching> searchNode; // @synthesize searchNode=_searchNode;
- (void)dealloc;
- (id)initWithSearchNode:(id)arg1 groupLabel:(id)arg2 canCreateGroups:(BOOL)arg3;

@end

