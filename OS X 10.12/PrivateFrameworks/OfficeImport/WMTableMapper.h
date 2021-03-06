//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableColumnInfo, WMTableStyle;

@interface WMTableMapper : CMMapper
{
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}

+ (BOOL)isTableDeleted:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setInsideBorders:(id)arg1;
- (id)columnInfo;
- (id)insideBorders;
- (void)dealloc;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)copyStopArrayForRow:(unsigned long long)arg1;
- (id)copyColumnInfo;

@end

