//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSDictionary;

@interface _AMiCalItem : SBObject
{
}

- (void)show;
- (void)saveIn:(id)arg1 as:(id)arg2;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSDictionary *properties;

@end

