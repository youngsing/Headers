//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOptionPickerView.h>

@class NSMutableDictionary, NSMutableSet, NSString, NTKComplication, NTKComplicationDisplayWrapperView;
@protocol NTKComplicationPickerViewDataSource;

@interface NTKComplicationPickerView : NTKEditOptionPickerView
{
    NSMutableSet *_loadedComplications;
    NSMutableDictionary *_displaysByComplication;
    NSMutableDictionary *_controllersByComplication;
    NSMutableDictionary *_layoutRulesByComplication;
    _Bool _needsReload;
    long long _style;
    id <NTKComplicationPickerViewDataSource> _dataSource;
    NSString *_complicationSlot;
}

@property(retain, nonatomic) NSString *complicationSlot; // @synthesize complicationSlot=_complicationSlot;
@property(nonatomic) __weak id <NTKComplicationPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_detachComplicationDisplays;
- (void)_reloadLayoutForComplication:(id)arg1;
- (void)_loadComplication:(id)arg1;
- (id)_displayByLoadingComplication:(id)arg1;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (void)_willDisplayFaceView:(id)arg1;
- (Class)_cylinderFaceViewClass;
- (void)stealSelectedComplicationDisplay:(id *)arg1 controller:(id *)arg2;
@property(readonly, nonatomic) NTKComplicationDisplayWrapperView *selectedComplicationDisplay;
- (id)complicationAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NTKComplication *selectedComplication;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)dealloc;
- (id)initWithAllowedComplications:(id)arg1 selectedComplication:(id)arg2;

@end

