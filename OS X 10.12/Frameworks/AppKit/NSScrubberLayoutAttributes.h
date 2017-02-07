//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@interface NSScrubberLayoutAttributes : NSObject <NSCopying>
{
    long long _itemIndex;
    struct CGRect _frame;
    double _alpha;
}

+ (id)layoutAttributesForItemAtIndex:(long long)arg1;
@property double alpha; // @synthesize alpha=_alpha;
@property struct CGRect frame; // @synthesize frame=_frame;
@property long long itemIndex; // @synthesize itemIndex=_itemIndex;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
