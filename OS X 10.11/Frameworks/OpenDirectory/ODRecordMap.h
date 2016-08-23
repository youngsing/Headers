//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface ODRecordMap : NSObject
{
    NSString *native;
    NSDictionary *odPredicate;
    NSMutableDictionary *attributes;
}

+ (id)recordMap;
+ (id)recordMapFromDictionary:(id)arg1;
@property(copy) NSDictionary *odPredicate; // @synthesize odPredicate;
@property(copy) NSString *native; // @synthesize native;
@property(readonly, copy) NSDictionary *dictionary;
- (void)setAttributeMap:(id)arg1 forStandardAttribute:(id)arg2;
- (id)attributeMapForStandardAttribute:(id)arg1;
@property(readonly, copy) NSArray *standardAttributeTypes;
@property(readonly, copy) NSDictionary *attributes;
- (id)init;

@end
