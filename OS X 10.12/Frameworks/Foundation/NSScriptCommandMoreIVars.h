//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppleEventDescriptor, NSAppleEventHandling, NSArray, NSInvocation, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSScriptCommandMoreIVars : NSObject
{
    NSAppleEventHandling *appleEventHandling;
    NSArray *flattenedReceivers;
    unsigned long long nextReceiverIndex;
    NSMutableArray *collectedResults;
    Class cachedHanderInvocationReceiverClass;
    NSInvocation *cachedHandlerInvocation;
    int errorNumber;
    NSString *errorString;
    NSAppleEventDescriptor *errorOffendingObjectDescriptor;
    NSAppleEventDescriptor *errorExpectedTypeDescriptor;
}

@end
