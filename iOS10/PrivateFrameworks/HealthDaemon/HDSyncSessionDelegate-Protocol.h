//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSyncSession, NSArray, NSError;

@protocol HDSyncSessionDelegate <NSObject>
- (void)syncSession:(HDSyncSession *)arg1 didFinishSuccessfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)syncSession:(HDSyncSession *)arg1 sendChanges:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)syncSessionWillBegin:(HDSyncSession *)arg1;
@end
