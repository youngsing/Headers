//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKNoteAnnotation, AKNoteEditorController, NSView, NSViewController;

@protocol AKNoteEditorControllerDelegate <NSObject>
- (BOOL)handleEditAnnotation:(AKNoteAnnotation *)arg1;
- (NSViewController *)popoverPresentingViewControllerForNoteEditor:(AKNoteEditorController *)arg1;
- (struct CGRect)stickyViewFrameForNoteEditor:(AKNoteEditorController *)arg1;
- (NSView *)stickyContainerForNoteEditor:(AKNoteEditorController *)arg1;
- (unsigned long long)edgeForNoteEditor:(AKNoteEditorController *)arg1;
- (void)noteEditorDidFinishEditing:(AKNoteEditorController *)arg1;
- (void)noteEditorDidBeginEditing:(AKNoteEditorController *)arg1;
@end
