//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderSync/FIFinderSync-Protocol.h>
#import <FinderSync/NSExtensionRequestHandling-Protocol.h>

@class NSImage, NSString;

@interface FIFinderSync : NSObject <FIFinderSync, NSExtensionRequestHandling>
{
}

- (void)beginRequestWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSImage *toolbarItemImage;
@property(readonly, copy) NSString *toolbarItemName;
@property(readonly, copy) NSString *toolbarItemToolTip;

@end

