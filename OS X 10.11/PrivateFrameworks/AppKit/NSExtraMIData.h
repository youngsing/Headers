//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSFont, NSImage, NSMenuItemViewer, NSString, _NSBindingAdaptor;

@interface NSExtraMIData : NSObject
{
    NSAttributedString *attributedTitle;
    NSString *tooltip;
    _NSBindingAdaptor *bindingAdaptor;
    NSMenuItemViewer *menuItemViewer;
    NSImage *onStateImage;
    NSImage *offStateImage;
    NSImage *mixedStateImage;
    NSFont *font;
    NSImage *_image;
    NSString *userKE;
    struct CGSize cachedAttributedTitleSize;
    long long cachedAttributedTitleHeightForDrawing;
    BOOL attributedTitleHasAttachment;
    unsigned short virtualKeyCode;
    unsigned short defaultKEPriority;
    unsigned char userKEMask;
    NSAttributedString *alternateAttributedTitle;
    unsigned long long newItemsCount;
    CDUnknownBlockType actionBlock;
}

- (id)init;

@end

