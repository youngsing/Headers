//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABPersonInitials : NSObject
{
}

+ (id)newIgnoredCharacterSet;
+ (id)ignoredCharacterSet;
+ (void)removePunctuationFromString:(id)arg1;
+ (id)parenthesesRegex;
+ (void)removeParentheticalFromString:(id)arg1;
+ (id)prepareStringForInitializing:(id)arg1;
+ (id)initialForName:(id)arg1;
+ (id)pool_initialsForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)initialsForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)initialsForFirstName:(id)arg1 lastName:(id)arg2 reverse:(BOOL)arg3;
+ (BOOL)personShowsLastNameFirst:(id)arg1;
+ (id)initialsForName:(id)arg1;
+ (id)initialsForPerson:(id)arg1;

@end

