//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRLocaleCommon.h>

@class NSLocale;

__attribute__((visibility("hidden")))
@interface SCRNSLocale : SCRLocaleCommon
{
    NSLocale *__locale;
}

+ (id)autoupdatingCurrentLocale;
+ (id)currentLocale;
@property(readonly, nonatomic) NSLocale *_locale; // @synthesize _locale=__locale;
- (void)dealloc;
- (id)initWithAutoUpdate:(BOOL)arg1;
@property(nonatomic) unsigned long long characterDirection; // @dynamic characterDirection;

@end

