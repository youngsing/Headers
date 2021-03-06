//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFCharacteristicWriteActionBuilderFactory-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMServiceGroup, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating>
{
    id <HFCharacteristicValueSource> _valueSource;
    HMServiceGroup *_serviceGroup;
    NSSet *_serviceItemUUIDs;
    NSSet *_serviceItems;
    NSSet *_controlItems;
}

+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;
@property(retain, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(retain, nonatomic) NSSet *serviceItems; // @synthesize serviceItems=_serviceItems;
@property(retain, nonatomic) NSSet *serviceItemUUIDs; // @synthesize serviceItemUUIDs=_serviceItemUUIDs;
@property(readonly, nonatomic) HMServiceGroup *serviceGroup; // @synthesize serviceGroup=_serviceGroup;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
- (id)services;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)containsActionableCharacteristics;
- (id)controlPanelItems;
- (id)incrementalStateControlItem;
- (id)primaryStateControlItem;
- (id)allControlItems;
- (id)_aggregatedValueSource;
- (_Bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
- (_Bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;
- (void)_updateControlItems;
- (_Bool)_reloadServiceItems;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initForCopyWithValueSource:(id)arg1 serviceGroup:(id)arg2 serviceItems:(id)arg3 controlItems:(id)arg4;
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

