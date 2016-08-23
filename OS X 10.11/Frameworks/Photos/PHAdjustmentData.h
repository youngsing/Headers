//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PHAdjustmentData : NSObject <NSSecureCoding>
{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(readonly, copy) NSString *formatIdentifier; // @synthesize formatIdentifier=_formatIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;

@end

