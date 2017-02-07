//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFMIDSMessageInstance : NSObject
{
    long long _retryCount;
    double _retryInterval;
    CDUnknownBlockType _retryAction;
}

+ (id)newMessageInstanceWithAction:(CDUnknownBlockType)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (id)description;

@end
