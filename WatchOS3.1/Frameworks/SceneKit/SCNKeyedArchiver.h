//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCNKeyedArchiver : NSKeyedArchiver
{
    NSDictionary *options;
}

+ (id)archivedDataWithRootObject:(id)arg1 options:(id)arg2;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options;
- (void)dealloc;

@end
