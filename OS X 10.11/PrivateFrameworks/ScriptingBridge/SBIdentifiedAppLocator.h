//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScriptingBridge/SBAppLocator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SBIdentifiedAppLocator : SBAppLocator
{
    NSString *_bundleIdentifier;
}

- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)bundleIdentifier;
- (id)path;
- (const struct AEDesc *)addressWithoutLaunching;
- (const struct AEDesc *)launchWithFlags:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;

@end

