//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSDictionary *_components;
    id _underlyingResult;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) void *underlyingResult;
- (id)components;
- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2 underlyingResult:(void *)arg3;

@end
