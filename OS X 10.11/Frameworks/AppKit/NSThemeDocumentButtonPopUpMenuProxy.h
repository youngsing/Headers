//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSPathControl, NSThemeDocumentButton;

@interface NSThemeDocumentButtonPopUpMenuProxy : NSProxy
{
    id realObject;
    NSThemeDocumentButton *documentButton;
    NSPathControl *pathControl;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)createRealObjectIfNeeded;
- (void)dealloc;
- (id)initWithDocumentButton:(id)arg1;

@end

