//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class NSError;

@interface CKSoftwareUpdateStatus : NSObject <NSSecureCoding>
{
    BOOL _canCancel;
    long long _state;
    unsigned long long _bytesDownloaded;
    unsigned long long _bytesTotal;
    double _percentComplete;
    double _estimatedTimeRemaining;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(readonly, nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) unsigned long long bytesTotal; // @synthesize bytesTotal=_bytesTotal;
@property(readonly, nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithProgress:(double)arg1 statusInfo:(id)arg2 canCancel:(BOOL)arg3;

@end

