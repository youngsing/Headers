//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XQueryInternal;

@interface XQuery : NSObject
{
    XQueryInternal *_internal;
}

+ (id)xqueryWithSource:(id)arg1;
- (id)parseErrors;
- (id)initWithSource:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_internal;

@end

