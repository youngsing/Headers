//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSPrintInfo;

@interface NSPrintInfoDictionaryProxy : NSMutableDictionary
{
    NSPrintInfo *_printInfo;
    int _purpose;
}

+ (id)_pmKeyForKey:(id)arg1;
+ (id)_keysForPMKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)superRelease;
- (oneway void)release;
- (id)retain;
- (id)initWithPrintInfo:(id)arg1 purpose:(int)arg2;

@end

