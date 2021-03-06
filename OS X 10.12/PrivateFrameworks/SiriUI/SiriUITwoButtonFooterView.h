//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIContentButton, SiriUIKeyline;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView
{
    SiriUIKeyline *_verticalKeyline;
    SiriUIKeyline *_horizontalKeyline;
    SiriUIContentButton *_leftButton;
    SiriUIContentButton *_rightButton;
}

+ (double)defaultHeight;
@property(readonly, nonatomic) SiriUIContentButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) SiriUIContentButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)layout;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

