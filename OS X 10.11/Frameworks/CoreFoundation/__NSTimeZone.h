//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone
{
    struct __CFString *_name;
    struct __CFData *_data;
    void **_ucal;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(struct __CFString *)arg1 cache:(BOOL)arg2;
+ (id)__new:(struct __CFString *)arg1 data:(struct __CFData *)arg2;
+ (void)initialize;
- (void)finalize;
- (void)dealloc;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (id)name;

@end

