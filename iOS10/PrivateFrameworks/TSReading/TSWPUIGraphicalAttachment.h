//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPAttachment.h>

@interface TSWPUIGraphicalAttachment : TSWPAttachment
{
}

- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) struct CGSize size;
- (void)invalidate;
- (id)rendererForAttachment;
- (int)elementKind;

@end

