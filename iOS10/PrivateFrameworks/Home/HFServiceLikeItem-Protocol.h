//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFControlItemVendor-Protocol.h>
#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFServiceVendor-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@protocol HFCharacteristicValueSource;

@protocol HFServiceLikeItem <HFControlItemVendor, HFHomeKitItemProtocol, HFServiceVendor, NSCopying>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
@end

