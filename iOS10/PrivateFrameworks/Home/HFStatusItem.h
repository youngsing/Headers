//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, HMRoom;

@interface HFStatusItem : HFItem
{
    HMRoom *_room;
    HMHome *_home;
}

@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)standardResultsForMultiServiceResponse:(id)arg1;
- (id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;

@end

