//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiscRecordingUI/DRSetupPanel.h>

@class NSButton, NSMatrix, NSPopUpButton;

@interface DRBurnSetupPanel : DRSetupPanel
{
    id _advancedItems;
    NSButton *_expander;
    NSPopUpButton *_burnSpeedPopup;
    NSButton *_appendable;
    NSMatrix *_completionActions;
    NSButton *_testBurn;
    NSButton *_verifyBurn;
    NSButton *_eraseDisc;
    void *_reservedBurnSetupPanel[4];
    void *_bsp_privateStorage;
}

+ (id)setupPanel;
+ (void)initialize;
- (void)setExpander:(id)arg1;
- (void)setEraseDisc:(id)arg1;
- (void)setVerifyBurn:(id)arg1;
- (void)setTestBurn:(id)arg1;
- (void)setCompletionActions:(id)arg1;
- (void)setAppendable:(id)arg1;
- (void)setBurnSpeedPopup:(id)arg1;
- (void)setAdvancedItems:(id)arg1;
- (void)setCanSelectEraseDisc:(BOOL)arg1;
- (void)setCanSelectAppendableMedia:(BOOL)arg1;
- (void)setCanSelectTestBurn:(BOOL)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (BOOL)mediaStateChanged:(id)arg1;
- (void)_updateBurnSpeedMenu:(id)arg1;
- (void)deviceSelectionChanged:(id)arg1;
- (void)verifyBurn:(id)arg1;
- (void)eraseDisc:(id)arg1;
- (void)testBurn:(id)arg1;
- (void)completionAction:(id)arg1;
- (void)appendable:(id)arg1;
- (void)burnSpeed:(id)arg1;
- (void)expand:(id)arg1;
- (void)_sizePanelFrom:(struct CGRect)arg1 to:(struct CGRect)arg2 expand:(BOOL)arg3;
- (void)open:(id)arg1;
- (void)eject:(id)arg1;
- (void)_confirmSheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)ok:(id)arg1;
- (void)_savePanelUserDefaults;
- (void)_setBoolValue:(BOOL)arg1 forButton:(id)arg2 optionKey:(id)arg3;
- (void)_setControl:(id)arg1 enabled:(BOOL)arg2;
- (id)burnObject;
- (void)setupForDisplay;
- (BOOL)_itemIsEnabled:(id)arg1;
- (id)defaultDeviceKey;
- (void)_setWindowExpanderDelta:(float)arg1;
- (float)_windowExpanderDelta;
- (id)init;
- (id)initWithNibName:(id)arg1;

@end

