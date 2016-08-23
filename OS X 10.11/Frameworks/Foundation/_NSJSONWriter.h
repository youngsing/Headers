//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOutputStream;

__attribute__((visibility("hidden")))
@interface _NSJSONWriter : NSObject
{
    NSOutputStream *outputStream;
    int kind;
    char *dataBuffer;
    unsigned long long dataBufferLen;
    unsigned long long dataLen;
    BOOL freeDataBuffer;
    char *tempBuffer;
    unsigned long long tempBufferLen;
    long long totalDataWritten;
}

- (long long)appendString:(id)arg1 range:(struct _NSRange)arg2;
- (void)resizeTemporaryBuffer:(unsigned long long)arg1;
- (long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

