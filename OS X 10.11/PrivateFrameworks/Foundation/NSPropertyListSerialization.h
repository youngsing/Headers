//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSPropertyListSerialization : NSObject
{
    void *reserved[6];
}

+ (id)propertyListWithStream:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(out id *)arg4;
+ (long long)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(out id *)arg5;
+ (id)propertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(out id *)arg4;
+ (id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id *)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned long long)arg2 format:(unsigned long long *)arg3 errorDescription:(out id *)arg4;
+ (id)dataFromPropertyList:(id)arg1 format:(unsigned long long)arg2 errorDescription:(out id *)arg3;
+ (BOOL)propertyList:(id)arg1 isValidForFormat:(unsigned long long)arg2;
- (id)init;

@end

