//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABCoreDataDeprecations : NSObject
{
}

+ (void)unlockCoordinator:(id)arg1;
+ (void)lockCoordinator:(id)arg1;
+ (BOOL)tryLockContext:(id)arg1;
+ (void)unlockContext:(id)arg1;
+ (void)lockContext:(id)arg1;
+ (id)newConfinedABContext;
+ (id)newConfinedContext;

@end

