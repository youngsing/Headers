//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSSpecColor.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSSSpecSetColor : TSSSpecColor
{
    TSUColor *_color;
    _Bool _unset;
}

+ (id)newFromArchive:(const struct SpecSetColorArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecSetColorArchive *)arg2 archiver:(id)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)isUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;
- (id)initSpecSetColorWithArchive:(const struct SpecSetColorArchive *)arg1 unarchiver:(id)arg2;
- (void)saveSpecSetColorToArchive:(struct SpecSetColorArchive *)arg1 archiver:(id)arg2;

@end
