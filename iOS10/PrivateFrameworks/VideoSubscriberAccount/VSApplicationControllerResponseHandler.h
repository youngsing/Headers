//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponseHandler : NSObject
{
}

- (id)_parseSAMLResponseString:(id)arg1 error:(id *)arg2;
- (void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id *)arg2;
- (void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
