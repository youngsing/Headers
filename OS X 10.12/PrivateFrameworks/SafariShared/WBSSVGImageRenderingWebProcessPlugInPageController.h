//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSWebProcessPlugInPageController.h>

@protocol WBSSVGImageRenderingObserver;

@interface WBSSVGImageRenderingWebProcessPlugInPageController : WBSWebProcessPlugInPageController
{
    id <WBSSVGImageRenderingObserver> _svgImageRenderingObserver;
}

- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)svgImageRenderingObserver;

@end
