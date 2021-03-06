//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSString, NTKComplication;

@interface _NTKSlotComplicationPair : NSObject <NSCopying>
{
    NSString *_slot;
    NTKComplication *_complication;
}

+ (id)pairWithSlot:(id)arg1 complication:(id)arg2;
@property(readonly, copy) NSString *slot; // @synthesize slot=_slot;
@property(readonly) NTKComplication *complication; // @synthesize complication=_complication;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

