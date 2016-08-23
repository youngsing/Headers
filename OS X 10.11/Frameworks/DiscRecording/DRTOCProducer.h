//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEnumerator, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DRTOCProducer : NSObject
{
    id currentGenerator;
    NSMutableArray *contentGenerators;
    NSEnumerator *generatorEnumerator;
}

+ (id)producer;
- (void)cleanupTrackAfterBurn:(id)arg1;
- (unsigned int)produceDataForTrack:(id)arg1 intoBuffer:(char *)arg2 length:(unsigned int)arg3 atAddress:(unsigned long long)arg4 blockSize:(unsigned int)arg5 ioFlags:(unsigned int *)arg6;
- (unsigned int)producePreGapForTrack:(id)arg1 intoBuffer:(char *)arg2 length:(unsigned int)arg3 atAddress:(unsigned long long)arg4 blockSize:(unsigned int)arg5 ioFlags:(unsigned int *)arg6;
- (BOOL)prepareTrack:(id)arg1 forBurn:(id)arg2 toMedia:(id)arg3;
- (void)dealloc;

@end

