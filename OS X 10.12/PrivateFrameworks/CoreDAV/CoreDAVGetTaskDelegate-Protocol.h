//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVGetTask, NSData, NSError;

@protocol CoreDAVGetTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)getTask:(CoreDAVGetTask *)arg1 data:(NSData *)arg2 error:(NSError *)arg3;
@end

