//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABFileServices-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABFileServices : NSObject <ABFileServices>
{
}

+ (id)sharedInstance;
- (int)dlclose:(void *)arg1;
- (void *)dlsym:(void *)arg1:(const char *)arg2;
- (void *)dlopen:(const char *)arg1:(int)arg2;
- (id)NSTemporaryDirectory;
- (int)fcntl_flock:(int)arg1:(int)arg2:(struct flock *)arg3;
- (int)flock:(int)arg1:(int)arg2;
- (int)fstatfs:(int)arg1:(struct statfs *)arg2;
- (int)statfs:(const char *)arg1:(struct statfs *)arg2;
- (int)close:(int)arg1;
- (int)open:(const char *)arg1:(int)arg2:(unsigned short)arg3;
- (int)errnoValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

