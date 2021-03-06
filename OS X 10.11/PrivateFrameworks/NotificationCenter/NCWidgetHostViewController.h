//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotificationCenter/NCRemoteViewHostViewController.h>

#import <NotificationCenter/NCWidgetHostProtocol-Protocol.h>

@class NSString;
@protocol NCWidgetHostViewControllerDelegate, NCWidgetServiceProtocol;

@interface NCWidgetHostViewController : NCRemoteViewHostViewController <NCWidgetHostProtocol>
{
    _Bool _supportsEdit;
    id <NCWidgetServiceProtocol> _remoteWidgetObject;
}

@property(readonly, nonatomic) id <NCWidgetServiceProtocol> remoteWidgetObject; // @synthesize remoteWidgetObject=_remoteWidgetObject;
@property(readonly, nonatomic) _Bool supportsEdit; // @synthesize supportsEdit=_supportsEdit;
- (void).cxx_destruct;
- (void)widgetHostEditModeChanged:(long long)arg1;
- (void)widgetHostHasContentChanged:(BOOL)arg1;
- (void)remoteViewReadyWithConfiguration:(id)arg1;
@property(readonly) id <NCWidgetHostViewControllerDelegate> widgetDelegate;
- (id)remoteViewServiceClassName;
- (float)contentWidthPriority;
- (struct NSEdgeInsets)margins;
- (struct CGSize)maxSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

