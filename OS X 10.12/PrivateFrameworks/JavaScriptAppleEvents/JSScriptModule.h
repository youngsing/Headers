//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JavaScriptAppleEvents/JSModule.h>

@class JSValue, NSString;

@interface JSScriptModule : JSModule
{
    NSString *_identifier;
    NSString *_script;
}

@property(readonly) NSString *script; // @synthesize script=_script;
- (void).cxx_destruct;
- (void)load;
@property(retain) JSValue *result;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 script:(id)arg2;

@end

