//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PDFKit/PDFCoachMarkDelegate-Protocol.h>
#import <PDFKit/PageImagePoolDelegate-Protocol.h>

@class NSString, PDFPageViewPrivate;

@interface PDFPageView : UIView <PDFCoachMarkDelegate, PageImagePoolDelegate>
{
    PDFPageViewPrivate *_private;
}

- (void).cxx_destruct;
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2 withButton:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3;
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3;
- (void)buttonWidgetChanged:(id)arg1;
- (void)textWidgetChangedTextView:(id)arg1;
- (void)textWidgetDidEndEditingTextField:(id)arg1;
- (void)textWidgetChangedTextField:(id)arg1;
- (void)textWidgetDidBeginEditingTextField:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_addPDFAnnotationButtonWidget:(id)arg1;
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;
- (void)_addPDFAnnotationTextWidgetTextView:(id)arg1;
- (void)_setupPageAnnotations;
- (void)recievePageImage:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)PDFCoachMarkComplete:(id)arg1;
- (_Bool)hasBackgroundImage;
- (double)lastLayoutDuration;
- (_Bool)isTouchingRightHandle:(struct CGPoint)arg1;
- (_Bool)isTouchingLeftHandle:(struct CGPoint)arg1;
- (void)hideTileLayer:(_Bool)arg1;
- (void)previewRotatePage:(double)arg1;
- (void)setEnablePageShadows:(_Bool)arg1;
- (void)appendDebugDotFile:(id)arg1;
- (void)removeCoachMark:(id)arg1;
- (void)addCoachMark:(id)arg1;
- (void)setSearchSelection:(id)arg1;
- (void)setSelection:(id)arg1;
- (_Bool)isPageVisible;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (void)updateVisibility;
- (unsigned long long)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)setShouldAntiAlias:(_Bool)arg1;
- (void)setPage:(id)arg1;
- (id)page;
- (long long)displayBox;
- (void)setDisplayBox:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

