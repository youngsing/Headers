//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SBAppLocator, SBApplication;

__attribute__((visibility("hidden")))
@interface SBAppContext : NSObject
{
    SBApplication *_application;
    NSDictionary *_classNamesForCodes;
    NSDictionary *_codesForPropertyNames;
    NSDictionary *_classesForScriptingNames;
    NSDictionary *_codesForClassNames;
    NSDictionary *_propertyNamesForCodes;
    NSString *_name;
    Class _applicationClass;
    id _delegate;
    SBAppLocator *_locator;
    int _sendMode;
    long long _timeout;
}

+ (id)contextWithURL:(id)arg1;
+ (id)contextWithPID:(int)arg1;
+ (id)contextWithBundleIdentifier:(id)arg1;
- (void)setApplication:(id)arg1;
- (Class)applicationClass;
- (id)sdef;
- (id)qualifiedSpecifier;
- (id)bundleIdentifier;
- (id)path;
- (id)name;
- (id)sendEvent:(const struct AEDesc *)arg1 error:(id *)arg2;
- (id)processReply:(const struct AEDesc *)arg1 andError:(int)arg2 forEvent:(const struct AEDesc *)arg3 error:(id *)arg4;
- (id)eventFailed:(const struct AEDesc *)arg1 withError:(id)arg2;
- (short)createEmptyEvent:(struct AEDesc *)arg1 withClass:(unsigned int)arg2 id:(unsigned int)arg3;
- (id)descriptorForObject:(id)arg1 typeCode:(unsigned int)arg2;
- (id)descriptorForObject:(id)arg1;
- (id)objectForDescriptor:(const struct AEDesc *)arg1;
- (id)objectForDescriptor:(const struct AEDesc *)arg1 atIndex:(long long)arg2;
- (Class)classForScriptingClass:(id)arg1;
- (id)classesForScriptingNames;
- (id)propertyNameForCode:(unsigned int)arg1;
- (unsigned int)codeForPropertyName:(id)arg1;
- (id)propertyNamesForCodes;
- (id)codesForPropertyNames;
- (unsigned int)codeForClass:(Class)arg1;
- (Class)classForCode:(unsigned int)arg1;
- (id)codesForClassNames;
- (id)classNamesForCodes;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;
- (Class)dynamicMojo;
- (Class)makeGlueForSdef:(id)arg1 basename:(id)arg2;

@end

