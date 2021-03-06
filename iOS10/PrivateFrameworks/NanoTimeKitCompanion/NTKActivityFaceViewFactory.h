//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKComplicationTimelineDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationFactoryDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKWellnessTimelineModelSubscriber-Protocol.h>

@class NSDate, NSString, NTKActivityFaceTimeline, NTKUtilityComplicationFactory, NTKWellnessEntryModel;
@protocol NTKActivityFaceViewFactoryDelegate;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber, NTKComplicationTimelineDelegate>
{
    _Bool _wantsUpdateNowEntryModelNextLive;
    _Bool _timeTravellingOutsideBounds;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    _Bool _hasBeenLiveOrOnDeck;
    _Bool _isHistoricalDataLoaded;
    _Bool _isLoadingData;
    _Bool _showsCanonicalContent;
    _Bool _showsLockedContent;
    NTKUtilityComplicationFactory *_complicationFactory;
    NTKActivityFaceTimeline *_timeline;
    NSDate *_timeTravelDate;
    id <NTKActivityFaceViewFactoryDelegate> _delegate;
    long long _dataMode;
}

+ (_Bool)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarm;
+ (void)_purgeGLContexts;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) __weak id <NTKActivityFaceViewFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsLockedContent; // @synthesize showsLockedContent=_showsLockedContent;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool isHistoricalDataLoaded; // @synthesize isHistoricalDataLoaded=_isHistoricalDataLoaded;
@property(nonatomic) _Bool hasBeenLiveOrOnDeck; // @synthesize hasBeenLiveOrOnDeck=_hasBeenLiveOrOnDeck;
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) NTKActivityFaceTimeline *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) NTKUtilityComplicationFactory *complicationFactory; // @synthesize complicationFactory=_complicationFactory;
- (void).cxx_destruct;
- (id)_complicationSlots;
- (id)_colorComplicationSlots;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)launchActivityApp;
- (double)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (unsigned long long)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (long long)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned long long)arg2 slot:(id)arg3;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(long long)arg3 slot:(id)arg4;
- (double)_lisaGapForState:(long long)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)_dateComplicationFontForStyle:(unsigned long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;
- (void)_resetWristRaiseAnimationTimeout;
- (_Bool)shouldPerformFromZeroWristRaise;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)dealloc;
- (void)_handleActiveEnergyUnitChange;
- (id)_canonicalEntryModel;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) NTKWellnessEntryModel *currentEntryModel;
- (void)_updateRingsForCurrentEntryModelAnimated:(_Bool)arg1;
- (void)_updateRingsForCurrentEntryModel;
- (void)_updateTimeTravelBoundaries;
- (void)endScrubbing;
- (void)startScrubbing;
- (void)_updateDimStateForCurrentTimeline;
- (void)scrubToDate:(id)arg1;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_loadCurrentEntry;
- (void)_extendRightWithEntryModel:(id)arg1;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (void)wellnessTimelineModelHistorcalDataLoaded:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

