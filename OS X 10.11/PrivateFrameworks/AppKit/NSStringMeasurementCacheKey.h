//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface NSStringMeasurementCacheKey : NSObject <NSCopying>
{
    NSAttributedString *_string;
    struct CGSize _size;
    unsigned long long _options;
    unsigned long long _maximumNumberOfLines;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setAttributedString:(id)arg1 size:(struct CGSize)arg2 options:(unsigned long long)arg3 maximumNumberOfLines:(unsigned long long)arg4;

@end
