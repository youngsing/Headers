//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPKMatrixSectionView;

__attribute__((visibility("hidden")))
@interface CPKAXDataItem : NSObject
{
    CPKMatrixSectionView *_parent;
    long long _section;
    long long _index;
}

@property long long index; // @synthesize index=_index;
@property long long section; // @synthesize section=_section;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithParent:(id)arg1 index:(long long)arg2 section:(long long)arg3;

@end

