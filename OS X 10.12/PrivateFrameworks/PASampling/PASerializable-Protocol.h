//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PASampling/NSObject-Protocol.h>

@class NSString;
@protocol PASerializable;

@protocol PASerializable <NSObject>
+ (id <PASerializable>)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (NSString *)classDictionaryKey;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(struct NSMutableDictionary *)arg2 andDataBufferDictionary:(struct NSMutableDictionary *)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg2;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary *)arg1;
@end
