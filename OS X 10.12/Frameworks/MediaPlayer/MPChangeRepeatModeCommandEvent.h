//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent
{
    BOOL _preservesRepeatMode;
    long long _repeatType;
}

@property(readonly, nonatomic) BOOL preservesRepeatMode; // @synthesize preservesRepeatMode=_preservesRepeatMode;
@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

