//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface AKAbsintheSigner : NSObject
{
    struct NACContextOpaque_ *_context;
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;
- (void).cxx_destruct;
- (BOOL)_didSigningContextExpire;
- (void)dealloc;
- (void)_destroySigningContext;
- (struct NACContextOpaque_ *)_createSigningContext;
- (id)signatureForURLRequest:(id)arg1;

@end
