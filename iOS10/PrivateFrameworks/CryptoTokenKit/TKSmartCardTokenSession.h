//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession
{
    TKSmartCard *_smartCard;
    _Bool _hasSession;
    TKSmartCard *_errorCard;
}

- (void).cxx_destruct;
- (void)endRequest;
@property(readonly) TKSmartCard *smartCard;
- (_Bool)beginRequest:(long long)arg1 error:(id *)arg2;
- (id)initWithToken:(id)arg1;

@end

