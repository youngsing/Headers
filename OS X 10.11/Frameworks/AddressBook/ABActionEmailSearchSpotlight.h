//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABActionEmailSearchSpotlight : NSObject
{
    NSString *_actionProperty;
}

- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (void)setActionProperty:(id)arg1;
- (id)actionProperty;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)init;

@end

