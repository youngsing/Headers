//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTYTelephonyUtilities : NSObject
{
    BOOL _headphoneJackSupportsTTY;
}

+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (id)sharedUtilityProvider;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
- (BOOL)relayIsSupported;
- (BOOL)contactIsTTYContact:(id)arg1;
- (unsigned long long)currentPreferredTransportMethod;
- (void)dealloc;
- (id)init;

@end

