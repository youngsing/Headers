//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTouchBarItemOverlay.h>

@class NSString, NSTouchBarItem;

__attribute__((visibility("hidden")))
@interface NSTouchBarItemOverlayForRemoteView : NSTouchBarItemOverlay
{
    unsigned int _shown;
    NSString *_remoteViewIdentifier;
    NSTouchBarItem *_item;
}

@property(retain) NSString *remoteViewIdentifier; // @synthesize remoteViewIdentifier=_remoteViewIdentifier;
- (void)hide;
- (void)show;
- (BOOL)shown;
- (void)didChangePopoverBarState:(unsigned char)arg1;
- (id)initWithItem:(id)arg1;
- (void)dealloc;

@end

