//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STGenericIntent;

__attribute__((visibility("hidden")))
@interface PUSiriSearch : NSObject
{
    STGenericIntent *_siriIntent;
}

@property(readonly, nonatomic) STGenericIntent *siriIntent; // @synthesize siriIntent=_siriIntent;
- (void).cxx_destruct;
- (id)newSerializedData;
- (id)initWithSiriIntent:(id)arg1;
- (id)initWithData:(id)arg1;

@end
