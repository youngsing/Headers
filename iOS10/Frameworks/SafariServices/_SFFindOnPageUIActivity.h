//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@class _SFFindOnPageView;

@interface _SFFindOnPageUIActivity : _SFActivity
{
    _SFFindOnPageView *_findOnPageView;
}

- (void).cxx_destruct;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithFindOnPageView:(id)arg1;

@end
