//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPProtoSerializer : NSObject
{
}

+ (id)arrayWithSPPlist:(id)arg1;
+ (id)dictionaryWithSPPlist:(id)arg1;
+ (id)spPlistWithDictionary:(id)arg1;
+ (id)spPlistWithArray:(id)arg1;
+ (id)protoSPObjectWithArray:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithDictionary:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithObject:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithData:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithString:(id)arg1 forKey:(id)arg2;
+ (id)numberWithSPProtoSockPuppetObject:(id)arg1;
+ (id)protoSPObjectWithNumber:(id)arg1 forKey:(id)arg2;
+ (id)objectWithData:(id)arg1;
+ (id)dataWithObject:(id)arg1;

@end

