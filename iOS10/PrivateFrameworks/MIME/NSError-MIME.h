//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MIME)
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;
+ (id)mf_timeoutError;
+ (id)mf_cancelledError;
- (_Bool)mf_isTimeoutError;
- (_Bool)mf_isCancelledError;
@end

