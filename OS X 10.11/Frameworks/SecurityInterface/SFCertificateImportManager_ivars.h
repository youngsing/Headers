//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSEnumerator, NSWindow;

__attribute__((visibility("hidden")))
@interface SFCertificateImportManager_ivars : NSObject
{
    NSArray *_sfCertificates;
    NSEnumerator *_sfCertEnumerator;
    struct OpaqueSecPolicyRef *_sfPolicy;
    struct OpaqueSecKeychainRef *_sfDestKeychain;
    NSWindow *_sfParentWindow;
    BOOL _sfDetailsDisclosedBefore;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_clientContextInfo;
    BOOL _noSheetsAppeared;
}

- (void)dealloc;

@end
