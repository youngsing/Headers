//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CoreThemeConstantHelper : NSObject
{
    unsigned long long _identifier;
    NSString *_label;
    NSString *_displayName;
}

+ (id)helperForStructAtIndex:(long long)arg1 inAssociatedGlobalList:(void *)arg2;
- (id)description;
- (void)dealloc;
- (id)displayName;
- (id)label;
- (long long)identifier;

@end
