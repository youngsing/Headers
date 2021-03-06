//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSCopying-Protocol.h>
#import <ContactsFoundation/NSMutableCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_entries;
}

+ (id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)multiDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)eachObject:(CDUnknownBlockType)arg1;
- (_Bool)containsKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;
- (id)objectsForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *allKeys;
@property(readonly, nonatomic) unsigned long long count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithEntries:(id)arg1;
- (id)init;

@end

