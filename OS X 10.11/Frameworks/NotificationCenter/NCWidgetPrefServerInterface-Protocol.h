//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationCenter/NSObject-Protocol.h>

@class NSString;

@protocol NCWidgetPrefServerInterface <NSObject>
- (void)prefsWidgetUpdateState:(NSString *)arg1 enabled:(_Bool)arg2;
- (void)prefsWidgetRequestItems:(void (^)(NSArray *))arg1;
- (void)prefsWidgetReorderItem:(NSString *)arg1 afterItem:(NSString *)arg2;
@end

