//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : NSObject
{
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)description;
- (unsigned long long)adjustValueCount;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)arg1;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setIsEscher:(BOOL)arg1;
- (BOOL)isEscher;
- (id)equivalentCustomGeometry;
- (int)type;
- (id)adjustValues;
- (void)dealloc;
- (id)init;

@end

