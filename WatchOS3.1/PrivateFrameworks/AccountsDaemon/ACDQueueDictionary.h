//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject
{
    NSMutableDictionary *_allQueuesByID;
}

- (void).cxx_destruct;
- (id)description;
- (id)keyForRandomQueue;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (_Bool)isQueueEmptyForKey:(id)arg1;
- (_Bool)isEmpty;
- (id)init;

@end

