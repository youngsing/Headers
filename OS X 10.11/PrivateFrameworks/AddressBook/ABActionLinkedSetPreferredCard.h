//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABActionLinkedSetPreferredCard : NSObject
{
    NSString *_targetUniqueId;
}

@property(copy) NSString *targetUniqueId; // @synthesize targetUniqueId=_targetUniqueId;
- (BOOL)shouldMakeMyPerson:(id)arg1 person:(id)arg2 addressBook:(id)arg3;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)actionProperty;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;

@end

