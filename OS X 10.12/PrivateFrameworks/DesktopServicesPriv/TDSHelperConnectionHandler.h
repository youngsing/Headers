//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TDSHelperConnectionHandler : NSObject
{
    struct TDSHelperContext *_helper;
    struct TDSMutex _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHelper;
- (void)handleHelperEvent:(id)arg1;
- (id)initWithHelper:(struct TDSHelperContext *)arg1;

@end

