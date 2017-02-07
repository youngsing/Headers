//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDPivotArea : NSObject
{
    _Bool mGrandCol;
    _Bool mGrandRow;
    _Bool mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;
- (id)description;
- (id)references;
- (void)setOffset:(id)arg1;
- (id)offset;
- (void)setType:(int)arg1;
- (int)type;
- (void)setOutline:(_Bool)arg1;
- (_Bool)outline;
- (void)setGrandCol:(_Bool)arg1;
- (_Bool)grandCol;
- (void)setGrandRow:(_Bool)arg1;
- (_Bool)grandRow;
- (void)dealloc;
- (id)init;

@end
