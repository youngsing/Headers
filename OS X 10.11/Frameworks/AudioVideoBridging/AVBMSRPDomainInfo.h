//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVBMSRPDomainInfo : NSObject
{
    unsigned char _trafficClass;
    unsigned char _priorityCodePoint;
    unsigned short _vlanID;
}

@property(nonatomic) unsigned short vlanID; // @synthesize vlanID=_vlanID;
@property(nonatomic) unsigned char priorityCodePoint; // @synthesize priorityCodePoint=_priorityCodePoint;
@property(nonatomic) unsigned char trafficClass; // @synthesize trafficClass=_trafficClass;

@end

