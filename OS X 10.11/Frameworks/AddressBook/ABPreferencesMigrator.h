//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUserDefaults;

__attribute__((visibility("hidden")))
@interface ABPreferencesMigrator : NSObject
{
    ABUserDefaults *_defaults;
}

+ (void)migrateDefaults:(id)arg1;
- (void)updateBirthdayVisiblePreferenceFromVersion:(long long)arg1;
- (BOOL)birthdayVisiblePreferenceExists;
- (void)updatePrivateMeCardPreferencesFromVersion:(long long)arg1;
- (BOOL)hasPrivateMeCardFields;
- (void)enablePrivateMeCardFields;
- (BOOL)privateMeCardFieldsEnabledPreferenceExists;
- (void)updatePreferencesVersionFromVersion:(long long)arg1;
- (long long)preferencesVersion;
- (void)migrateDefaults;
- (void)dealloc;
- (id)initWithDefaults:(id)arg1;

@end

