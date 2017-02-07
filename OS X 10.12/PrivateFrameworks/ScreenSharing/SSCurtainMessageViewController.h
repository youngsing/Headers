//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSString, NSTextField;
@protocol SSCurtainMessageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SSCurtainMessageViewController : NSViewController
{
    NSString *_machineName;
    BOOL runningAsSheet;
    id <SSCurtainMessageViewControllerDelegate> delegate;
    NSTextField *_curtainMessageTextField;
}

@property NSTextField *curtainMessageTextField; // @synthesize curtainMessageTextField=_curtainMessageTextField;
@property(getter=isRunningAsSheet) BOOL runningAsSheet; // @synthesize runningAsSheet;
@property id <SSCurtainMessageViewControllerDelegate> delegate; // @synthesize delegate;
- (void)focus;
@property(copy) NSString *curtainMessage;
- (void)okClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)updateTitle;
@property(retain) NSString *machineName;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
