//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPUIGraphicalAttachment.h>

__attribute__((visibility("hidden")))
@interface TSTFormulaEqualsTokenAttachment : TSWPUIGraphicalAttachment
{
}

- (id)description;
- (void)saveToArchive:(struct FormulaEqualsTokenAttachmentArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct FormulaEqualsTokenAttachmentArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;
- (double)baselineOffset;
- (struct CGSize)size;
- (id)rendererForAttachment;

@end

