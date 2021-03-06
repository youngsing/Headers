//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFObservable.h>

#import <MIME/MFConnectableObservable-Protocol.h>

@class MFCancelationToken, NSLock, NSMapTable, NSString;
@protocol MFObservable;

__attribute__((visibility("hidden")))
@interface _MFConnectableObservable : MFObservable <MFConnectableObservable>
{
    id <MFObservable> _observable;
    MFCancelationToken *_cancelable;
    NSLock *_lock;
    NSMapTable *_observersToCancelable;
    _Bool _connected;
}

- (id)connect;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

