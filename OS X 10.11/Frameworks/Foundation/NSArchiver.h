//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface NSArchiver : NSCoder
{
    void *mdata;
    void *pointerTable;
    void *stringTable;
    void *ids;
    void *map;
    void *replacementTable;
    void *reserved;
}

+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)classNameEncodedForTrueClassName:(id)arg1;
+ (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
+ (void)initialize;
- (id)classNameEncodedForTrueClassName:(id)arg1;
- (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodePropertyList:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (long long)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)data;
@property(readonly, retain) NSMutableData *archiverData;
- (id)initForWritingWithMutableData:(id)arg1;

@end
