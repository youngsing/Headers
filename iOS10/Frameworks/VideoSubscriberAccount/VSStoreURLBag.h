//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSURLBag;

__attribute__((visibility("hidden")))
@interface VSStoreURLBag : NSObject
{
    SSURLBag *_bag;
}

@property(retain, nonatomic) SSURLBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
