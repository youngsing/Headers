//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLImageTable;

@interface PLImageTableSegment : NSObject
{
    PLImageTable *_imageTable;
    unsigned long long _index;
    void *_ptr;
    unsigned long long _length;
    _Bool _dying;
}

- (void *)bytes;
- (void)dealloc;
- (oneway void)release;
- (id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3;
- (id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void *)arg4;

@end

