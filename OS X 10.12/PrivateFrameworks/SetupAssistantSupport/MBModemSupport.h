//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MBModemSupport : NSObject
{
    NSDictionary *_settings;
    BOOL _cancelled;
    NSString *_modemPort;
}

- (void)setModemPort:(id)arg1;
- (void)connectionWillEnd:(id)arg1;
- (void)pppErrorNotification:(id)arg1;
- (void)statusChangedNotification:(id)arg1;
- (void)cancel;
- (BOOL)isStillConnected;
- (BOOL)connectionShouldBegin:(id)arg1;
- (void)dealloc;
- (id)init;

@end
