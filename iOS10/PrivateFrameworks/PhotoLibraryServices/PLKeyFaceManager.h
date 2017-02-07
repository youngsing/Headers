//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary, NSOperationQueue;

@interface PLKeyFaceManager : NSObject
{
    NSMutableDictionary *_operationsByPersonUUID;
    NSLock *_dictionaryLock;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
- (void)operationDidCompletion:(id)arg1;
- (id)makeOperationForPersonUUID:(id)arg1;
- (void)markPersonAsNeedingKeyFace:(id)arg1;
- (void)dealloc;
- (id)init;

@end
