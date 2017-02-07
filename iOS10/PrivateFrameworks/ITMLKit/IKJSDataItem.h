//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDataItem-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDataItem-Protocol.h>
#import <ITMLKit/_IKJSDataItemProxy-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IKJSDataItem : IKJSObject <NSObject, IKJSDataItem, _IKJSDataItemProxy, _IKJSDataItem>
{
    NSMutableArray *_observerRecords;
    NSString *_type;
    NSString *_identifier;
    IKJSDataItem *_parent;
    NSArray *_parentAccessorSequence;
}

@property(readonly, copy, nonatomic) NSArray *parentAccessorSequence; // @synthesize parentAccessorSequence=_parentAccessorSequence;
@property(readonly, nonatomic) __weak IKJSDataItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)_notifyObserversForSubpathString:(id)arg1 inDataItem:(id)arg2;
- (void)_notifyObserversForPathString:(id)arg1;
- (void)_setParent:(id)arg1 accessorSequence:(id)arg2;
- (id)_valueForAccessorSequence:(id)arg1 closestParent:(id *)arg2 accessorSequenceFromClosestParent:(id *)arg3;
- (void)touchPropertyPath:(id)arg1;
- (id)getPropertyPath:(id)arg1;
- (void)setPropertyPath:(id)arg1:(id)arg2;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *type;
- (id)initWithType:(id)arg1:(id)arg2;
- (void)addObserver:(id)arg1 forSubscriptsOfPropertyPathWithString:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2;
- (void)resetValueForPropertyPath:(id)arg1;
- (id)valuesForPropertyPath:(id)arg1 subscriptRange:(struct _NSRange)arg2;
- (id)valueForPropertyPath:(id)arg1;
- (void)setValue:(id)arg1 forPropertyPath:(id)arg2;
- (id)asPrivateIKJSDataItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
