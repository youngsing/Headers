//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASmsSms;

@interface SASmsPlayAudio : SABaseClientBoundCommand
{
}

+ (id)playAudioWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playAudio;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SASmsSms *message;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
