//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _PFRefCountableValue : NSObject <NSCopying>
{
    long long _refCount;
    id _value;
}

- (long long)refCount;
- (long long)decrementRefCount;
- (long long)incrementRefCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id value;
- (void)dealloc;
- (id)initWithValue:(id)arg1;

@end

