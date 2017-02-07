//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface WMListLevelTextToken : NSObject
{
    NSString *_string;
    int _level;
    CMNumberFormatter *_formatter;
}

+ (id)tokenWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;
@property(readonly) int level; // @synthesize level=_level;
@property(readonly) NSString *string; // @synthesize string=_string;
- (id)stringForIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;

@end
