//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) BOOL cubemapArrayEnabled; // @dynamic cubemapArrayEnabled;
@property(nonatomic) BOOL debuggingEnabled; // @dynamic debuggingEnabled;
@property(nonatomic) BOOL denormsEnabled; // @dynamic denormsEnabled;
@property(nonatomic) BOOL fastMathEnabled; // @dynamic fastMathEnabled;
@property(nonatomic) unsigned long long languageVersion; // @dynamic languageVersion;
@property(nonatomic) BOOL nativeDoubleEnabled; // @dynamic nativeDoubleEnabled;
@property(copy, nonatomic) NSDictionary *preprocessorMacros; // @dynamic preprocessorMacros;

@end

