//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MallocDataCategorySummaryDiff : NSObject
{
    long long totalBytesNonLeakedDiff;
    long long totalNodesNonLeakedDiff;
    long long totalBytesLeakedDiff;
    long long totalNodesLeakedDiff;
    NSString *name;
    unsigned short depth;
}

@property(retain) NSString *name; // @synthesize name;
@property unsigned short depth; // @synthesize depth;
@property long long totalNodesNonLeakedDiff; // @synthesize totalNodesNonLeakedDiff;
@property long long totalBytesNonLeakedDiff; // @synthesize totalBytesNonLeakedDiff;
@property long long totalNodesLeakedDiff; // @synthesize totalNodesLeakedDiff;
@property long long totalBytesLeakedDiff; // @synthesize totalBytesLeakedDiff;
- (BOOL)printData:(id)arg1;
- (void)printSubcategoryIndent;
- (void)printIndent;
- (id)initWithBefore:(id)arg1 After:(id)arg2;
- (BOOL)passesFilter:(id)arg1;
- (void)dealloc;
- (id)init;
- (long long)compare:(id)arg1;

@end
