//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface _MFMailboxEnumerator : NSEnumerator
{
    struct __CFTree *_startTree;
    struct __CFTree *_lastTree;
}

- (id)nextObject;
- (void)dealloc;
- (id)init;
- (id)initWithTree:(struct __CFTree *)arg1;

@end

