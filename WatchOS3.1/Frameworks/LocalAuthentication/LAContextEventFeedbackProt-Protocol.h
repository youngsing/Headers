//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError;

@protocol LAContextEventFeedbackProt
- (void)setCredential:(NSData *)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)failProcessedEvent:(long long)arg1 failureError:(NSError *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

