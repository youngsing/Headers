//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCECellDependenciesPrinter : NSObject
{
    NSString *_ownerName;
    unsigned long long _numDirtyCells;
    _Bool _showCleanCells;
    NSMutableArray *_dirtyCellDependencyRows;
    NSMutableArray *_cleanCellDependencyRows;
}

+ (id)stringForOwnerKind:(int)arg1;
@property(nonatomic) _Bool showCleanCells; // @synthesize showCleanCells=_showCleanCells;
@property(nonatomic) unsigned long long numDirtyCells; // @synthesize numDirtyCells=_numDirtyCells;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
- (id)description;
- (void)addDependencyRow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

