//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATMessage.h>

@class NSUUID;

@interface CATTaskMessage : CATMessage
{
    NSUUID *_taskUUID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1;

@end

