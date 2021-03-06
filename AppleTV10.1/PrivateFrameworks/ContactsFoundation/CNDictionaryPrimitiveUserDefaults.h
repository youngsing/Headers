//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNPrimitiveUserDefaults-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>
{
    NSMutableDictionary *_preferences;
    unsigned long long _synchronizeCount;
    unsigned long long _setupAutosyncCount;
}

@property(readonly) unsigned long long setupAutosyncCount; // @synthesize setupAutosyncCount=_setupAutosyncCount;
@property(readonly) unsigned long long synchronizeCount; // @synthesize synchronizeCount=_synchronizeCount;
- (void).cxx_destruct;
- (void)setupAutosync;
- (_Bool)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (_Bool)primitiveBoolValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

