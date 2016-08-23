//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyValueProperty.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty
{
    NSString *_operationName;
    NSString *_operationArgumentKeyPath;
    NSKeyValueProperty *_operationArgumentProperty;
}

- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(CDStruct_a70f6672)arg5;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char *)arg2;
- (Class)_isaForAutonotifying;
- (void)_addDependentValueKey:(id)arg1;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;

@end

