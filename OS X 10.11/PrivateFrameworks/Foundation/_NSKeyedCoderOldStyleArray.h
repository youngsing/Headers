//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSKeyedCoderOldStyleArray : NSObject
{
    void *_addr;
    unsigned long long _count;
    unsigned long long _size;
    BOOL _type;
    BOOL _decoded;
    char _padding[2];
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fillObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)finalize;
- (void)dealloc;
- (id)initWithObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;

@end

