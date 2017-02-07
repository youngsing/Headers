//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface NFNdefMessage : NSObject <NSSecureCoding>
{
    NSMutableArray *_records;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)asData;
- (id)decode;
- (id)description;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;
- (void)dealloc;

@end
