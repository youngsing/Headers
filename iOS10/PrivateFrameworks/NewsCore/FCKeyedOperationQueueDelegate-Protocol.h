//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCKeyedOperationQueue;
@protocol FCOperationCanceling, NSCopying;

@protocol FCKeyedOperationQueueDelegate <NSObject>
- (id <FCOperationCanceling>)keyedOperationQueue:(FCKeyedOperationQueue *)arg1 performAsyncOperationForKey:(id <NSCopying>)arg2 completion:(void (^)(_Bool))arg3;
@end
