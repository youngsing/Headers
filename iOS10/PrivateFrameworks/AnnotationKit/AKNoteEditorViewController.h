//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKNoteAnnotation, UITextView;
@protocol AKNoteEditorViewControllerDelegate;

@interface AKNoteEditorViewController : UIViewController
{
    UITextView *_textView;
    AKNoteAnnotation *_annotation;
    id <AKNoteEditorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AKNoteEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AKNoteAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
