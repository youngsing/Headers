//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/NSObject-Protocol.h>

@class AVContentProposal, AVInterstitialTimeRange, AVMediaSelectionGroup, AVMediaSelectionOption, AVPlayerViewController, NSString;

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 didRejectContentProposal:(AVContentProposal *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didAcceptContentProposal:(AVContentProposal *)arg2;
- (_Bool)playerViewController:(AVPlayerViewController *)arg1 shouldPresentContentProposal:(AVContentProposal *)arg2;
- (void)skipToPreviousItemForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)skipToNextItemForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 didSelectExternalSubtitleOptionLanguage:(NSString *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 didSelectMediaSelectionOption:(AVMediaSelectionOption *)arg2 inMediaSelectionGroup:(AVMediaSelectionGroup *)arg3;
- (CDStruct_198678f7)playerViewController:(AVPlayerViewController *)arg1 timeToSeekAfterUserNavigatedFromTime:(CDStruct_198678f7)arg2 toTime:(CDStruct_198678f7)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 willResumePlaybackAfterUserNavigatedFromTime:(CDStruct_198678f7)arg2 toTime:(CDStruct_198678f7)arg3;
- (void)playerViewController:(AVPlayerViewController *)arg1 didPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willPresentInterstitialTimeRange:(AVInterstitialTimeRange *)arg2;
@end
