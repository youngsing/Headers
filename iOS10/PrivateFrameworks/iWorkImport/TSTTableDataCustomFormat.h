//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSUCustomFormat;

__attribute__((visibility("hidden")))
@interface TSTTableDataCustomFormat : TSTTableDataObject
{
    TSUCustomFormat *mCustomFormat;
}

@property(readonly, nonatomic) TSUCustomFormat *customFormat; // @synthesize customFormat=mCustomFormat;
- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithCustomFormat:(id)arg1 refCount:(unsigned int)arg2;

@end

