//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class CUTWeakReference;

@interface _CKWeakWrapper : NSProxy
{
    CUTWeakReference *_weakReference;
    Class _targetClass;
}

@property(retain, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
@property(retain, nonatomic) CUTWeakReference *weakReference; // @synthesize weakReference=_weakReference;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end

