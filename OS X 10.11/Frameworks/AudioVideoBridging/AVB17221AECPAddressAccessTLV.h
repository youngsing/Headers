//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AVB17221AECPAddressAccessTLV : NSObject
{
    unsigned char mode;
    unsigned long long address;
    NSData *memoryData;
}

@property(copy) NSData *memoryData; // @synthesize memoryData;
@property unsigned long long address; // @synthesize address;
@property unsigned char mode; // @synthesize mode;
- (void)dealloc;

@end

