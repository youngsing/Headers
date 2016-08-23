//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SFBasicTLV : NSObject
{
    NSData *mInputData;
    unsigned int mLength;
    const char *mBytePtr;
    unsigned char mTag;
    unsigned int mOutputLength;
    unsigned int mLastLength;
}

+ (unsigned int)parseBERLength:(const char **)arg1 lenlen:(unsigned int *)arg2;
- (unsigned int)lastLength;
- (BOOL)getNextBER:(id *)arg1 tag:(char *)arg2 noAdvance:(BOOL)arg3;
- (BOOL)getNext:(id *)arg1 tag:(char *)arg2;
- (void)skip:(unsigned int)arg1;
- (void)setInputData:(id)arg1;
- (id)inputData;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

