//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSScriptCommand.h>

@class NSDictionary, NSScriptClassDescription;

@interface NSCreateCommand : NSScriptCommand
{
    id _moreVars2;
}

+ (BOOL)_getArguments:(id)arg1 withParameters:(CDStruct_89ddc8e1)arg2;
- (id)description;
- (id)performDefaultImplementation;
- (id)_newObjectForContainer:(id)arg1 inValueForKey:(id)arg2 withClassDescription:(id)arg3;
@property(readonly, copy) NSDictionary *resolvedKeyDictionary;
@property(readonly, retain) NSScriptClassDescription *createClassDescription;
- (void)dealloc;
- (id)initWithCommandDescription:(id)arg1;
- (BOOL)_allowsAccessForEventParameters:(id)arg1 givenSenderAccessGroups:(id)arg2;
- (BOOL)_setAdditionalThingsFromEvent:(id)arg1;

@end

