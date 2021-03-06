//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/NSObject-Protocol.h>

@class BiometricKitIdentity, NSDictionary;

@protocol BiometricKitDelegateXpcProtocol <NSObject>
- (BOOL)isDelegate;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(BiometricKitIdentity *)arg1 withDictionary:(NSDictionary *)arg2;
- (void)touchIDButtonPressed:(BOOL)arg1;
- (void)homeButtonPressed;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(BiometricKitIdentity *)arg1 withDictionary:(NSDictionary *)arg2;
- (void)enrollResult:(BiometricKitIdentity *)arg1;
@end

