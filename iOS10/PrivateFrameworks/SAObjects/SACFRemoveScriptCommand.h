//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFRemoveScriptCommand : SABaseClientBoundCommand
{
}

+ (id)removeScriptCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)removeScriptCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *scriptIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
