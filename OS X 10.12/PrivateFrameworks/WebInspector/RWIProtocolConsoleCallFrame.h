//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject
{
}

@property(nonatomic) int columnNumber;
@property(nonatomic) int lineNumber;
@property(copy, nonatomic) NSString *scriptId;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *functionName;
- (id)initWithFunctionName:(id)arg1 url:(id)arg2 scriptId:(id)arg3 lineNumber:(int)arg4 columnNumber:(int)arg5;

@end
