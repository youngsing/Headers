//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack
{
}

@property(readonly, nonatomic, getter=isSkipable) _Bool skipable;
@property(readonly, retain, nonatomic) NSURL *keyServerURL;
@property(readonly, nonatomic, getter=isITunesStream) _Bool ITunesStream;
@property(readonly, retain, nonatomic) NSURL *contentURL;
@property(readonly, retain, nonatomic) NSURL *certificateURL;

@end

