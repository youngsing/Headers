//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject
{
    BBBulletin *_bulletin;
    unsigned long long _feeds;
}

@property(nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;

@end
