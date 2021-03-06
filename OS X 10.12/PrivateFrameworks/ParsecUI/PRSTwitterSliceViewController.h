//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

@class PRSTwitterCardSection;

@interface PRSTwitterSliceViewController : PRSCardSectionSliceViewController
{
}

- (id)subtitleTextField;
- (id)formattedTextField;
- (id)titleTextField;
- (id)imageView;
- (id)twitterSliceView;
- (void)syncAttributes;
- (long long)getHeightForText:(id)arg1 maxSize:(long long)arg2 font:(id)arg3;
- (id)subtitleString;
- (double)height;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSTwitterCardSection *twitterCardSection;
- (id)init;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithTwitterCardSection:(id)arg1;

@end

