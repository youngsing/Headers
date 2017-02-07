//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <NotesShared/TTAttachment-Protocol.h>

@class ICAttachment, NSString;

@interface ICTextAttachment : NSTextAttachment <TTAttachment>
{
    ICAttachment *_attachment;
}

+ (double)defaultAttachmentThumbnailViewHeight;
+ (_Bool)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;
+ (id)textAttachmentWithIdentifier:(id)arg1;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
@property(retain) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect)arg1;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;
@property(readonly, nonatomic) NSString *viewIdentifier;
- (Class)attachmentViewClass;
- (struct UIView *)newlyCreatedViewForManualRendering;
- (struct UIView *)newlyCreatedView;
- (_Bool)supportsMultipleThumbnailsOnSameLine;
- (_Bool)supportsThumbnailView;
- (_Bool)requiresSpaceAfterAttachmentForPrinting;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)attachmentAttributesForAttributedString;
- (id)attachmentAsNSTextAttachment;
- (id)attachmentFileWrapper;
- (id)attachmentUTI;
- (id)attachmentIdentifier;
- (_Bool)isEqualToModelComparable:(id)arg1;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
