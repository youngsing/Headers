//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSDictionary, NSObject, NSString;

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange
{
    NSString *_keyPath;
    NSObject *_object;
    NSDictionary *_change;
}

@property(readonly, copy, nonatomic) NSDictionary *change; // @synthesize change=_change;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3;

@end

