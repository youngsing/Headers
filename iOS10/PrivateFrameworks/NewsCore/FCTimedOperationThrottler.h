//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottler-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCOperationThrottler, NSString;
@protocol FCOperationThrottlerDelegate;

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler>
{
    double _cooldownTime;
    FCOperationThrottler *_operationThrottler;
    id <FCOperationThrottlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FCOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCOperationThrottler *operationThrottler; // @synthesize operationThrottler=_operationThrottler;
@property double cooldownTime; // @synthesize cooldownTime=_cooldownTime;
- (void).cxx_destruct;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
@property _Bool suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickle;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
