//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSProgress, NSString;

@interface NSApplicationExtensionSession : NSObject
{
}

- (void)completeSessionReturningItems:(id)arg1 error:(id)arg2;
@property(readonly) NSArray *inputItems;
@property(readonly) NSString *extensionType;
@property(retain) NSProgress *progress;

@end

