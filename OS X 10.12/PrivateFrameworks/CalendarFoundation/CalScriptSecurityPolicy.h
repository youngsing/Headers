//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CalScriptSecurityPolicy : NSObject
{
}

+ (BOOL)allowAuditToken:(CDStruct_6ad76789)arg1 forServiceType:(struct __CFString *)arg2;
+ (BOOL)allowAuditTokenOnCurrentAppleEventForServiceType:(struct __CFString *)arg1;
+ (BOOL)isWhiteListedCreateClassName:(id)arg1;
+ (BOOL)allowCreateCommandWithImplementationClassName:(id)arg1 forServiceType:(struct __CFString *)arg2;
+ (BOOL)isWhiteListedApplicationSelector:(SEL)arg1;
+ (BOOL)allowApplicationSelector:(SEL)arg1 forServiceType:(struct __CFString *)arg2;
+ (void)setErrorOnCurrentCommand;

@end
