//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, TUCall;

@protocol TUCallServicesClient <NSObject>
- (void)handleNotificationName:(NSString *)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)resetCallProvisionalStates;
- (void)handleCurrentCallsChanged:(NSArray *)arg1 callDisconnected:(TUCall *)arg2;
- (void)handleFrequencyChangedTo:(NSData *)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
@end
