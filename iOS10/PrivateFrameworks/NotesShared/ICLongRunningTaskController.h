//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICProgressViewControllerDelegate-Protocol.h>

@class ICProgressViewController, NSDate, NSProgress, NSString, UIWindow;

@interface ICLongRunningTaskController : NSObject <ICProgressViewControllerDelegate>
{
    _Bool _progressViewControllerDidFinishPresenting;
    _Bool _shouldDismissProgressViewController;
    NSString *_progressFormatString;
    struct UIWindow *_window;
    double _intervalBeforeOpeningProgressDialog;
    id _keepAlive;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _updateProgressUIBlock;
    NSProgress *_progress;
    NSDate *_lastAccessibilityAnnouncementDate;
    NSDate *_openProgressDate;
    ICProgressViewController *_progressViewController;
}

+ (void)setMainWindow:(struct UIWindow *)arg1;
@property(nonatomic) _Bool shouldDismissProgressViewController; // @synthesize shouldDismissProgressViewController=_shouldDismissProgressViewController;
@property(nonatomic) _Bool progressViewControllerDidFinishPresenting; // @synthesize progressViewControllerDidFinishPresenting=_progressViewControllerDidFinishPresenting;
@property(retain, nonatomic) ICProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property(retain, nonatomic) NSDate *openProgressDate; // @synthesize openProgressDate=_openProgressDate;
@property(retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // @synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType updateProgressUIBlock; // @synthesize updateProgressUIBlock=_updateProgressUIBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) double intervalBeforeOpeningProgressDialog; // @synthesize intervalBeforeOpeningProgressDialog=_intervalBeforeOpeningProgressDialog;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) NSString *progressFormatString; // @synthesize progressFormatString=_progressFormatString;
- (void).cxx_destruct;
- (void)willDismissProgressViewController:(id)arg1;
- (void)closeProgressDialog;
- (void)openProgressDialog;
- (void)updateProgress;
- (void)completeTaskIfNecessary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startTask:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithWindow:(struct UIWindow *)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (id)init;

@end

