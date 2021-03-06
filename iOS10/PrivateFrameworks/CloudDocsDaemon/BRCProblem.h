//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface BRCProblem : NSObject <NSSecureCoding, NSCopying>
{
    int _type;
    NSSet *_effectedRecordNames;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSSet *effectedRecordNames; // @synthesize effectedRecordNames=_effectedRecordNames;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)mergeWithProblem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProblem:(id)arg1;
- (id)initWithType:(int)arg1 recordName:(id)arg2;

@end

