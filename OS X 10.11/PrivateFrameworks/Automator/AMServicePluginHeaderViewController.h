//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Automator/AMPluginHeaderViewController.h>

@class AMPathPopUpButton, NSButton, NSPopUpButton, NSTextField;

@interface AMServicePluginHeaderViewController : AMPluginHeaderViewController
{
    AMPathPopUpButton *serviceAppPopUpButton;
    NSPopUpButton *serviceInputPopUpButton;
    NSTextField *serviceReceivesLabel;
    NSTextField *serviceInLabel;
    NSTextField *serviceInputProcessingLabel;
    NSPopUpButton *serviceInputProcessingPopUpButton;
    NSButton *serviceReplacesButton;
    BOOL _stateOfOuptutCheckboxWhenLastEnabled;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property BOOL stateOfOutputCheckboxWhenLastEnabled; // @synthesize stateOfOutputCheckboxWhenLastEnabled=_stateOfOuptutCheckboxWhenLastEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateReplaceSelectedCheckbox:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (BOOL)_shouldEnableReplaceSelectedCheckbox;
- (void)loadView;
- (void)_setupControls;
- (id)_applicationPathsToShow;
- (void)_setupTypeMenu;
- (void)dealloc;
- (id)_typeMenuForApplicationWithBundleID:(id)arg1;
- (id)_serviceReceivesLabelText;
- (id)_serviceWorkflowMetaData;

@end

