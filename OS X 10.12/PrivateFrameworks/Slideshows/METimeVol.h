//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface METimeVol : NSObject
{
    float _time;
    float _volume;
}

@property(readonly) float volume; // @synthesize volume=_volume;
@property(readonly) float time; // @synthesize time=_time;
- (BOOL)hasVolume;
- (id)initWithTime:(float)arg1;
- (id)initWithTime:(float)arg1 andVolume:(float)arg2;

@end

