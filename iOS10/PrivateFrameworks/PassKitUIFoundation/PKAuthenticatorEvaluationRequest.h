//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PKAuthenticatorEvaluationRequest : NSObject
{
    NSString *_reason;
    NSString *_processName;
    NSNumber *_processIdentifier;
    NSString *_PINTitle;
    NSNumber *_PINLength;
}

@property(copy, nonatomic) NSNumber *PINLength; // @synthesize PINLength=_PINLength;
@property(copy, nonatomic) NSString *PINTitle; // @synthesize PINTitle=_PINTitle;
@property(copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPolicy:(long long)arg1;
- (id)init;

@end

