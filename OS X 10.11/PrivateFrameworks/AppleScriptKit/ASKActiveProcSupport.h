//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASKActiveProcSupport : NSObject
{
    CDUnknownFunctionPointerType _oldActiveProc;
    CDUnknownFunctionPointerType _activeProc;
}

+ (id)sharedActiveProcSupport;
- (void)setup;
- (void)didFinishLaunching:(id)arg1;
- (id)init;

@end

