//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL, SFPunchout;

@protocol DDParsecHostVCInterface
- (void)openTrailerPunchout:(SFPunchout *)arg1;
- (void)getStatusBarHidden:(void (^)(_Bool))arg1;
- (void)openParsecURL:(NSURL *)arg1;
- (void)interactionEndedWithPunchout:(_Bool)arg1;
- (void)showingFTE:(_Bool)arg1;
- (void)showingErrorView:(_Bool)arg1;
@end

