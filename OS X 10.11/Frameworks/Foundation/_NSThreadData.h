//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSThreadData : NSObject
{
    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    BOOL qos;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t {
        long long __sig;
        char __opaque[56];
    } attr;
    struct _opaque_pthread_t *tid;
    double pri;
    double defpri;
}

@end

