//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell
{
    UIButton *_reportSpamButton;
}

+ (id)reportSpamButton;
@property(retain, nonatomic) UIButton *reportSpamButton; // @synthesize reportSpamButton=_reportSpamButton;
- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedButtonText;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end
