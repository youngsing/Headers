//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet
{
}

+ (id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callEmergencySnippet;
@property(retain, nonatomic) SAUIColor *headerTextColor;
@property(retain, nonatomic) SAUIColor *headerBackgroundColor;
@property(nonatomic) long long countDownSeconds;
@property(retain, nonatomic) SAUIColor *bodyTextColor;
@property(retain, nonatomic) SAUIColor *bodyBackgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

