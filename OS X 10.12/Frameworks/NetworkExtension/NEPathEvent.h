//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEPathEvent : NSObject
{
    long long _type;
    NSString *_bundleID;
}

@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 bundleID:(id)arg2;

@end
