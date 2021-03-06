//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDPreviewAction.h>

#import <DataDetectorsUI/SFSafariViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDURLPreviewAction : DDPreviewAction <SFSafariViewControllerDelegate>
{
}

+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
+ (id)validatedURLWithURL:(id)arg1 result:(struct __DDResult *)arg2;
- (id)commitURL;
- (void)setPreviewMode:(_Bool)arg1;
- (_Bool)requiresEmbeddingNavigationController;
- (void)safariViewControllerDidFinish:(id)arg1;
- (id)createViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

