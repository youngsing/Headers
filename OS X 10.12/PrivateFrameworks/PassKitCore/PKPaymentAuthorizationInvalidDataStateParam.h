//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam
{
    long long _dataType;
    long long _status;
    NSError *_error;
}

+ (id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)description;

@end
