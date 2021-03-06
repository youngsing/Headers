//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABActionDelegate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ABScriptedCardAction : NSObject <ABActionDelegate>
{
    NSURL *_url;
    NSString *_actionPropertyRaw;
    NSString *_actionProperty;
}

+ (id)actionWithScriptAtURL:(id)arg1;
- (id)script;
- (id)resultOfExecutingScriptWithRequest:(id)arg1;
- (id)userScript;
- (void)executeUserScriptWithRequest:(id)arg1;
- (id)parameterValueForPerson:(id)arg1 identifier:(id)arg2;
- (id)requestWithEventID:(unsigned int)arg1 person:(id)arg2 identifier:(id)arg3;
- (id)requestWithEventID:(unsigned int)arg1;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)actionPropertyRaw;
@property(readonly) NSString *actionProperty;
- (void)dealloc;
- (id)initWithScriptAtURL:(id)arg1;

@end

