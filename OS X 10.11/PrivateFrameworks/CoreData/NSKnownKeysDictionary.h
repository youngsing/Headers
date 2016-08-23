//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary
{
}

+ (id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)getObjects:(id *)arg1;
- (void)getKeys:(id *)arg1;
- (void)_setValues:(id *)arg1 retain:(BOOL)arg2;
- (void)setValues:(id *)arg1;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (const id *)values;
@property(readonly, nonatomic) NSKnownKeysMappingStrategy *mapping;
- (id)initForKeys:(id)arg1;
- (id)initWithSearchStrategy:(id)arg1;

@end

