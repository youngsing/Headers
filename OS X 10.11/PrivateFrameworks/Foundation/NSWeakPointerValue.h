//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface NSWeakPointerValue : NSValue
{
    void *_value;
    void *_weakValue;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nonretainedObjectValue;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (unsigned long long)hash;
- (BOOL)isEqualToValue:(id)arg1;
- (id)initWithPointer:(void *)arg1;

@end

