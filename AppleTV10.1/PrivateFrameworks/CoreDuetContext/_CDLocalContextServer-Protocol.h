//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuetContext/_CDContextServer-Protocol.h>

@class NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDLocalContextServer <_CDContextServer>
- (void)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forPath:(_CDContextualKeyPath *)arg2 handler:(void (^)(_Bool))arg3;
@end
