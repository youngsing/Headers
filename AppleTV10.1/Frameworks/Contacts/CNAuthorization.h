//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAuthorization : NSObject
{
}

+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (_Bool)requestAccessWithTimeout:(double)arg1 entityType:(long long)arg2;
+ (_Bool)requestAccessForEntityType:(long long)arg1;
+ (_Bool)isAccessRestrictedForEntityType:(long long)arg1;

@end
