//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSNavSortingContext : NSObject
{
    long long *_sortOrder;
    char *_ascending;
    long long _count;
}

- (void)dealloc;
- (char *)ascending;
- (long long)count;
- (long long *)sortOrder;
- (id)initWithSortDescriptors:(id)arg1 attributes:(id)arg2;

@end

