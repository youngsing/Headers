//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand
{
}

+ (id)recordActivityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recordActivity;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAActivityObject *activity;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
