//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface TSDDrawableSelection : TSKSelection
{
    NSSet *mInfos;
}

+ (Class)archivedSelectionClass;
@property(readonly, retain, nonatomic) NSSet *infos; // @synthesize infos=mInfos;
- (id)UUIDDescription;
- (id)description;
- (id)infosOfClass:(Class)arg1;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long infoCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInfos:(id)arg1;
- (void)saveToArchive:(struct DrawableSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct DrawableSelectionArchive *)arg1 unarchiver:(id)arg2;

@end

