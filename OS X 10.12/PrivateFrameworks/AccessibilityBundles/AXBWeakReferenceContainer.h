//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityBundles/NSCopying-Protocol.h>

@interface AXBWeakReferenceContainer : NSObject <NSCopying>
{
    id _weakReference;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)strongReference;
- (id)autoreleasedReference;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end
