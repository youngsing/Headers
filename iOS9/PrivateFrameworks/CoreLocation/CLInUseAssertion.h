//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLInUseAssertion : NSObject
{
    id _internal;
}

+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2;
+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithInternal:(id)arg1;

@end
