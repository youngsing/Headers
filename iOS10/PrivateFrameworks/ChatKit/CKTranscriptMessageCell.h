//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell
{
    _Bool _wantsContactImageLayout;
    UIButton *_failureButton;
}

+ (double)failureButtonWidthPlusSpacing;
@property(retain, nonatomic) UIButton *failureButton; // @synthesize failureButton=_failureButton;
@property(nonatomic) _Bool wantsContactImageLayout; // @synthesize wantsContactImageLayout=_wantsContactImageLayout;
- (void).cxx_destruct;
- (id)contactImageView;
@property(readonly, nonatomic) _Bool failureButtonAdjustsContentAlignmentRect;
@property(nonatomic) _Bool failed;
- (void)layoutSubviewsForContents;
- (id)description;

@end
