//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTYUtilities : NSObject
{
    BOOL _inUnitTestMode;
    BOOL _headphoneJackSupportsTTY;
}

+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)flipImageHorizontally:(id)arg1;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)arg1;
+ (id)phoneNumberStringFromString:(id)arg1;
+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (BOOL)contactIsTTYContact:(id)arg1;
+ (BOOL)isAppleInternalBuild;
+ (id)sharedUtilityProvider;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(nonatomic) BOOL inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
- (void)setTTYDictionaryAvailability:(BOOL)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (id)bubbleFillForMe:(BOOL)arg1;
- (id)tintedTTYIcon;
- (id)ttyIconWithTint:(id)arg1;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)bubbleColorForMe:(BOOL)arg1;
- (struct CGSize)bubbleInsetForMe:(BOOL)arg1;
- (struct CGSize)textInsetForMe:(BOOL)arg1;
- (unsigned long long)textAlignmentForMe:(BOOL)arg1;
- (id)ttyMeContact;
- (id)myPhoneNumber;
- (unsigned long long)currentPreferredTransportMethod;

@end
