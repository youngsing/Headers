//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface BBDismissalItem : NSObject
{
    unsigned long long _feeds;
    NSDate *_expiration;
}

@property(readonly, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasExpired;
- (void)addFeeds:(unsigned long long)arg1;
- (id)initWithFeeds:(unsigned long long)arg1;

@end
