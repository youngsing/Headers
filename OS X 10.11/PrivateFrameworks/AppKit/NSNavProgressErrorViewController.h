//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImage, NSString;

@interface NSNavProgressErrorViewController : NSViewController
{
    NSButton *_rightButton;
    NSString *_messageString;
    NSImage *_image;
    NSImage *_badgeImage;
}

@property(retain) NSImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, retain) NSButton *rightButton; // @dynamic rightButton;
- (void)dealloc;
- (id)init;

@end

