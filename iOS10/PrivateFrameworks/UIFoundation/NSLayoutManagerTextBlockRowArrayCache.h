//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject
{
    struct _NSRange _rowCharRange;
    double _containerWidth;
    NSArray *_rowArray;
    _Bool _collapseBorders;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange)arg1 containerWidth:(double)arg2 rowArray:(id)arg3 collapseBorders:(_Bool)arg4;

@end

